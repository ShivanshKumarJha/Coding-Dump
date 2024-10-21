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
    int num=255;

    //Displaying using different bases
    cout<<dec<<num<<endl;
    cout<<hex<<num<<endl;
    cout<<oct<<num<<endl;

    //Displaying the base prefix for hex and oct
    cout<<"\n---------------------"<<endl;
    cout<<showbase;
    cout<<dec<<num<<endl;
    cout<<hex<<num<<endl;
    cout<<oct<<num<<endl;

    //Displaying the hex value in uppercase
    cout<<"\n---------------------"<<endl;
    cout<<showbase<<uppercase;
    cout<<hex<<num<<endl;

    //Displaying the + sign in front of the positive base 10 numbers
    cout<<"\n---------------------"<<endl;
    cout<<showpos;
    cout<<dec<<num<<endl;
    cout<<hex<<num<<endl;
    cout<<oct<<num<<endl;

    //Setting using the set method
    cout<<"\n---------------------"<<endl;
    cout.setf(ios::showbase); 
    cout.setf(ios::uppercase); 
    cout.setf(ios::showpos); 

    //Resetting to default
    cout<<"\n---------------------"<<endl;
    cout<<resetiosflags(ios::basefield);
    cout<<resetiosflags(ios::showbase);
    cout<<resetiosflags(ios::showpos);
    cout<<resetiosflags(ios::uppercase);
    return 0;
}