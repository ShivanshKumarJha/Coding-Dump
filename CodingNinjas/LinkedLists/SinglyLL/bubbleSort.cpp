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

Node* tailNode(Node* head){
    if(head==NULL || head->next==NULL){return head;}
    Node* temp=head;
    while(temp->next){temp=temp->next;}
    return temp;
}

Node *bubbleSort(Node *head){
	// Write your code here
    if(head==NULL || head->next==NULL){return head;}
    Node* h;h=head;
    Node* t=tailNode(head);
    Node* temp=head;
    while()
}

int main(){
    Node* h=takeInput_Better();
	print(h);
    h=bubbleSort(h);
    print(h);
}