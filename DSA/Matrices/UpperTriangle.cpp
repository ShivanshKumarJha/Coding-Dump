// (n*(n+1))/2 elements are non zero
// (n*(n-1))/2 elements are zero
// Index(A[i][j])=(n+(n-1)+(n-2)+.........+(n-(i-2)))+(j-i)=(n(i-1)-((i-2)*(i-1))/2)+(j-i) Row Major Formula
// Index(A[i][j])=(Summation(j-1))+(i-1)=((j*(j-1))/2)+(i-1)  Column Major Formula
#include<bits/stdc++.h>
using namespace std;

class UpperTri{
    private:
    int *A;
    int n;

    public:
    UpperTri();
    UpperTri(int n);
    void Set(int i,int j,int k);
    int Get(int i,int j);
    void Display();
    ~UpperTri(){delete []A;} 
};

UpperTri::UpperTri(){
    n=2;
    A=new int[(2*(2+1))/2];
}

UpperTri::UpperTri(int n){
    this->n=n;
    A=new int[(n*(n+1))/2];
}

void UpperTri::Set(int i,int j,int k){
    if(i<=j)
        A[(j*(j-1))/2+(i-1)]=k;
}

int UpperTri::Get(int i,int j){
    if(i<=j)
        return A[(j*(j-1))/2+(i-1)];
    else    
        return 0;
}

void UpperTri::Display(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<=j){
                cout<<A[(j*(j-1))/2+(i-1)]<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

int main(){
    UpperTri d(5);
    d.Set(1,1,3);d.Set(2,2,4);d.Set(3,3,5);d.Set(4,4,6);d.Set(5,5,7);d.Set(1,2,4);d.Set(1,3,6);d.Set(1,4,1);
    d.Set(1,5,8);d.Set(2,3,9);d.Set(2,4,7);d.Set(2,5,8);d.Set(3,4,8);d.Set(3,5,9);d.Set(4,5,1);
    d.Display();
    cout<<d.Get(4,5)<<endl;
    return 0;
}