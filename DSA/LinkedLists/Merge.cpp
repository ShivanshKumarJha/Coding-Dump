#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

Node* Merge(Node* p1,Node* p2){
    Node* third;
    Node* last;

    if(p1->data<p2->data){
        third=last=p1;
        p1=p1->next;
        last->next=NULL;
    }
    else{
        third=last=p2;
        p2=p2->next;
        last->next=NULL;
    }

    while(p1 && p2){
        if(p1->data<p2->data){
            last->next=p1;
            last=p1;
            p1=p1->next;
            last->next=nullptr;
        }
        else{
            last->next=p2;
            last=p2;
            p2=p2->next;
            last->next=nullptr;
        }
    }
    if(p1!=NULL){
        last->next=p1;
    }
    else{
        last->next=p2;
    }
    return third;
}

void Display(Node* p1){
    while(p1!=NULL){
        cout<<p1->data<<" ";
        p1=p1->next;
    }
}

int main(){
    int A[]={2,6,8};
    int B[]={4,7,10};
    
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
    Node* third=Merge(p1,p2);

    Display(third);
    return 0;
}

// Time Complexity:Theta(m+n)