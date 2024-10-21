#include<bits/stdc++.h>
using namespace std;

string Remove(string S,int sz){
    if(sz==0)
        return S;
    else{
        if(S.sz-1=='x'){
            S.erase(S.sz-1);
            Remove(S,sz-1);
        }
        else    
            Remove(S,sz-1);
    }           
}

int main(){
    cout<<Remove("xaxb")<<endl;
    cout<<Remove("ab")<<endl;
    cout<<Remove("xx")<<endl;
}