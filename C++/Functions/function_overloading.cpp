#include<iostream>
using namespace std;
int add(int a,int b){
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}
int add(int a,int b,int c){
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}
int volume(double r,int h){
    return(3.14*r*r*h);
}
int volume(int s){
    return s*s*s;
}
int volume(int l,int b,int h){
    return l*b*h;
}

int main(){
    cout<<"The sum of 3 and 6 is "<<add(3,6)<<endl;     
    cout<<"The sum of 3,6 and 7 is "<<add(3,6,7)<<endl;  
    cout<<"The volume of cylinder is "<<volume(7,10)<<endl;   
    cout<<"The volume of cube is "<<volume(10)<<endl;   
    cout<<"The volume of cuboid is "<<volume(8,4,5)<<endl;   
    return 0;
}