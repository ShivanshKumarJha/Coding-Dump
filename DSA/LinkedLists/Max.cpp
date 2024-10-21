#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void RDisplay(Node* p){
    if(p!=NULL){
        cout<<p->data<<" ";
        RDisplay(p->next);
    }
}

int Max(Node* p){
    int m=INT64_MIN;
    while(p){
        if(p->data>m)
            m=p->data;
        p=p->next;
    }
    return m;
}

int RMax(Node* p){
    int x=0;
    if(p==NULL)
        return INT64_MIN;
    x=RMax(p->next);
    return x>p->data?x:p->data;
}

int main(){
    int A[]={3,5,7,10,15};

    Node *head=new Node;

    Node *temp;
    Node *last;

    head->data=A[0];
    head->next=nullptr;
    last=head;

    for(int i=1;i<sizeof(A)/sizeof(A[0]);i++){
        temp=new Node;
        temp->data=A[i];
        temp->next=nullptr;
        last->next=temp;
        last=temp;        
    }

    Node* p=head;
    RDisplay(p);
    cout<<endl;

    p=head;
    cout<<"Max is "<<Max(p)<<endl;

    p=head;
    cout<<"Max is "<<RMax(p)<<endl;
    return 0;
}