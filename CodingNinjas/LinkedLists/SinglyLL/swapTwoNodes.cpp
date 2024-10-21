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

Node *swapNodes(Node *head, int i, int j){
	//Write your code here
    Node* p1;
    Node* c1;
    Node* p2;
    Node* c2;
    Node* temp=head;int C1=0,C2=0;

    if(head==NULL || head->next==NULL){return head;}
    if(i==j){return head;}

    if(i==0 || j==0){
        if((i-j)==1 || (j-i)==1){
            p1=head;c1=p1->next;p2=c1->next;
            c1->next=p1;
            p1->next=p2;
            head=c1;
            return head;
        }
        else{
            p1=head;c1=head->next;int k=max(i,j);
            while(C2!=k-1 && temp!=NULL){
                // if(C2==k){p2=temp;break;}
                C2++;temp=temp->next;
            }
            p2=temp;
            c2=p2->next;
            Node* c3=c2->next;
            c2->next=c1;
            p2->next=p1;
            p1->next=c3;
            head=c2;
            return head;
        } 
    }

    else if((i-j)==1 || (j-i)==1){
        int k=min(i,j);
        while(C2!=k-1 && temp!=NULL){
            // if(C2==k){p1=temp;break;}
            C2++;temp=temp->next;
        }
        p1=temp;
        c1=p1->next;p2=c1->next;c2=p2->next;
        p1->next=p2;p2->next=c1;c1->next=c2;
        return head;
    }

    else{
        int l=min(i,j);int h=max(i,j);
        while(temp!=NULL){
            if(C1==l-1){p1=temp;temp=temp->next;C1++;C2++;}
            else if(C2==h-1){p2=temp;temp=temp->next;C1++;C2++;}
            else{C1++;C2++;temp=temp->next;}
        }
        c1=p1->next;
        c2=p2->next;
        Node* c3=c1->next;
        p1->next=c2;p2->next=c1;c1->next=c2->next;c2->next=c3;
        return head;
    }
}

int main(){
    Node* h=takeInput_Better();
	print(h);
    h=swapNodes(h,1,4);
    print(h);
    return 0;
}