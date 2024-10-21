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

Node* reverseLL_1(Node* head){
    if(head==NULL || head->next==NULL){return head;}
    Node* smallOutput=reverseLL_1(head->next);
    Node* temp=smallOutput;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head;
    head->next=NULL;
    return smallOutput;
}

Node* reverseLL_2(Node* head){
    if(head==NULL || head->next==NULL){return head;}
    Node* smallOutput=reverseLL_2(head->next);
    // Node* temp=smallOutput;
    
	Node* tail=head->next;
    tail->next=head;
    head->next=NULL;
    return smallOutput;
}

int main(){
    Node* h=takeInput_Better();
	print(h);
    h=reverseLL_2(h);
    print(h);
    return 0;
}