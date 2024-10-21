#include<bits/stdc++.h>
using namespace std;
class Account{
    private:
    string name;
    double balance;
    
    public:
    void set_balance(double bal){balance=bal;}
    double get_balance(){return balance;}
    
    void set_name(string n);
    string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_name(string n){
    name=n;
}

string Account::get_name(){
    return name;
}

bool Account::deposit(double amount){
    return true;
    balance+=amount;
}

bool Account::withdraw(double amount){
    if(balance-amount>=0){
        return true;
        balance-=amount;
    }
    else{
        return false;
    }
}

int main(){
    Account shivansh_account;
    shivansh_account.set_name("Shivansh Account");
    shivansh_account.set_balance(1000);

    if(shivansh_account.deposit(200)){
        cout<<"Deposit OK"<<endl;
    }
    else{
        cout<<"Deposit not allowed"<<endl;
    }

    if(shivansh_account.withdraw(500)){
        cout<<"Withdraw OK"<<endl;
    }
    else{
        cout<<"Not Sufficient Funds"<<endl;
    }
    
    if(shivansh_account.withdraw(1500)){
        cout<<"Withdraw OK"<<endl;
    }
    else{
        cout<<"Not Sufficient Funds"<<endl;
    }
    return 0;
}