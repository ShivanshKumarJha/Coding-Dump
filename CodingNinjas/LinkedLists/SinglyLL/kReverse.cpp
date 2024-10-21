#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;

	Node(int data){
		this->data=data;
		next=NULL;
	}
};

Node* takeInput_Better(){
	int data;
	cin>>data;
	Node* head=NULL;
	Node* tail=NULL;
	while(data!=-1){
		Node* newNode=new Node(data);
		if(head==NULL){
			head=newNode;
			tail=newNode;
		}
		else{
			tail->next=newNode;
			tail=tail->next;
		}
		cin>>data;
	}
	return head;
}

void print(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}

Node *reverseLinkedList(Node *head) {
    // Write your code here
	if(head==NULL || head->next==NULL){return  head;}
	Node* p=NULL;
	Node* q=head;
	Node* r=head->next;
	while(r!=NULL){
		q->next=p;
		p=q;
		q=r;
		r=r->next;
	}
	q->next=p;
	p=q;
	return p;
}

Node *kReverse(Node *head, int k){
	//Write your code here
    if(head==NULL || head->next==NULL || k==0 || k==1){return head;}
    int count=1;Node* temp=head;Node* h1=head;Node* t1=head;
    while(count!=k && temp->next){
        count++;temp=temp->next;
    }
    t1=temp;
    Node* nextNode=t1->next;
    t1->next=NULL;
    Node* revNode=reverseLinkedList(h1);
    Node* h2=kReverse(nextNode,k);
    h1->next=h2;
    return t1;
}

int main(){
    Node* h=takeInput_Better();
	print(h);
    h=kReverse(h,3);
    print(h);
}