#include<bits/stdc++.h>
using namespace std;

class Array{
    private:
    int *A;
    int length;
    int size;

    public:
    Array(){
        A=new int[10];
        size=10;
        length=0;
    }
    Array(int sz){
        size=sz;
        A=new int[size];
        length=0;
    }
    ~Array(){delete []A;}
    void Display();
    void Append(int x);
    void Insert(int index,int x);
    int Delete(int index);
};

void Array::Display(){
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

void Array::Append(int x){
    if(length<size){
        A[length++]=x;  //length++ is first appending the value and then increment the length
    }
}

void Array::Insert(int index,int x){
    if(index>=0 and index<=length){
        for(int i=length;i>index;i--){
            A[i]=A[i-1];
        }
        A[index]=x;
        length++;
    }
}

int Array::Delete(int index){
    int x=0;
    if(index>=0 and index<length){
        x=A[index];
        for(int i=index;i<length-1;i++){
            A[i]=A[i+1];
        }
        length--;
    }
    return x;
}

int main(){
    Array arr(10);
    arr.Insert(0,5);
    arr.Insert(1,6);
    arr.Append(7);
    arr.Insert(2,8);
    arr.Display();
    cout<<arr.Delete(0)<<endl;
    arr.Display();
    return 0;
}