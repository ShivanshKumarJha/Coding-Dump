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

Node* insertNode(Node* head,int i,int data){
	Node* newNode=new Node(data);
	if(i==0){
		newNode->next=head;
		head=newNode;
		return head;
	}

	Node* temp=head;
	int count=0;

	while(temp!=NULL && count<i-1){
		temp=temp->next;
		count++;
	}

	if(temp!=NULL){
		newNode->next=temp->next;
		temp->next=newNode;
	}
	return head;
}

Node* insertNodeRec(Node* head,int i,int data){
	if(head==NULL){return head;}
	if(i==0){
		Node* temp=new Node(data);
		temp->next=head;
		head=temp;
		return head;
	}
	Node* temp=insertNode(head->next,i-1,data);
	head->next=temp;
	return head;
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	Node* h=takeInput_Better();
	print(h);
	int i,data;
	cin>>i>>data;
	h=insertNodeRec(h,i,data);
	print(h);
	return 0;
}	