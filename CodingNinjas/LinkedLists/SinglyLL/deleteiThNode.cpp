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

// Node *deleteNode(Node *head, int pos)
// {
//     // Write your code here.
//     if (pos == 0) {
//       head = head->next;
//       return head;
//     }
//     Node *temp = head;
//     int count = 0;
//     while (temp->next != NULL && count < pos - 1) {
//       temp = temp->next;
//       count++;
//     }
//     if (temp->next!=NULL) {
//       Node *a = temp->next;
//       Node *b = a->next;
//       temp->next = b;
//       delete a;
//     }
//     return head;
// }

Node *deleteNodeRec(Node *head, int pos){
	//Write your code here
	if(head==NULL){return head;}
	if(pos==0){
		if(head->next==NULL){return NULL;}
		Node* temp=head->next;
		delete head;
		head=temp;
	}
	Node* temp=deleteNodeRec(head->next,pos-1);
	head->next=temp;
	return head;
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	Node* h=takeInput_Better();
	print(h);
	int i;
	cin>>i;
	h=deleteNodeRec(h,i);
	print(h);
	return 0;
}