#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int> ourMap;

    //Insert 
    pair<string,int> p("abc",1);
    ourMap.insert(p);
    ourMap["def"]=2;

    //Find Or Access
    cout<<ourMap["abc"]<<endl;
    cout<<ourMap.at("def")<<endl;

    cout<<"Size is:"<<ourMap.size()<<endl;
    cout<<ourMap["ghi"]<<endl;
    cout<<"Size is:"<<ourMap.size()<<endl;

    //Check Presence
    ourMap["ghi"]++;
    if(ourMap.count("abc")>0){cout<<"abc is present"<<endl;}
    ourMap.erase("ghi");
    if(ourMap.count("ghi")>0){cout<<"ghi is present"<<endl;}
    else{cout<<"ghi is not present"<<endl;}
    return 0;
}