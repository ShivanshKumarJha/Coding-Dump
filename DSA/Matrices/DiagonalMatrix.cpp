#include<bits/stdc++.h>
using namespace std;

class Diagonal{
    private:
    int *A;
    int n;

    public:
    Diagonal();
    Diagonal(int n);
    void Set(int i,int j,int k);
    int Get(int i,int j);
    void Display();
    ~Diagonal(){delete []A;}; 
};

Diagonal::Diagonal(){
    n=2;
    A=new int[2];
}

Diagonal::Diagonal(int n){
    this->n=n;
    A=new int[n];
}

void Diagonal::Set(int i,int j,int k){
    if(i==j)
        A[i-1]=k;
}

int Diagonal::Get(int i,int j){
    if(i==j)
        return A[i-1];
    else    
        return 0;
}

void Diagonal::Display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                cout<<A[i]<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

int main(){
    Diagonal d(5);
    d.Set(1,1,3);d.Set(2,2,4);d.Set(3,3,5);d.Set(4,4,6);d.Set(5,5,7);
    d.Display();
    cout<<d.Get(4,5)<<endl;
    return 0;
}