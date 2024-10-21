#include<bits/stdc++.h>
using namespace std;
#include "ComplexNumbers.h"

ComplexNumbers::ComplexNumbers(int r,int i){
	real=r;
	imaginary=i;
}

void ComplexNumbers::plus(ComplexNumbers const &c){
	real=real+(c.real);
	imaginary=imaginary+(c.imaginary);
} 

void ComplexNumbers::multiply(ComplexNumbers const &c){
	int x=real,y=imaginary;
	real=(x*(c.real))-(y*(c.imaginary));
	imaginary=(y*(c.real))+(x*(c.imaginary));
}

void ComplexNumbers::print(){
	cout<<real<<" + i"<<imaginary<<endl;
}