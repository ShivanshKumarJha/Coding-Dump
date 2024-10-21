#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<memory>
using namespace std;

double calculate_mpg(int miles,int gallons){
    if(gallons==0)
        throw 0;
    return static_cast<double>(gallons)/miles;
}

int main(){
    int miles;
    int gallons;
    double miles_per_gallon;

    cout<<"Enter the miles:";
    cin>>miles;
    cout<<"Enter the gallons:";
    cin>>gallons;

    try{
        miles_per_gallon=calculate_mpg(miles,gallons);
        cout<<"Result:"<<miles_per_gallon<<endl;
    }
    catch(int &exc){
        cerr<<"Sorry,can't divide by zero"<<endl;
    }
    cout<<"Bye"<<endl;
    return 0;
}