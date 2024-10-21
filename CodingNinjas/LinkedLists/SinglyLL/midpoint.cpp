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

Node *midPoint(Node *head){
    // Write your code here
    if(head==NULL){return NULL;}
	if(head->next==NULL){return head;}
	Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
    	slow=slow->next;
    	fast=fast->next->next;
    }
    Node* temp=new Node(slow->data);
	temp->next=NULL;
	return temp;
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	Node* h=takeInput_Better();
	print(h);
	Node* h1=midPoint(h);
	print(h1);
	return 0;
}