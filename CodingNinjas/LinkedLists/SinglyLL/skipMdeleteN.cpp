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

Node *skipMdeleteN(Node *head, int M, int N){
	// Write your code here
    if(head==NULL){return NULL;}
    if(M==0){return NULL;}
	if(N==0){return head;}
    Node* t1=head;
    while(t1!=NULL){
        int c1=1,c2=1;
        while(t1->next!=NULL && c1!=M){t1=t1->next;c1++;}
        Node* t2=t1->next;
        while(t2!=NULL && c2!=N){t2=t2->next;c2++;}

        if(t2!=NULL){
          t1->next = t2->next;
          t1 = t1->next;
        }
        else{
            t1->next=NULL;
            t1=t1->next;
        }
        
    }
    return head;
}

int main(){
    Node* h=takeInput_Better();
	print(h);
    h=skipMdeleteN(h,2,3);
    print(h);
    return 0;
}