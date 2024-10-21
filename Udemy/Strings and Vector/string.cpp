#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    string s2 {"Frank"};
    string s3 {s2};
    string s4 {"Frank",3};
    string s5 (s3,0,2);
    string s6 {3,'X'};

    string s7;
    s7="HELLO WORLD";
    string s8 {"HELLO"};
    s8=s7; 

    string part_1 {"C++ is"};
    string part_2 {"a powerful"};
    string sentence;
    sentence=part_1+" "+part_2+" "+"language";
    // sentence="C++"+"is a powerful language";  WRONG SYNTAX
    cout<<sentence<<endl;

    cout<<s2[0]<<endl;
    cout<<s2.at(1)<<endl;

    s2[0]='P';
    s2.at(0)='P';

    for(char c: s2){
        cout<<c<<endl;;
    }

    for(int i=0;i<s2.length();i++){
        cout<<s2.at(i)<<endl;
    }

    cout<<s2.substr(0,5)<<endl;   //Starts from index 0 and of length 5

    cout<<s2.find("Pr")<<endl;
    cout<<s2.find("an",1)<<endl;
    cout<<s2.erase(0,2)<<endl;    //Starting index,length

    string s10,s11;
    cin>>s10;    //Only accepts till the space i.e. Hello if we type Hello World
    getline(cin,s11);  //Accepts till the new charcater line appears
    cout<<s10<<endl;
    cout<<s11<<endl;
    return 0;
}