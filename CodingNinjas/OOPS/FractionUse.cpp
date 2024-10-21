#include<bits/stdc++.h>
#include "Fraction.cpp"
using namespace std;

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	cout<<boolalpha;

	fraction f1(10,2);
	fraction f2(2,10);

	fraction f3=f1+f2;
	fraction f4=f1*f2;

	f1.display();
	f2.display();
	f3.display();
	f4.display();
	cout<<(f3==f4)<<endl;
	return 0;
}