#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
} *head,*last;

void RDisplay(Node* p){
    if(p!=NULL){
        cout<<p->data<<" ";
        RDisplay(p->next);
    }
}

void InsertLast(int x){
    Node *t=new Node;
    t->data=x;
    t->next=NULL;
    if(head==NULL)
        head=last=t;
    else{
        last->next=t;
        last=t;
    }
}

int main(){
    InsertLast(23);
    InsertLast(2);
    InsertLast(3);
    InsertLast(123);
    InsertLast(43);

    Node *p=head;
    RDisplay(p);
    cout<<endl;
    return 0;
}