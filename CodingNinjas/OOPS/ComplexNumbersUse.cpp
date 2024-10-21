#include<bits/stdc++.h>
#include "ComplexNumbers.cpp"
using namespace std;

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	ComplexNumbers c1(4,5);
	ComplexNumbers c2(1,2);

	c1.multiply(c2);
	c1.print();
	c2.print();

	c1.plus(c2);
	c1.print();
	c2.print();
	return 0;
}