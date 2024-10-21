#include<bits/stdc++.h>
using namespace std;

void printAllPossibleCodesHelper(string input,string output){
	if(input.length()==0){
		cout<<output<<endl;
		return;
	}
	else if(input.size()==1){
		char ch=input[0];
		if(ch=='0'){return;}
		else{
			int chv=ch-'0';
			char chc=(char) ('a'+chv-1);
			cout<<output+chc<<endl;
		}
	}
	else{
		char ch=input[0];
		string s=input.substr(1);
		if(ch=='0'){return;}
		else{
			int chv=ch-'0';
			char chc=(char) ('a'+chv-1);
			printAllPossibleCodesHelper(s,output+chc);
		}

		string ch2=input.substr(0,2);
		string s1=input.substr(2);
		int chv=stoi(ch2);
		if(chv<=26){
			char chc=(char)('a'+chv-1);
			printAllPossibleCodesHelper(s1,output+chc);
		}
	}

}

void printAllPossibleCodes(string input) {
    printAllPossibleCodesHelper(input,"");
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	string input;cin>>input;
	printAllPossibleCodes(input);
	return 0;
}