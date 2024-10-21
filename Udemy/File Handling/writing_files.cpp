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
    ifstream infile;
    infile.open("poem.txt");

    ofstream outfile("My.txt");
    string line;

    if(!infile.is_open()){
        cerr<<"Error opening the infile"<<endl;
        return 1;
    }

    if(!outfile.is_open()){
        cerr<<"Error opening the outfile"<<endl;
        return 1;
    }

    while(getline(infile,line)){
        outfile<<line<<endl;
    }   

    cout<<"File Copied"<<endl;
    infile.close():
    outfile.close():
    return 0;
}