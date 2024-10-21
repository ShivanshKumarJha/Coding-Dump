#include<iostream>
using namespace std;
int sum(int a,int b); //Function Prototype
// int sum(a,b);        Not Acceptable
// int sum(int,int);    Acceptable
void GoodMorning(void);         //Also we can use void g();
void GoodAfternoon();
void GoodNight();

int main(){
    int num1,num2;
    cout<<"Enter first number "<<endl;
    cin>>num1;
    cout<<"Enter second number "<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2)<<endl;
    GoodMorning();
    GoodAfternoon();
    GoodNight();
    return 0;
}

int sum(int a,int b){
    int c=a+b;
    return c;
}

void GoodMorning(){
    cout<<"Good Morning"<<endl;
}

void GoodAfternoon(){
    cout<<"Good Afternoon"<<endl;
}

void GoodNight(){
    cout<<"Good Night"<<endl;
}

// Formal Parameters--> a and b
// Actual Parameters--> num1 and num2