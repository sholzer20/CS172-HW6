#include "Complex.h"
#include <sstream>

Complex::Complex()
{
	real = 0;
	imaginary = 0;
}

Complex::Complex(double a)
{
	real = a;
	imaginary = 0;
}

Complex::Complex(double a, double b)
{
	real = a;
	imaginary = b;
}

Complex Complex::add(const Complex & secondComplex) const
{
	return Complex((real + secondComplex.getRealPart()), (imaginary + secondComplex.getImaginaryPart()));
}

Complex Complex::subtract(const Complex & secondComplex)
{
	return Complex((real - secondComplex.getRealPart()), (imaginary - secondComplex.getImaginaryPart()));
}

Complex Complex::multiply(const Complex & secondComplex)
{
	return Complex((real * secondComplex.getRealPart())-(imaginary * secondComplex.getImaginaryPart()), 
		(imaginary * secondComplex.getRealPart())+(real * secondComplex.getImaginaryPart()));
}

Complex Complex::divide(const Complex & secondComplex)
{
	return Complex(((real * secondComplex.getRealPart())+(imaginary * secondComplex.getImaginaryPart())) / (
		(secondComplex.getRealPart() * secondComplex.getRealPart())+(secondComplex.getImaginaryPart() * secondComplex.getImaginaryPart())),
		((imaginary * secondComplex.getRealPart())-(real * secondComplex.getImaginaryPart())) /
		((secondComplex.getRealPart() * secondComplex.getRealPart()) + (secondComplex.getImaginaryPart() * secondComplex.getImaginaryPart())));
}

double Complex::abs()
{
	return sqrt((real*real) + (imaginary*imaginary));
}

string Complex::toString() const
{
	//Uses stringstream to concatenate the double fields
	stringstream ss;
	if (imaginary != 0)
	{
		ss << real << " + " << imaginary << "i";
	}
	else
	{
		ss << real;
	}
	return ss.str();
}

double Complex::getRealPart() const
{
	return real;
}

double Complex::getImaginaryPart() const
{
	return imaginary;
}

void Complex::operator+=(const Complex & secondComplex)
{
	real = (real + secondComplex.getRealPart());
	imaginary = (imaginary + secondComplex.getImaginaryPart());
}

void Complex::operator-=(const Complex & secondComplex)
{
	real = (real - secondComplex.getRealPart());
	imaginary = (imaginary - secondComplex.getImaginaryPart());
}

void Complex::operator*=(const Complex & secondComplex)
{
	real = (real * secondComplex.getRealPart()) - (imaginary * secondComplex.getImaginaryPart());
	imaginary = (imaginary * secondComplex.getRealPart()) + (real * secondComplex.getImaginaryPart());
}

void Complex::operator/=(const Complex & secondComplex)
{
	real = ((real * secondComplex.getRealPart()) + (imaginary * secondComplex.getImaginaryPart())) / (
		(secondComplex.getRealPart() * secondComplex.getRealPart()) + (secondComplex.getImaginaryPart() * secondComplex.getImaginaryPart()));
	imaginary = ((imaginary * secondComplex.getRealPart()) - (real * secondComplex.getImaginaryPart())) /
		((secondComplex.getRealPart() * secondComplex.getRealPart()) + (secondComplex.getImaginaryPart() * secondComplex.getImaginaryPart()));
}

double Complex::operator[](int index)
{
	if (index = 0)
	{
		return real;
	}
	else if (index = 1)
	{
		return imaginary;
	}
	else
	{
		return 0;
	}
}

Complex Complex::operator-()
{
	return Complex(-real, -imaginary);
}

Complex Complex::operator+()
{
	return Complex(real, imaginary);
}

Complex Complex::operator++()
{
	return Complex(real++, imaginary++);
}

Complex Complex::operator++(int)
{
	return Complex(real++, imaginary++);
}

Complex Complex::operator--()
{
	return Complex(real--, imaginary--);
}

Complex Complex::operator--(int)
{
	return Complex(real--, imaginary--);
}
