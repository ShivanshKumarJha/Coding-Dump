#include<bits/stdc++.h>
#include "Polynomial.h"
using namespace std;

Polynomial(){
	degCoeff=new int[6];
	size=5;
}

Polynomial(int k){
	this->degCoeff=new int[k+1];
	this->size=k;
}

Polynomial(Polynomial const &p){
	int *aNew=new int[p.size+1];
	for(int i=0;i<=p.size;i++){
		aNew[i]=p.degCoeff[i];
	}
	this->degCoeff=aNew;
	this->size=size;
}

void setCoefficient(int i,int element){
	if(i<=size){
		degCoeff[i]=element;
	}
	else{
		int *aNew=new int[i+1];
		for(int i=0;i<=size;i++){
			aNew[i]=degCoeff[i];
		}
		aNew[i]=element;
		this->degCoeff=aNew;
		this->size=i;
	}
}

Polynomial operator+(Polynomial const &p) {
	int k=max(this->size,p.size);
	Polynomial pNew(k);
	for(int i=0;i<=k;i++){
        if(i<=size && i<=p.size)
            pNew.degCoeff[i]=this->degCoeff[i]+p.degCoeff[i];
        else if(i<=size)
            pNew.degCoeff[i]=this->degCoeff[i];
        else 
            pNew.degCoeff[i]=p.degCoeff[i];
    }
	return pNew;
}

Polynomial operator-(Polynomial const &p) {
	int k=max(this->size,p.size);
	Polynomial pNew(k);
	for(int i=0;i<=k;i++){
        if(i<=size && i<=p.size)
            pNew.degCoeff[i]=this->degCoeff[i]-p.degCoeff[i];
        else if(i<=size)
            pNew.degCoeff[i]=this->degCoeff[i];
        else 
            pNew.degCoeff[i]=-p.degCoeff[i];
    }
	return pNew;
}

Polynomial operator*(Polynomial const &p) const{
	int k=this->size+p.size;
	Polynomial pNew(k);
	for(int i=0;i<=this->size;i++){
		for(int j=0;j<=p.size;j++){
			pNew.degCoeff[i+j]+=(this->degCoeff[i])*(p.degCoeff[j]);
		}
	}
	return pNew;
}

void operator=(Polynomial const &p) {
	int *aNew=new int[p.size+1];
	for(int i=0;i<p.size;i++){
		aNew[i]=p.degCoeff[i];
	}
	this->degCoeff=aNew;
	this->size=p.size;
}

void print(){
	for(int i=0;i<=size;i++){
		if(degCoeff[i]!=0){
			cout<<degCoeff[i]<<"x"<<i<<" ";
		}
	}
	cout<<endl;
}