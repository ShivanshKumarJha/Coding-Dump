#include<iostream>
#include<fstream>
#include<cmath>
#include<string>
#include<vector>
#include<memory>
using namespace std;

class Student{
    friend ofstream &operator<<(ofstream &ofs,Student &s);
    friend ifstream &operator>>(ifstream &ifs,Student &s);
public:
    string name;
    int roll;
    string branch;
};

ofstream &operator<<(ofstream &ofs,Student &s){
    ofs<<s.name<<endl;
    ofs<<s.roll<<endl;
    ofs<<s.branch<<endl;
    return ofs;
}

ifstream &operator>>(ifstream &ifs,Student &s){
    ifs>>s.name>>s.roll>>s.branch;
    return ifs;
}

int main(){
    Student s1;
    s1.name="Shivansh";
    s1.roll=12114138;
    s1.branch="EE";
    ofstream ofs("Shivansh.txt",ios::trunc);
    ofs<<s1;
    ofs.close(); 

    Student s2;
    ifstream ifs;
    ifs.open("Shivansh.txt");
    ifs>>s2;
    ifs.close();
    cout<<"Name:"<<s2.name<<" Roll:"<<s2.roll<<" Branch:"<<s2.branch<<endl;
    return 0;
}