#include<bits/stdc++.h>
using namespace std;

void reverse(string target){
	stack<char> s;
	for(int i=0;i<target.length();i++){
		s.push(target[i]);
	}
	for(int i=0;i<target.length();i++){
		target[i]=s.top();
		s.pop();
	}
	cout<<target<<endl;
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	string target;
	cin>>target;
	reverse(target);
	return 0;
}