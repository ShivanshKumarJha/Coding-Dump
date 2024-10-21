#include<bits/stdc++.h>
using namespace std;

int main(){
    int ans_and=2 & 3;
    int ans_or=2 | 3;
    int ans_not=~2;
    int ans_xor=2 ^ 3;
    int ans_ls=2 << 1;
    int ans_rs=2 >> 1;

    cout<<ans_and<<endl;
    cout<<ans_or<<endl;
    cout<<ans_not<<endl;
    cout<<ans_xor<<endl;
    cout<<ans_ls<<endl;
    cout<<ans_rs<<endl;

    return 0;
}