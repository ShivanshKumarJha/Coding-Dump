#include<bits/stdc++.h>
#include "DynamicArray.cpp"
using namespace std;

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	DynamicArray d1;
	d1.add(10);
	d1.add(20);
	d1.add(30);
	d1.print();

	d1.add(2,40);
	d1.print();

	DynamicArray d2(d1);
	d1.add(3,50);
	d1.print();
	d2.print();

	DynamicArray d3;
	d3=d2;
	d3.print();
	return 0;
}