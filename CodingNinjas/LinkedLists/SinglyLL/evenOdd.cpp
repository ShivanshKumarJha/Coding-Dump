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

Node *evenAfterOdd(Node *head){
	//write your code here
	if(head==NULL || head->next==NULL){return head;}
    Node* p=head;
    Node* evenh=NULL;
    Node* event=NULL;
    Node* oddh=NULL;
    Node* oddt=NULL;
    while(head!=NULL){
        if((head->data)%2==0){
            if(evenh==NULL){evenh=head;event=head;head=head->next;}
            else{event->next=head;event=event->next;head=head->next;}
        }
        else{
            if(oddh==NULL){oddh=head;oddt=head;head=head->next;}
            else{oddt->next=head;oddt=oddt->next;head=head->next;}
        }
    }
    if(oddh==NULL){return evenh;}
    else if(evenh==NULL){return oddh;}
    else{
        oddt->next=NULL;event->next=NULL;
        oddt->next=evenh;
        return oddh;
    }
}


int main(){
    Node* h=takeInput_Better();
	print(h);
    h=evenAfterOdd(h);
    print(h);
    return 0;
}