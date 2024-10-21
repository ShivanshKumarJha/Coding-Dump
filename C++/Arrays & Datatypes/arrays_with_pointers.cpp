#include<iostream>
using namespace std;

int main(){
    // address(new)=address(current)+(i*size of datatype)
    int marks[]={45,56,89,97};
    int *p=marks;
    cout<<"The value of marks[0] is "<<*p<<endl;
    cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    cout<<"The value of marks[3] is "<<*(p+3)<<endl;
    return 0;
}
// p++ print then increament
// ++p increament than print