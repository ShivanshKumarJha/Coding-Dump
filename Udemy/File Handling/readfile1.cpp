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
    ifstream in_file;
    in_file.open("test.txt",ios::in);
    string line;
    int num;
    double total;

    if(!in_file.is_open()){
        cerr<<"Problem opening file"<<endl;
        return 1;
    }

    in_file>>line>>num>>total;
    cout<<line<<endl;
    cout<<num<<endl;
    cout<<total<<endl;

    cout<<"\n----------------After formatting----------------"<<endl;
    while(!in_file.eof()){
        in_file>>line>>num>>total;
        cout<<setw(10)<<left<<line
            <<setw(10)<<num
            <<setw(10)<<total
            <<endl;
    }

    in_file.close();
    return 0;
}