#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=i;
        int k=1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        while(j<=2*i-1){
            cout<<j;
        	j++;
        }
        cout<<endl;
    	i++;
    }
}