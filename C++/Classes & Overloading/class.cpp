#include<iostream>
using namespace std;
class Employee{
    private:
        int a,b,c;
    public:
        int d,e;
        void setData(int a1,int b1,int c1);   //DECLARATION
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};
                                    
void Employee :: setData(int a1,int b1,int c1){
    a=a1;         //a,b,c are private variables and we can only change/define the values of a Private
    b=b1;         //Variables inside a function so we are equating a1,b1,c1 with a,b,c respectively
    c=c1;
}
             
int main(){
    Employee shivansh;
    shivansh.d=34;
    shivansh.e=89;
    // shivansh.a=4;   --> This will throw error as a is private
    shivansh.setData(1,2,4);
    shivansh.getData();
    return 0;
}