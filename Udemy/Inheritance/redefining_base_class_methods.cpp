#include<bits/stdc++.h>
using namespace std;

class Account{
    friend ostream &operator<<(ostream &os,const Account &account);

protected:
    double balance;

public:
    Account();
    Account(double balance);
    void deposit(double amount);
    void withdraw(double amount);
};

Account::Account()
    :Account{0.0}{};

Account::Account(double balance)
    :balance{balance}{};

void Account::deposit(double amount){
    balance+=amount;
}

void Account::withdraw(double amount){
    if(balance-amount>0){
        balance-=amount;
    }
    else{
        cout<<"Insufficient Funds"<<endl;
    }
}

ostream &operator<<(ostream &os,const Account &account){
    os<<"Account Balance: "<<account.balance;
    return os;
}


class Savings_Account:public Account{
    friend ostream &operator<<(ostream &os,const Savings_Account &account);

protected:
    double int_rate;

public:
    Savings_Account();
    Savings_Account(double balance,double int_rate);
    Savings_Account(double amount);
    void deposit(double amount);
};

Savings_Account::Savings_Account(double balance,double int_rate)
    :Account{balance},int_rate{int_rate}{};

Savings_Account::Savings_Account()
    :Savings_Account{0.0,0.0}{};

void Savings_Account::deposit(double amount){
    amount+=(balance*int_rate/100);
    Account::deposit(amount);
}

ostream &operator<<(ostream &os,const Savings_Account &account){
    os<<"Savings Account Balance: "<<account.balance<<" Interest Rate: "<<account.int_rate;
    return os;
}

int main(){
    cout<<"==== Account Class ================"<<endl;
    Account a1{1000.00};
    cout<<a1<<endl;

    a1.deposit(500.00);
    cout<<a1<<endl;

    a1.withdraw(500);
    cout<<a1<<endl;

    a1.withdraw(5000);
    cout<<a1<<endl;

    cout<<"==== Savings Account Class ================"<<endl;
    Savings_Account s1{1000,5.0};
    cout<<s1<<endl;

    s1.deposit(1000);
    cout<<s1<<endl;

    s1.withdraw(2000);
    cout<<s1<<endl;

    s1.withdraw(1000);
    cout<<s1<<endl;

    return 0;
}