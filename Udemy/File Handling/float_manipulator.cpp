#include<iostream>
#include<fstream>
#include<iomanip>
#include<cmath>
#include<string>
#include<vector>
#include<memory>
#include<set>
using namespace std;

int main(){
    double num1=123456789.987654321;
    double num2=1234.5678;
    double num3=1234.0;

    //Using Defaults
    cout<<"--Defaults------------"<<endl;          
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num2<<endl;

    //Using Precision (2)
    cout<<setprecision(2);
    cout<<"--Precision 2------------"<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num2<<endl;

    //Using Precision (5)
    cout<<setprecision(5);
    cout<<"--Precision 5------------"<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num2<<endl;

    //Using Precision (9)
    cout<<setprecision(9);
    cout<<"--Precision 9------------"<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num2<<endl;

    //Using Precision 3 and fixed
    cout<<setprecision(3)<<fixed;
    cout<<"--Precision 3 - fixed------------"<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num2<<endl;

    //Using Precision 3, fixed and scientific notation
    cout<<setprecision(3)<<scientific;
    cout<<"--Precision 3 - scientific------------"<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num2<<endl;

    //Same but display 'E' 
    cout<<setprecision(3)<<scientific<<uppercase;
    cout<<"--Precision 3 - scientific - uppercase------------"<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num2<<endl;

    //Show '+' for positive numbers
    cout<<setprecision(3)<<fixed<<showpos;
    cout<<"--Precision 3 - fixed - showpos------------"<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num2<<endl;

    //Back to defaults
    cout.unsetf(ios::scientific | ios::fixed);
    cout<<resetiosflags(ios::showpos);

    //Show trailing zeroes up to precision 10
    cout<<setprecision(10)<<showpoint;
    cout<<"--Precision 10 - showpoint------------"<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num2<<endl;

    //Back to defaults
    cout.unsetf(ios::scientific | ios::fixed);
    cout<<setprecision(6);
    cout<<resetiosflags(ios::showpos);
    cout<<resetiosflags(ios::showpoint);

    cout<<"--Back to defaults------------"<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num2<<endl;
    return 0;
}