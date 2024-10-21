#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void Concatenate(Node* p1,Node* p2){
    while(p1->next!=NULL)
        p1=p1->next;
    p1->next=p2;
}

void Display(Node* p1){
    while(p1!=NULL){
        cout<<p1->data<<" ";
        p1=p1->next;
    }
}

int main(){
    int A[]={2,9,6,8};
    int B[]={10,4,7};
    
    Node* head1=new Node;
    head1->data=A[0];
    head1->next=nullptr;

    Node* last1;
    last1=head1;

    for(int i=1;i<4;i++){
        Node* temp=new Node;
        temp->data=A[i];
        temp->next=nullptr;
        last1->next=temp;
        last1=temp;
    }

    Node* head2=new Node;
    head2->data=B[0];
    head2->next=nullptr;

    Node* last2;
    last2=head2;

    for(int i=1;i<3;i++){
        Node* temp=new Node;
        temp->data=B[i];
        temp->next=nullptr;
        last2->next=temp;
        last2=temp;
    }

    Node* p1=head1;
    Node* p2=head2;

    Concatenate(p1,p2);
    p1=head1;

    Display(p1);
    return 0;
}