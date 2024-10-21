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

void Insert(int pos,int x){
    Node *t,*p;
    if(pos==0){
        t=new Node;
        t->data=x;
        t->next=head;
        head=t;
    }
    else if(pos>0){
        p=head;
        for(int i=0;i<pos-1 && p;i++){p=p->next;}
        if(p){
            t=new Node;
            t->data=x;
            t->next=p->next;
            p->next=t;
        }
    }
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

    Insert(0,23);
    p=head;
    RDisplay(p);
    cout<<endl;
    
    return 0;
}