// Index(A[i][j])=(Summation(i-1))+(j-1)=((i*(i-1))/2)+(j-1)  Row Major Formula
// Index(A[i][j])=(n+(n-1)+(n-2)+.........+(n-(j-2)))+(i-j)=(n(j-1)-((j-2)*(j-1))/2)+(i-j) Column Major Formula

#include<bits/stdc++.h>
using namespace std;

class Symmetric{
    private:
    int *A;
    int n;

    public:
    Symmetric();
    Symmetric(int n);
    void Set(int i,int j,int k);
    int Get(int i,int j);
    void Display();
    ~Symmetric(){delete []A;} 
};

Symmetric::Symmetric(){
    n=2;
    A=new int[(2*(2+1))/2];
}

Symmetric::Symmetric(int n){
    this->n=n;
    A=new int[(n*(n+1))/2];
}

void Symmetric::Set(int i,int j,int k){
        A[(i*(i-1))/2+(j-1)]=k;
}

int Symmetric::Get(int i,int j){
    return A[(i*(i-1))/2+(j-1)];
}

void Symmetric::Display(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j)
                cout<<A[(i*(i-1))/2+(j-1)]<<" ";
            else
                cout<<A[(j*(j-1))/2+(i-1)]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    Symmetric d(5);
    d.Set(1,1,3);d.Set(2,2,4);d.Set(3,3,5);d.Set(4,4,6);d.Set(5,5,7);d.Set(2,1,6);d.Set(3,1,2);d.Set(3,2,7);
    d.Set(4,1,6);d.Set(4,2,5);d.Set(4,3,8);d.Set(5,1,3);d.Set(5,2,6);d.Set(5,3,9);d.Set(5,4,1);
    d.Display();
    cout<<d.Get(4,5)<<endl;
    return 0;
}