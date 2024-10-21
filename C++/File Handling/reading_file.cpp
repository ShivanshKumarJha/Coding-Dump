#include<iostream>
#include<fstream>
#include<cmath>
#include<string>
#include<vector>
#include<memory>
using namespace std;

int main(){
    ifstream infile;
    infile.open("My.txt");
    if(!infile){cout<<"File is not opened"<<endl;}
    if(infile.is_open()){cout<<"File is Opened"<<endl;}
    string name;
    int roll;
    string branch;
    infile>>name>>roll>>branch;
    if(infile.eof()){cout<<"End Of File reached"<<endl;}
    infile.close();
    cout<<"Name "<<name<<endl;
    cout<<"Roll No.  "<<roll<<endl;
    cout<<"Branch "<<branch<<endl;
    return 0;
}