#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H 

class Polynomial{

public:
	int *degCoeff;
	int size;

	Polynomial();
	Polynomial(int capacity);
	Polynomial(Polynomial const &p);
	void setCoefficient(int i,int element);
	Polynomial operator+(Polynomial const &p) const;
	Polynomial operator-(Polynomial const &p) const;
	Polynomial operator*(Polynomial const &p) const;
	void operator=(Polynomial const &p);
	void print();

};

#endif