#include<bits/stdc++.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
    char x;          //take 4 bytes but use only one byte so wate of 3 bytes
    //This is known as Padding
};

int main(){
    struct Rectangle r1={10,5};
    r1.length=15;
    r1.breadth=7;
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
    cout<<sizeof(r1)<<endl;    
    return 0;
}