#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void Count(Node* p){
    int c=0;
    while(p!=NULL){
        c+=1;
        p=p->next;
    }
    cout<<"Number of nodes are "<<c<<endl;
}

int RCount(Node* p){
    if(p){
        return 1+RCount(p->next);
    }
    return 0;
}

void Sum(Node* p){
    int sum=0;
    while(p!=NULL){
        sum+=p->data;
        p=p->next;
    }
    cout<<"Sum is "<<sum<<endl;
}

int RSum(Node* p){
    if(p){
        return p->data+RSum(p->next);
    }
    return 0;
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

    Node *p=head;
    Count(p);

    p=head;
    cout<<"Number of nodes are "<<RCount(p)<<endl;;

    p=head;
    Sum(p);

    p=head;
    cout<<"Sum is "<<RSum(p)<<endl;
    return 0;
}