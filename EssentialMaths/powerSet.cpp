#include<bits/stdc++.h>
using namespace std;

void getPowerSet(string str){
	int n=str.length();
	int powSize=pow(2,n);
	for(int i=0;i<powSize;i++){
		for(int j=0;j<n;j++){
			if((i&(1<<j))!=0){cout<<str[j];}
		}
		cout<<endl;
	}
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	string str;
	cin>>str;
	getPowerSet(str);
	return 0;
}