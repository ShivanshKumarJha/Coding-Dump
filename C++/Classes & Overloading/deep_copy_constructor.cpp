#include<bits/stdc++.h>
using namespace std;
class Test{
    int a,*p;
    Test(int x){
        a=x;
        p=new int [a];
    }
    
    Test(Test &t){
        a=t.a;
        //p=t.p; Will point to same array leads to mess of dynamic memory alloaction
        p=new int [a];  //Will create a new array in heap and leads to complete  copy of a constructor
    }
};

int main(){
    Test t1(5);     //Constructor Overloading
    Test t2(t);   
    return 0;
}