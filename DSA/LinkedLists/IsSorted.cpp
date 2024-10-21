#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

bool IsSorted(Node* p){
    int x=INT32_MIN;
    while(p!=NULL){
        if(p->data<x)
            return false;
        p=p->next;
        x=p->data;
    }
    return true;
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
    cout<<boolalpha;
    if(IsSorted(p)){
        cout<<"Sorted"<<endl;}
    else{
        cout<<"Not Sorted"<<endl;}    
    return 0;
}

//Time Complexity O(n)