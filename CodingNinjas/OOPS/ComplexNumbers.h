#ifndef COMPLEXNUMBERS_H
#define COMPLEXNUMBERS_H 

class ComplexNumbers{
private:
	int real;
	int imaginary;

public:
	ComplexNumbers(int r,int i);
	void plus(ComplexNumbers const &c);
	void multiply(ComplexNumbers const &c);
	void print();
};

#endif