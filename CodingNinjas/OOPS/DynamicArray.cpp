#include<bits/stdc++.h>
#include "DynamicArray.h"
using namespace std;

DynamicArray::DynamicArray(){
	data=new int[5];
	nextIndex=0;
	capacity=5;
}


DynamicArray::DynamicArray(DynamicArray const &d){
	this->data=new int[d.capacity];
	for(int i=0;i<d.nextIndex;i++){
		this->data[i]=d.data[i];
	}
	this->nextIndex=d.nextIndex;
	this->capacity=d.capacity;
}


void DynamicArray::operator=(DynamicArray const &d){
	this->data=new int[d.capacity];
	for(int i=0;i<d.nextIndex;i++){
		this->data[i]=d.data[i];
	}
	this->nextIndex=d.nextIndex;
	this->capacity=d.capacity;
}


void DynamicArray::add(int element){
	if(nextIndex==capacity){
		int *newData=new int[2*capacity];
		for(int i=0;i<capacity;i++){
			newData[i]=data[i];
		}
		delete []data;
		data=newData;
		capacity*=2;
	}
	data[nextIndex]=element;
	nextIndex++;
}


void DynamicArray::add(int i,int element){
	if(i<nextIndex){
		data[i]=element;
	}
	else if(i==nextIndex){
		add(element);
	}
	else{
		return;
	}
}


int DynamicArray::get(int i){
	if(i<nextIndex){
		return data[i];
	}
	else{
		return -1;
	}
}


void DynamicArray::print(){
	for(int i=0;i<nextIndex;i++){
		cout<<data[i]<<" ";
	}
	cout<<endl;
}