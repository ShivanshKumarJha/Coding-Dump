#include<iostream>
using namespace std;

struct employee{    //typedef struct employee
    int eId;        //4         
    char favChar;   //1      Total 9 bytes
    float salary;   //4
};                  //};ep

int main(){
    struct employee Shivansh;     //ep Shivansh
    Shivansh.eId=1;
    Shivansh.favChar='S';
    Shivansh.salary=120000;
    cout<<"The value is "<<Shivansh.eId<<endl;
    cout<<"The value is "<<Shivansh.favChar<<endl;
    cout<<"The value is "<<Shivansh.salary<<endl;
    return 0;
}