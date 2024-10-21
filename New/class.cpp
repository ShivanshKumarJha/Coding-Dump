#include<bits/stdc++.h>
using namespace std;

class Account{
    private:
    string name;
    double balance;

    public:
    void set_name(string n){name=n;};
    string get_name(){return name;}

    void set_balance(double bal);
    double get_balance();

    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_balance(double bal){balance=bal;}
double Account::get_balance(){return balance;}

bool Account::deposit(double amount){
    balance+=amount;
    return true;}

bool Account::withdraw(double amount){
    if(balance-amount>=0){
        balance-=amount;
        return true;
    }
    else{
        return false;
    }
}

int main(){
    Account shiv_account;
    shiv_account.set_name("Shivansh's Account");
    shiv_account.set_balance(1000);

    if(shiv_account.deposit(200)){
        cout<<"Deposit OK"<<endl;
    }
    else{
        cout<<"Deposit not allowed"<<endl;
    }

    if(shiv_account.withdraw(500)){
        cout<<"Withdrawal OK"<<endl;
    }
    else{
        cout<<"Not sufficient Funds"<<endl;
    }
    
    if(shiv_account.withdraw(1500)){
        cout<<"Withdrawal OK"<<endl;
    }
    else{
        cout<<"Not sufficient Funds"<<endl;
    }

    return 0;
}