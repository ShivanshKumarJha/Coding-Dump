#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Node {
	public :
	T data;
	Node *next;

	Node(T data) {
    	this->data = data;
    	next = NULL;
	}
};

template<typename T>
class StackUsingLL {
	// Define the data members
    Node<T> *head;
    int size;

public:
    StackUsingLL() {
        head=NULL;size=0;
    }

    int getSize() {
        return size;
    }

    bool isEmpty() {
        return size==0;
    }

    void push(T element) {
        Node<T> *newNode=new Node<T>(element);
        size++;
        if(head==NULL){head=newNode;}
        else{newNode->next=head;head=newNode;}
    }

    T pop() {
        if(head==NULL){return -1;}
        else{
        	T ans=head->data;
        	Node<T> *temp=head;
        	head=head->next;
        	size--;
        	delete temp;
        	return ans;
        }
    }

    T top() {
        if(!head){return -1;}
        else{return head->data;}
    }
};

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	StackUsingLL<int> s;
	s.push(10);
	s.push(20);
	s.push(30);

	cout<<s.top()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.top()<<endl;
	cout<<s.getSize()<<endl;
	cout<<boolalpha<<s.isEmpty();
	return 0;
}