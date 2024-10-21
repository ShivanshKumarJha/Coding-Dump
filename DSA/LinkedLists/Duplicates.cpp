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

void RemoveDuplicates(Node* p){
    Node* q=p->next;
    while(q!=NULL){
        if(p->data!=q->data){
            p=q;
            q=q->next;
        }          
        else{
            p->next=q->next;
            free(q);
            q=p->next;
        }
    }
}

int main(){
    int A[]={10,20,20,30,40,50};

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
    RDisplay(p);cout<<endl;
    p=head;
    RemoveDuplicates(p);
    p=head;
    RDisplay(p);cout<<endl;
    return 0;
}

//Time Complexity O(n)