#include<bits/stdc++.h>
using namespace std;

class Element{
    public:
    int i;
    int j;
    int x;
};

class Sparse{
    private:
    int m;
    int n;
    int num;
    Element *e;

    public:
    Sparse(int m,int n,int num);
    ~Sparse(){delete []e;}

    Sparse* operator+(Sparse &s);
    friend istream &operator>>(istream &is,Sparse &s);
    friend ostream &operator<<(ostream &os,Sparse &s);
};

Sparse::Sparse(int m,int n,int num){
    this->m=m;
    this->n=n;
    this->num=num;
    e=new Element[this->num];
}

Sparse* Sparse::operator+(Sparse &s){
    int i,j,k;
    if(m!=s.m || n!=s.n)
        return NULL;
    Sparse *sum=new Sparse(m,n,num+s.num);
    i=j=k=0;
    while(i<num && j<s.num){
        if(e[i].i<s.e[j].i)
            sum->e[k++]=e[i++];
        else if(e[i].i>s.e[j].i)
            sum->e[k++]=s.e[j++];
        else{
            if(e[i].j<s.e[j].j)
                sum->e[k++]=e[i++];
            else if(e[i].j>s.e[j].j)
                sum->e[k++]=s.e[j++];
            else{
                sum->e[k]=e[i++];
                sum->e[k++].x+=s.e[j++].x;
            }
        }
    }
    for(;i<num;i++) sum->e[k++]=e[i];
    for(;j<s.num;j++) sum->e[k++]=s.e[j];
    sum->num=k;
    return sum;
}

istream &operator>>(istream &is,Sparse &s){
    cout<<"Enter the non-zero elements";
    for(int i=0;i<s.num;i++)
        cin>>s.e[i].i>>s.e[i].j>>s.e[i].x;
    return is;
}

ostream &operator<<(ostream &os,Sparse &s){
    int k=0;
    for(int i=0;i<s.m;i++){
        for(int j=0;j<s.n;j++){
            if(s.e[k].i==i && s.e[k].j==j)
                cout<<s.e[k++].x<<" ";
            else    
                cout<<"0 ";
        }
        cout<<endl;
    }
    return os;
}

int main(){
    Sparse s1(5,5,5);
    Sparse s2(5,5,5);

    cin>>s1;
    cin>>s2;

    Sparse* sum=s1+s2;

    cout<<"First Matrix"<<endl<<s1;
    cout<<"Second Matrix"<<endl<<s2;
    cout<<"Sum Matrix"<<endl<<*sum;

    return 0;
}