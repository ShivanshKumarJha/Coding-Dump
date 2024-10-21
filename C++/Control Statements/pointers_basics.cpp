#include<iostream>
using namespace std;

int main(){
    int i=5;
    int *j=&i;
    cout<<"The value of i is "<<i<<endl;
    cout<<"The value of i is "<<*j<<endl;
    cout<<"The value of j is "<<j<<endl;
    cout<<"The address of i is "<<&i<<endl;
    cout<<"The address of i is "<<j<<endl;
    cout<<"The address of j is "<<&j<<endl;
    return 0;
}

// * operator is used to create the pointer
// & operator is used to print the address of any variable
// * operator is also known as value at address operator
// Pointers are the datatype used to store the address of any variable
// For  storing the address of  the pointer we use the ** operator 