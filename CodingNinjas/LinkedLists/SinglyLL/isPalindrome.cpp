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

int num(Node *head){
    Node *temp=head;
    if(temp==NULL){
        return 0;}
    int ans=(temp->data)+10*num(temp->next);
    return ans;
}

bool isPalindrome(Node *head)
{
    //Write your code here
    Node *temp=head;
    int revnum=num(head);
    int copy = revnum;
    int num=0;
    
    while(temp!=NULL){
        num=num*10+temp->data;
        temp=temp->next;
    }

    if(revnum==num) return true;

    return false;
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	Node* h=takeInput_Better();
	print(h);
	cout<<boolalpha;
	cout<<isPalindrome(h)<<endl;
	return 0;
}