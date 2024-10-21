#include<bits/stdc++.h>
using namespace std;

void printSumSubsetsOfArrayHelper(int input[],int idx,string set,int size,int sos,int target){
	if(idx==size){
		if(sos==target){
			cout<<set<<endl;
		}
		return;
	}
	printSumSubsetsOfArrayHelper(input,idx+1,set+to_string(input[idx])+" ",size,sos+input[idx],target);
	printSumSubsetsOfArrayHelper(input,idx+1,set,size,sos,target);
}

void printSubsetSumToK(int input[], int size,int k){
    printSumSubsetsOfArrayHelper(input,0,"",size,0,k);
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int input[]={10,20,30,40,50};
	printSubsetSumToK(input,5,60);
	return 0;
}