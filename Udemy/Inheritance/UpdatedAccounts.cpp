#include<bits/stdc++.h>
using namespace std;

class Account{
    friend ostream &operator<<(ostream &os, const Account &account);

private:
    static constexpr const char *def_name="Unnamed Account";
    static constexpr double def_balance=0.0;
    
protected:
    string name;
    double balance;

public:
    Account(string name=def_name,double balance=def_balance);
    bool deposit(double amount);
    bool withdraw(double amount);
    double get_balance() const;
};

Account::Account(string name,double balance)
    :name{name},balance{balance}{}

bool Account::deposit(double amount){
    if(amount<0){
        return false;
    }
    else{
        balance+=amount;
        return true;
    }
}

bool Account::withdraw(double amount){
    if(balance-amount>=0){
        balance-=amount;
        return true;
    }
    else{
        return false;
    }
}

double Account::get_balance() const{
    return balance;
}

ostream &operator<<(ostream &os,const Account &account){
    os<<"[Account: "<<account.name<<":"<<account.balance<<"]";
    return os;
}
 
class Savings_Account:public Account{
    friend ostream &operator<<(ostream &os,const Savings_Account &account);

private:
    static constexpr const char *def_name="Unnamed Savings Account";
    static constexpr double def_balance=0.0;
    static constexpr double def_int_rate=0.0;

protected:
    double int_rate;

public:
    Savings_Account(string name=def_name,double balance=def_balance,double int_rate=def_int_rate);
    bool deposit(double amount);
};

Savings_Account::Savings_Account(string name,double balance,double int_rate)
    :Account{name,balance},int_rate{int_rate}{}

bool Savings_Account::deposit(double amount){
    amount+=amount*(int_rate/100);
    return Account::deposit(amount);
}

ostream &operator<<(ostream &os,const Savings_Account &account){
    os<<"[Savings_Account: "<<account.name<<":"<<account.balance<<":"<<account.int_rate<<"%]";
    return os;
}


    // void display(const vector <Account> &accounts);
    // void deposit(vector <Account> &accounts,double amount);
    // void withdraw(vector<Account> &accounts,double amount);
    
    // void display(const vector <Savings_Account> &accounts);
    // void deposit(vector <Savings_Account> &accounts,double amount);
    // void withdraw(vector<Savings_Account> &accounts,double amount);

void display(const std::vector<Account> &accounts) {
    std::cout << "\n=== Accounts ==========================================" << std::endl;
    for (const auto &acc: accounts) 
        std::cout << acc << std::endl;
}

void deposit(std::vector<Account> &accounts, double amount) {
    std::cout << "\n=== Depositing to Accounts =================================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.deposit(amount)) 
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector<Account> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Accounts ==============================" <<std::endl;
    for (auto &acc:accounts)  {
        if (acc.withdraw(amount)) 
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    } 
}

void display(const std::vector<Savings_Account> &accounts) {
    std::cout << "\n=== Savings Accounts ====================================" << std::endl;
    for (const auto &acc: accounts) 
        std::cout << acc << std::endl;
}

void deposit(std::vector<Savings_Account> &accounts, double amount) {
    std::cout << "\n=== Depositing to Savings Accounts ==========================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.deposit(amount)) 
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector<Savings_Account> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Savings Accounts ======================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.withdraw(amount)) 
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    } 
}

int main(){
    cout.precision(2);
    cout << fixed;
   
    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000} );
    accounts.push_back(Account {"Curly", 5000} );
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);
    
    // Savings 

    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account {} );
    sav_accounts.push_back(Savings_Account {"Superman"} );
    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);
    

    return 0;
}