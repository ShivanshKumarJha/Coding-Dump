#include<bits/stdc++.h>
using namespace std;

bool check(string s,string t){
	if(t.empty()){return true;}
	else{
		for(int i=0;i<s.length();i++){
			if(t[0]==s[i]){
				return check(s.substr(i+1),t.substr(1));
			}
		}
		return false;
	}
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	string s,t;
	cin>>s>>t;
	cout<<boolalpha;
	cout<<check(s,t)<<endl;
	return 0;
}