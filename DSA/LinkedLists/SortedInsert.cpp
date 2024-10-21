#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
} *first,*last;

void RDisplay(Node* p){
    if(p!=NULL){
        cout<<p->data<<" ";
        RDisplay(p->next);
    }
}

void SortedInsert(int x){
    Node *t=new Node;
    Node *q=NULL;
    Node *p=first;
    t->data=x;
    t->next=NULL;

    if(first==NULL)
        first=t;
    else{
        while(p && p->data<x){
            q=p;
            p=p->next;
        }
        t->next=q->next;
        q->next=t;
    }
}

int main(){
    int A[]={3,5,7,10,15};

    first=new Node;

    Node *temp;
    Node *last;

    first->data=A[0];
    first->next=nullptr;
    last=first;

    for(int i=1;i<sizeof(A)/sizeof(A[0]);i++){
        temp=new Node;
        temp->data=A[i];
        temp->next=nullptr;
        last->next=temp;
        last=temp;        
    }

    SortedInsert(8);
    Node *p=first;
    RDisplay(p);
    cout<<endl;
    return 0;
}