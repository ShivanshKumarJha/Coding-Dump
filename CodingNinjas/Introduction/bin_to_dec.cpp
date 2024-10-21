#include<bits/stdc++.h>
using namespace std;

int main() {
	// Write your code here
	int n;
    cin>>n;
    int number=0;
    int i=0;
    while(n>0){
        int lastdigit=(pow(2,i))*(n%10);
        number+=lastdigit;
        i++;n=n/10;
    }
    cout<<number<<endl;
}
