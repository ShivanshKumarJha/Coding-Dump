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
    return slow;
}

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2){
    //Write your code here
    if(head1==NULL){return head2;}
    if(head2==NULL){return head1;}


    Node* fh=NULL;
    Node* ft=NULL;
    if(head1->data<head2->data){fh=head1;ft=head1;head1=head1->next;}
	else{fh=head2;ft=head2;head2=head2->next;}
    while(head1!=NULL && head2!=NULL){
    	if(head1->data<head2->data){
    		ft->next=head1;ft=head1;head1=head1->next;
    	}
    	else{
    		ft->next=head2;ft=head2;head2=head2->next;
    	}
    }
    if(head1!=NULL){ft->next=head1;}
    else{ft->next=head2;}
    return fh;
}

Node* Merge(Node* head){
	if(head==NULL){return NULL;}
	if(head->next==NULL){return head;}
	Node* mid=midPoint(head);
	Node* temp=mid->next;
	mid->next=NULL;
	Node* h1=Merge(head);
	Node* h2=Merge(temp);
	return mergeTwoSortedLinkedLists(h1,h2);
}

int main(){
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);

	Node* h=takeInput_Better();
	print(h);
	h=Merge(h);
	print(h);
	return 0;
}