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
    in_file.open("poem.txt",ios::in);

    if(!in_file.is_open()){
        cerr<<"Problem opening file"<<endl;
        return 1;
    }


    // cout<<"\n----------------Using one line at a time----------------"<<endl;
    // string line;
    // while(getline(in_file,line)){
    //     cout<<line<<endl;
    // }

    cout<<"\n----------------Using one character at a time----------------"<<endl;
    char c{};
    while(in_file.get(c)){
        cout<<c;
    }
    cout<<endl;

    in_file.close();
    return 0;
}