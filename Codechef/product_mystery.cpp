#include<bits/stdc++.h>
using namespace std;
int solution(int b,int c){
    int lcm;
    lcm=c/__gcd(b,c);
    return lcm;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int b,c;
        cin>>b>>c;
        int lcm=solution(b,c);
        cout<<lcm<<endl;       
    }
    return 0;
}