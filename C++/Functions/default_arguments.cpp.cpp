#include<iostream>
using namespace std;
float moneyReceived(int currentMoney,float factor=1.04){
    return currentMoney*factor;
}
int main(){
    int money=100000;
    cout<<"If you have "<<money<<" in your bank account,you will receive "<<moneyReceived(money)<<" Rs after 1 year"<<endl;
    cout<<"If you have "<<money<<" in your bank account,you will receive "<<moneyReceived(money,1.10)<<" Rs after 1 year"<<endl;
    return 0;
}

//Write the formal default arguments  after writing all non-default arguments

//use const int (variable_name) for making any variable constant