#include<bits/stdc++.h>
using namespace std;

void print_subs(string input,string output){
	if(input.length()==0){
		cout<<output<<endl;
		return;
	}
	print_subs(input.substr(1),output);
	print_subs(input.substr(1),output+input[0]);
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	string input;
	cin>>input;
	string output="";
	print_subs(input,output);
	return 0;
}