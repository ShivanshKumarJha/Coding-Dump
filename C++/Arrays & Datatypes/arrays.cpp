#include<iostream>
using namespace std;

int main(){
    int marks[4]={45,56,89,94};
    //We can also write the marks[]={45,56,89,94}
    int math_marks[4];
    math_marks[0]=45;
    math_marks[1]=56;
    math_marks[2]=89;
    math_marks[3]=94;

    cout<<"The marks of Subject1"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    marks[2]=90; //You can also change the value of array
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl<<endl;

    cout<<"The marks of Maths"<<endl;
    cout<<math_marks[1]<<endl;
    cout<<math_marks[0]<<endl;
    cout<<math_marks[2]<<endl;
    cout<<math_marks[3]<<endl<<endl;
    return 0;
}