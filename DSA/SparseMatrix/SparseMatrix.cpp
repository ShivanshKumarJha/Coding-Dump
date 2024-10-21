#include<bits/stdc++.h>
using namespace std;

struct Element{
    int i;                  //For Row 
    int j;                  //For Column
    int x;                  //For Element
};

struct Sparse{
    int m;                  //Total number of Rows
    int n;                  //Total number of Columns
    int num;                //Total number of non-zero elements
    struct Element *e;      //Array of elements to be created dynamically
};

void Create(Sparse *s){
    cout<<"Enter the dimensions: ";
    cin>>s->m>>s->n;
    cout<<"Enter number of Non-Zero elements: ";
    cin>>s->num;
    s->e=new Element[s->num];
    cout<<"Enter Row,Column,Non-Zero Elements: "<<endl;
    for(int i=0;i<s->num;i++){
        cin>>s->e[i].i>>s->e[i].j>>s->e[i].x;
    }
}

void Display(Sparse s){
    int i,j,k=0;
    for(i=0;i<s.m;i++){
        for(j=0;j<s.n;j++){
            if(s.e[k].i==i && j==s.e[k].j==j)
                cout<<s.e[k++].x<<" ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
}

Sparse* Add(Sparse *s1,Sparse *s2){
    if(s1->m!=s2->m || s1->n!=s2->n)
        return 0;
    Sparse *sum=new Sparse;
    sum->m=s1->m;sum->n=s1->n;
    sum->e=new Element[s1->num+s2->num];
    int i,j,k;
    i=j=k=0;
    while(i<s1->num && j<s2->num){
        if(s1->e[i].i<s2->e[j].i)
            sum->e[k++]=s1->e[i++];
        else if(s1->e[i].i>s2->e[j].i)
            sum->e[k++]=s2->e[j++];
        else{
            if(s1->e[i].j<s2->e[j].j)
                sum->e[k++]=s1->e[i++];
            else if(s1->e[i].j>s2->e[j].j)
                sum->e[k++]=s2->e[j++];
            else{
                sum->e[k]=s1->e[i++];
                sum->e[k++].x+=s2->e[j++].x;
            }
        }
    }
    for(;i<s1->num;i++) sum->e[k++]=s1->e[i];
    for(;j<s2->num;j++) sum->e[k++]=s2->e[j];
    sum->num=k;
    return sum;
}

int main(){
    Sparse S;
    Create(&S);
    Display(S);

    Sparse s1,s2,*s3;
    Create(&s1);
    Create(&s2);

    s3=Add(&s1,&s2);
    cout<<"First Matrix"<<endl;
    Display(s1);

    cout<<"Second Matrix"<<endl;
    Display(s2);

    cout<<"Sum Matrix"<<endl;
    Display(*s3);

    return 0;
}