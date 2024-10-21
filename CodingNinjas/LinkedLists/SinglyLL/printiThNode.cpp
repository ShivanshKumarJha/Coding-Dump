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

void printIthNode(Node *head, int i)
{
    //Write your code here
    Node* temp=head;
	int count=0;
    while(temp!=NULL){
		if(count==i){cout<<temp->data;}
		count++;
		temp=temp->next;
	}
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	Node* h=takeInput_Better();
	print(h);
	printIthNode(h,2);
	return 0;
}