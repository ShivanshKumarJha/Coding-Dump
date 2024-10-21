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

class Pair{
    public: 
    Node* head;
    Node* tail;
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

Pair reverseLL_2(Node* head){
    if(head==NULL || head->next==NULL){
        Pair ans;
        ans.head=head;
        ans.tail=head;
        return ans;
    }

    Pair smallOutput=reverseLL_2(head->next);

    smallOutput.tail->next=head;
    head->next=NULL;
    Pair ans;
    ans.head=smallOutput.head;
    ans.tail=head;
    return ans;
}

Node* reverseLL(Node* head){
    return reverseLL_2(head).head;
}

int main(){
    Node* h=takeInput_Better();
	print(h);
    h=reverseLL(h);
    print(h);
    return 0;
}