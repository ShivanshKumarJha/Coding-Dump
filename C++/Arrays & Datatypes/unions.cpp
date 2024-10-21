#include<iostream>
using namespace std;
union money{
    int rice;       //4
    char car;       //1           Only use 4 bytes memory and only 1
    float rupees;   //4           data at a time
}; 

int main(){
    union money m1;
    m1.rice=34;
    cout<<m1.rice<<endl;
    m1.car='c';
    cout<<m1.rice<<endl;
    cout<<m1.car<<endl;
    return 0;
}