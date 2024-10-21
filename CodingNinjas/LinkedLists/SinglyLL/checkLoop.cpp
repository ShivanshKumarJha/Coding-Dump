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

bool isLoop(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(slow && fast){
        slow=slow->next;
        fast=fast->next;
        if(fast){fast=fast->next;}
        if(slow==fast){return true;}
        else{return false;}
    }
}

int main(){
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);

	Node* h=takeInput_Better();
	print(h);
    cout<<boolalpha<<isLoop(h)<<endl;
	return 0;
}