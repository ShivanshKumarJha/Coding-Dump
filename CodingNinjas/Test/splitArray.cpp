#include<bits/stdc++.h>
using namespace std;

bool splitarray(int *input,int si,int lsum,int rsum,int length){
	if(length==si){return lsum==rsum;}
	if(input[si]%3==0){
		lsum+=input[si];
	}
	else if(input[si]%5==0){
		rsum+=input[si];
	}
	else{
		return splitarray(input,si+1,lsum+input[si],rsum,length) || splitarray(input,si+1,lsum,rsum+input[si],length);
	}
	return splitarray(input,si+1,lsum,rsum,length);
}

bool splitArray(int *input, int size) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
	return splitarray(input,0,0,0,size);
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
	cout<<boolalpha;
	cout<<splitArray(a,n);
	return 0;
}