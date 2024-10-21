#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreater(int a[],int n){
	if(n==0){return {};}
	vector<int> v;
	stack<int> s;

	v.push_back(-1);
	s.push(a[n-1]);
	for(int i=n-2;i>=0;i--){
		if(a[i]<s.top()){v.push_back(s.top());s.push(a[i]);}
		else{
			while(!s.empty() && s.top()<a[i]){s.pop();}
			if(s.empty()){v.push_back(-1);s.push(a[i]);}
			else{v.push_back(s.top());s.push(a[i]);}
		}
	}
	reverse(v.begin(),v.end());
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
	vector<int> v=nextGreater(a,n);
	for(auto i:v){
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}