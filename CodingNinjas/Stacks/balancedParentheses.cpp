#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string expression) {
    stack<char> s;
    int i=0;
    if(expression[i]==')'){return false;}
    while(i<expression.length()){
        if(expression[i]=='('){s.push(expression[i]);i++;}
        else if(expression[i]==')'){s.pop();i++;}
        else{i++;}
    }
    return s.empty();
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	string s;cin>>s;
	cout<<boolalpha<<isBalanced(s);
	return 0;
}