#include<bits/stdc++.h>
using namespace std;

int lcs(string s,string t){
	if(s.size()==0 || t.size()==0){return 0;}

	if(s[0]==t[0]){
		return 1+lcs(s.substr(1),t.substr(1));
	}

	else{
		int a=lcs(s.substr(1),t);
		int b=lcs(s,t.substr(1));
		int c=lcs(s.substr(1),t.substr(1));
		return max(a,max(b,c));
	}
}

int lcsHelper_mem(string s,string t,int **output){
	int ans;
	if(s.size()==0 || t.size()==0){return 0;}

	if(output[s.size()][t.size()]!=-1){return output[s.size()][t.size()];}

	if(s[0]==t[0]){ans=1+lcsHelper_mem(s.substr(1),t.substr(1),output);}

	else{
		int a=lcsHelper_mem(s.substr(1),t,output);
		int b=lcsHelper_mem(s,t.substr(1),output);
		int c=lcsHelper_mem(s.substr(1),t.substr(1),output);
		ans=max(a,max(b,c));
	}

	output[s.size()][t.size()]=ans;
	return ans;
}

int lcs_mem(string s,string t){
	int m=s.size();
	int n=t.size();
	int **output=new int*[m+1];
	for(int i=0;i<=m;i++){
		output[i]=new int[n+1];
		for(int j=0;j<=n;j++){
			output[i][j]=-1;
		}
	}
	return lcsHelper_mem(s,t,output);
}

int main(){
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);

	string s,t;
	cin>>s>>t;
	cout<<lcs_mem(s,t)<<endl;
	return 0;
}