#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
    cin>>n;
    int evensum=0,oddsum=0;
    while(n>0){
        int lastdigit=n%10;
        if(lastdigit%2==0)
            evensum+=lastdigit;
        else
            oddsum+=lastdigit;
    	n=n/10;
    }
    cout<<evensum<<" "<<oddsum<<endl;
}
