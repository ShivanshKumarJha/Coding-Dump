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

void Reverse(Node* p,int n){
    int array[n];
    int i=0;
    while(p!=NULL){
        array[i]=p->data;
        i++;p=p->next;
    }
    p=head;i--;
    while(p!=NULL){
        p->data=array[i--];
        p=p->next;
    }
}

int main(){
    int A[]={10,20,30,40,50};

    head=new Node;

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

    Node *p=head;
    RDisplay(p);cout<<endl;
    p=head;
    Reverse(p,5);
    p=head;
    RDisplay(p);cout<<endl;
    return 0;
}

//Time Complexity O(n)