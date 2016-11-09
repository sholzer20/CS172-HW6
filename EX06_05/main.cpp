//Sam Holzer
//This program tests the Complex class that is used to represent a complex number. The class uses operator overloading to perform operations

#include <iostream>
#include "Complex.h"
using namespace std;

//These operators are declared as nonmember functions so order does not matter
Complex operator+(Complex& c1, const Complex& c2)
{
	return c1.add(c2);
}

Complex operator-(Complex& c1, const Complex& c2)
{
	return c1.subtract(c2);
}

Complex operator*(Complex& c1, const Complex& c2)
{
	return c1.multiply(c2);
}

Complex operator/(Complex& c1, const Complex& c2)
{
	return c1.divide(c2);
}

int main()
{
	double real1;
	double real2; 
	double imaginary1;
	double imaginary2;

	cout << "Please enter the first complex number (a then b): ";
	cin >> real1;
	cin	>> imaginary1;
	cout << "Please enter the second complex number (a then b): ";
	cin >> real2;
	cin	>> imaginary2;

	Complex c1(real1, imaginary1);
	Complex c2(real2, imaginary2);

	Complex c3 = c1 + c2;
	cout << c1.toString() << " + " << c2.toString() << " = " << c3.toString() << endl;
	c3 = c1 - c2;
	cout << c1.toString() << " - " << c2.toString() << " = " << c3.toString() << endl;
	c3 = c1 * c2;
	cout << c1.toString() << " * " << c2.toString() << " = " << c3.toString() << endl;
	c3 = c1 / c2;
	cout << c1.toString() << " / " << c2.toString() << " = " << c3.toString() << endl;
	cout << "|" << c1.toString() << "|" << " = "<< c1.abs() << endl;

	return 0;
}
