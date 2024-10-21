#ifndef FRACTION_H
#define FRACTION_H 

class fraction{
private:
	int numerator;
	int denominator;

public:
	fraction(int numerator,int denominator);
	void display();
	fraction operator+(fraction const &f) const;
	fraction& operator+=(fraction const &f) const;
	fraction operator*(fraction const &f) const;
	fraction& operator++();
	fraction operator++(int);
	bool operator==(fraction const &f) const;
	void simplify();
};

#endif

#ifndef zscsdffb_h
#define zscsdffb_h value
#endif