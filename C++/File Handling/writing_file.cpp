#include<iostream>
#include<fstream>
#include<cmath>
#include<string>
#include<vector>
#include<memory>
using namespace std;

int main(){
    ofstream outfile("My.txt");
    outfile<<"Shivansh"<<endl;
    outfile<<12114138<<endl;
    outfile<<"Electrical Engineering"<<endl;
    outfile.close(); 
    return 0;
}