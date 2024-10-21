#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i=0,count=0;
    cin>>n;
    string s;
    cin>>s;
    // s.erase(remove(s.begin(),s.end(),s[i]),s.end());
    // count(s.begin(),s.end(),s[i])
    while(i==0){
        int c=count(s.begin(),s.end(),s[i]);
        if(c%2!=0){
	        count=count+(c/2)+1;
	    }
	    else{
	        count+=(c/2);
	    }
        s.erase(remove(s.begin(),s.end(),s[i]),s.end());
        if(s.length()>0){
	        i=0;
	    }
	    else{
	        i=1;
	    }
    }
    cout<<count<endl;
    return 0;
}