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

Node *appendLastNToFirst(Node *head, int n){
    //Write your code here
    Node* tail=head;
    while(tail->next!=NULL){
    	tail=tail->next;
    }
    int length=0,i=0;
    Node* temp=head;
    while(temp!=NULL){length++;temp=temp->next;}
    temp=head;
    while(i<length-n-1){
    	temp=temp->next;
    	i++;
    }
    tail->next=head;
    head=temp->next;
    temp->next=NULL;
    return head;
}

Node *appendLastNToFirstOptimised(Node* head,int n){
	if(n==0 || head==NULL){return head;}
	Node* initialhead=head;
	Node* fast=head;
	Node* slow=head;

	for(int i=0;i<n;i++){
		fast=fast->next;
	}

	while(fast->next!=NULL){
		fast=fast->next;
		slow=slow->next;
	}

	Node* temp=slow->next;
	slow->next=NULL;
	fast->next=initialhead;
	head=temp;
} 

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	Node* h=takeInput_Better();
	print(h);
	return 0;
}