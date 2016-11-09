//Sam Holzer
#pragma once
#include <string>
#include <math.h>
using namespace std;

class Complex
{
private:
	double real;
	double imaginary;

public:
	Complex();
	Complex(double a);
	Complex(double a, double b);
	Complex add(const Complex& secondComplex) const;
	Complex subtract(const Complex& secondComplex);
	Complex multiply(const Complex& secondComplex);
	Complex divide(const Complex& secondComplex);
	double abs();
	string toString() const;

	//Accessors
	double getRealPart() const;
	double getImaginaryPart() const;

	//Operator Overloading
	void operator+=(const Complex& secondComplex);
	void operator-=(const Complex& secondComplex);
	void operator*=(const Complex& secondComplex);
	void operator/=(const Complex& secondComplex);
	double operator[](int index);
	Complex operator-();
	Complex operator+();
	Complex operator++();
	Complex operator++(int);
	Complex operator--();
	Complex operator--(int);

};

