#include<bits/stdc++.h>
using namespace std;
#include "Fraction.h"

fraction::fraction(int numerator,int denominator){
	this->numerator=numerator;
	this->denominator=denominator;
}

void fraction::display(){
	cout<<numerator<<"/"<<denominator<<endl;
}

fraction fraction::operator+(fraction const &f) const{
	int lcm=(this->denominator)*(f.denominator);
	int num=(this->numerator*f.denominator)+(f.numerator*this->denominator);
	fraction fNew=fraction(num,lcm);
	fNew.simplify();
	return fNew;
}

fraction& fraction::operator+=(fraction const &f) const{
	int lcm=(this->denominator)*(f.denominator);
	int num=(this->numerator*f.denominator)+(f.numerator*this->denominator);
	numerator=num;
	denominator=lcm;
	simplify();
	return *this;
}

fraction fraction::operator*(fraction const &f) const{
	numerator=(numerator)*(f.numerator);
	denominator=(denominator)*(f.denominator);
	fraction fNew(numerator,denominator);
	fNew.simplify();
	return fNew;
}

//Pre Increment  (++f)
fraction& fraction::operator++(){
	numerator=numerator+denominator;
	simplify();
	return *this;
}

//Post Increment (f++)
fraction fraction::operator++(int){
	fraction fNew(numerator,denominator);
	numerator=numerator+denominator;
	simplify();
	return fNew;
}

bool fraction::operator==(fraction const &f) const{
	if(numerator==f.numerator && denominator==f.denominator){return true;}
	return false;
}

void fraction::simplify(){
	int gcd=1;
	int j=min(this->numerator,this->denominator);
	for(int i=1;i<=j;i++){
		if(this->numerator%i==0 && this->denominator%i==0){gcd=i;}
	}
	numerator/=gcd;
	denominator/=gcd;
}