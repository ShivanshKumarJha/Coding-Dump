#include<bits/stdc++.h>
using namespace std;

vector<int> prevGreater(int a[],int n){
	if(n==0){return {};}
	vector<int> v;
	stack<int> s;
	s.push(a[0]);
	v.push_back(-1);

	for(int i=1;i<n;i++){
		if(a[i]<s.top()){v.push_back(s.top());s.push(a[i]);}
		else{
			while(!s.empty() && s.top()<a[i]){s.pop();}
			if(s.empty()){v.push_back(-1);s.push(a[i]);}
			else{v.push_back(s.top());s.push(a[i]);}
		}
	}
	return v;
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<int> v=prevGreater(a,n);
	for(auto i:v){
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}