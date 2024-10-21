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

Node* Search(Node* p,int key){
    while(p!=NULL){
        if(key==p->data)
            return p;
        p=p->next;
    }
    return NULL;
}

Node* RSearch(Node* p,int key){
    if(p==NULL)
        return NULL;
    if(key==p->data)
        return p;
    return RSearch(p->next,key);
}

int main(){
    int A[]={1,2,3,4,5,12,56};

    Node* head=new Node;

    Node* temp;
    Node* last;

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
    temp=Search(p,5);
    if(temp){
        cout<<"Key is found"<<endl;}
    else{
        cout<<"Key not found"<<endl;}
    p=head;


    temp=RSearch(p,5);
    if(temp){
        cout<<"Key is found"<<endl;}
    else{
        cout<<"Key not found"<<endl;}
    return 0;
}