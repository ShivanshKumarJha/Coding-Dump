#include<iostream> 
using namespace std;
bool check(int n){
    int temp=n;
    int reverse=0;
    while(n>0){
        int lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n=n/10;
    }
    if(reverse==temp){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    if(check(n)==true){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }
    return 0;
}