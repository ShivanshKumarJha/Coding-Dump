#include<bits/stdc++.h>
using namespace std;

void printSubsetsOfArrayHelp(int input[],int idx,string set,int size){
	if(idx==size){
		cout<<set<<endl;return;
	}
	printSubsetsOfArrayHelp(input,idx+1,set+to_string(input[idx])+" ",size);
	printSubsetsOfArrayHelp(input,idx+1,set,size);
}

void printSubsetsOfArray(int input[], int size){
    printSubsetsOfArrayHelp(input,0,"",size);
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int input[]={15,20,12};
	printSubsetsOfArray(input,3);
	return 0;
}
