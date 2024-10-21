#include<bits/stdc++.h>
using namespace std;

void printPermutations(string s,string ans){
	if(s.size()==0){
		cout<<ans<<endl;return;
	}
	for(int i=0;i<s.size();i++){
		char a=s[i];
		string leftpart=s.substr(0,i);
		string rightpart=s.substr(i+1);
		string snq=leftpart+rightpart;
		printPermutations(snq,ans+a);
	}
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	string s;cin>>s;
	printPermutations(s,"");
	return 0;
}