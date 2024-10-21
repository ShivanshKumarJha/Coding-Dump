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
    infile.open("romeoandjuliet.txt");

    ofstream outfile("romeoandjuliet_out.txt");

    string line;
    int line_number{0};

    while(getline(infile,line)){
        if(line==""){
            outfile<<endl;
        }
        else{
            ++line_number;
            outfile<<setw(7)<<left<<line_number<<line<<endl;
        }
    }

    cout<<"\nCopy Complete"<<endl;
    infile.close();
    outfile.close();
    return 0;
}