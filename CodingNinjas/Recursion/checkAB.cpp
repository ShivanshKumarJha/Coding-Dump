#include<bits/stdc++.h>
using namespace std;

bool getAns(char input[]){
	if(input[0]=='\0'){
		return true;
	}
	bool ans;
	if(input[0]=='a' &&(input[1]=='\0' || input[1]=='a')){
		ans=getAns(input+1);
	}
	else if(input[0]=='a' && input[1]=='b' && input[2]=='b'){
		ans=getAns(input+1);
	}
	else if(input[0]=='b' && input[1]=='b' && (input[2]=='\0'|| input[2]=='a')){
		ans=getAns(input+2);
	}
	else{
		return false;
	}
	return ans;
}

bool checkAB(char input[]){
	if(input[0]=='\0'){
		return true;
	}
	else if(input[1]!='a'){
		return false;
	}
	return getAns(input+1);
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	cout<<boolalpha;
	char a[10];
	cin>>a;
	cout<<checkAB(a)<<endl;
	return 0;
}