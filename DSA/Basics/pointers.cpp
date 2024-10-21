#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    int *p1=(int*) malloc(5*sizeof(int));
    printf("%u\n",&p1);
    free(p1);

    int *p2=new int[5];
    cout<<p2<<endl;
    delete []p2;

    int A[5]={1,2,3,4,5};
    int *p3=A;
    // int *p3=&A[0];  We can also use this
    // for(int i=0;i<5;i++){
    //     cout<<*p3<<" ";
    //     p3++;
    // }
    for(int i=0;i<5;i++){
        cout<<p3[i]<<" ";
    }
    cout<<endl;

    int *P1;
    char *P2;
    double *P3;
    float *P4;
    struct Rectangle *P5;

    cout<<sizeof(P1)<<endl;
    cout<<sizeof(P2)<<endl;
    cout<<sizeof(P3)<<endl;
    cout<<sizeof(P4)<<endl;
    cout<<sizeof(P5)<<endl;
    //Every pointer takes the same amount of memory
    return 0;
}