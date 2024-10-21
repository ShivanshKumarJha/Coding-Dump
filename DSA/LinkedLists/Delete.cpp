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

int Delete(int pos){
    Node *p,*q;
    int x=-1,i;
    if(pos==1){
        x=first->data;
        p=first;
        first=first->next;
        delete p;
    }
    else{
        p=first;
        q=NULL;
        for(i=0;i<pos-1;i++){
            q=p;
            p=p->next;
        }
        if(p){
            q->next=p->next;
            x=p->data;
            delete p;
        }
    }
    return x;
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

    Node *p=first;
    RDisplay(p);
    cout<<endl;
    cout<<"The element deleted is "<<Delete(4)<<endl;
    return 0;
}