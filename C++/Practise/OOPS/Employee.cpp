#include<bits/stdc++.h>
using namespace std;
class Employee{
private:
    string name;
    int age,serviceYear,salary;

public:
    Employee(string name="None",int age=18,int serviceYear=2021,int salary=18000)
        :name{name},age{age},serviceYear{serviceYear},salary{salary}{}

    string getName(){return name;}
    int getAge(){return age;}
    int getserviceYear(){return serviceYear;}
    int getsalary(){return salary;}

    ~Employee(){};
};

int main(){
    Employee e1{"Shivansh",18,2022,160000};
    cout<<(e1.getAge())<<endl;
    Employee e2{"Prateek",11};
    cout<<(e2.getserviceYear())<<endl;
    return 0;
}