#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
} *head;

void RDisplay(Node* p){
    if(p!=NULL){
        cout<<p->data<<" ";
        RDisplay(p->next);
    }
}

Node* Search(Node* p,int key){
    Node* q=NULL;
    while(p!=NULL){
        if(key==p->data){
            q->next=p->next;
            p->next=head;
            head=p;
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}

int main(){
    int A[]={8,3,7,12,9};

    head=new Node;

    Node* last;
    Node* temp;

    head->data=A[0];
    head->next=NULL;
    last=head;

    for(int i=1;i<sizeof(A)/sizeof(A[0]);i++){
        temp=new Node;
        temp->data=A[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }

    Node* p=head;
    RDisplay(p);
    cout<<endl;

    p=head;
    temp=Search(p,7);
    if(temp){cout<<"Key is found"<<endl;}
    else{cout<<"Key not found"<<endl;}

    p=head;
    RDisplay(p);
    cout<<endl;
    
    return 0;
}