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

Node* removeDuplicates(Node *head){
    // Write your code here
    if(head==NULL){return head;}
	Node* t1=head;
	Node* t2=head->next;    
	while(t2!=NULL){
		if((t1->data==t2->data) && t2->next==NULL){
			t1->next=NULL;
			delete t2;
		}
		else if(t1->data!=t2->data){
			t1=t2;t2=t2->next;
		}
		else if((t1->data==t2->data) && t2->next!=NULL){
			Node* temp=t2;
			t2=t2->next;
			t1->next=t2;
			delete temp;
		}
	}
	return head;
}

int main(){
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);

	Node* h=takeInput_Better();
	print(h);
	h=removeDuplicates(h);
	print(h);
	return 0;
}