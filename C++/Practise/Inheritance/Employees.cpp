#include<iostream>
#include<fstream>
#include<cmath>
#include<string>
#include<vector>
#include<memory>
using namespace std;

class Employees{
private:
    int eno;
    string ename;
    string date_birth;
    string date_hired;

public:
    Employees()
        :eno{100},ename{"x"},date_birth{"01-01-2000"},date_hired{"01-01-2022"}{}

    Employees(int eno,string ename,string date_birth,string date_hired)
        :eno{eno},ename{ename},date_birth{date_birth},date_hired{date_hired}{}

    Employees(const Employees &e)
        :eno{e.eno},ename{e.ename},date_birth{e.date_birth},date_hired{e.date_hired}{}

    int get_eno(){return eno;}
    string get_ename(){return ename;}
    string get_date_birth(){return date_birth;}
    string get_date_hired(){return date_hired;}
    
    ~Employees(){}
};



class Salaried:public Employees{
private:
    int annual_bonus;
    int monthly_salary;

public:
    Salaried()
        :annual_bonus{5},monthly_salary{100000}{}
    
    Salaried(int annual_bonus,int monthly_salary)
        :annual_bonus{annual_bonus},monthly_salary{monthly_salary}{}

    Salaried(const Salaried &s)
        :annual_bonus{s.annual_bonus},monthly_salary{s.monthly_salary}{};

    Salaried(const Employees &e,int annual_bonus,int monthly_salary)
        :Employees{e},annual_bonus{annual_bonus},monthly_salary{monthly_salary}{}

    int  get_annual_bonus(){return annual_bonus;}

    int get_monthly_salary(){return monthly_salary;}

    void display();
};

void Salaried::display(){
    cout<<"Eno: "<<get_eno()<<" Ename:"<<get_ename()<<" Date of Birth:"<<get_date_birth()<<" Date of Hiring:"<<get_date_hired()<<" Annual Bonus:"<<annual_bonus<<" Monthly Salary:"<<monthly_salary<<endl;
}



class Hourly:public Employees{
private:
    int hourly_wage;
    int overtime_rate;

public:
    Hourly()
        :hourly_wage{100},overtime_rate{10}{}

    Hourly(int hourly_wage,int overtime_rate)
        :hourly_wage{hourly_wage},overtime_rate{overtime_rate}{}

    Hourly(const Hourly &h)
        :hourly_wage{h.hourly_wage},overtime_rate{h.overtime_rate}{}

    Hourly(const Employees &e,int hourly_wage,int overtime_rate)
        :Employees{e},hourly_wage{hourly_wage},overtime_rate{overtime_rate}{}

    int get_hourly_wage(){return hourly_wage;}    

    int get_overtimr_rate(){return overtime_rate;}

    void display();
};


void Hourly::display(){
    cout<<"Eno: "<<get_eno()<<" Ename:"<<get_ename()<<" Date of Birth:"<<get_date_birth()<<" Date of Hiring:"<<get_date_hired()<<" Hourly Wage:"<<hourly_wage<<" Overtime Rate:"<<overtime_rate<<endl;
}


int main(){
    Salaried s{};
    s.display();
    cout<<endl<<endl;
    Employees e1{100,"Shivansh","26-11-2003","20-02-2022"};
    Salaried s1{e1,8,120000};
    s1.display();
    cout<<endl<<endl;
    Hourly h1{e1,150,6};
    h1.display();
    cout<<endl;
    return 0;
}