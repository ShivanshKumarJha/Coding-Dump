// #include<iostream>
// using namespace std;
// void swapPointer(int* a, int* b);

// int main(){
//     int x,y;
//     cout<<"Enter the number 1"<<endl;
//     cin>>x;
//     cout<<"Enter the number 2"<<endl;
//     cin>>y;
//     cout<<"The value of x is "<<x<<" and y is "<<y<<endl;
//     swapPointer(&x,&y);
//     cout<<"The value of x is "<<x<<" and y is "<<y<<endl;
//     return 0;
// }

// void swapPointer(int* a, int* b){
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }

#include<iostream>
using namespace std;
void swap_value(int* num1,int* num2){
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
}

int main(){
    int num1,num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    swap_value(&num1,&num2);
    cout<<"The value of num1 is "<<num1<<" and num2 is "<<num2<<endl;
    return 0;
}