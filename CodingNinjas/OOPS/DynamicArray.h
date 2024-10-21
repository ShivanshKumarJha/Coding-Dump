#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H 

class DynamicArray{
  	int *data;
  	int nextIndex;
  	int capacity;

public:
	DynamicArray();
	DynamicArray(DynamicArray const &d);
	void operator=(DynamicArray const &d);
	void add(int element);
	void add(int i,int element);
	int get(int i);
	void print();
};

#endif