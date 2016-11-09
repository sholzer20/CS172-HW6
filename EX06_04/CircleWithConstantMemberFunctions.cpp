//Sam Holzer
#include "CircleWithConstantMemberFunctions.h"

int Circle::numberOfObjects = 0;

Circle::Circle()
{
	radius = 1;
	numberOfObjects++;
}

Circle::Circle(double radius)
{
	this->radius = radius;
	numberOfObjects++;
}

double Circle::getArea() const
{
	return radius * radius * 3.14159;
}

double Circle::getRadius() const
{
	return radius;
}

void Circle::setRadius(double radius)
{
	this->radius = (radius >= 0) ? radius : 0;
}

int Circle::getNumberOfObjects()
{
	return numberOfObjects;
}

//Operators are used to compare radii
bool Circle::operator<(const Circle & c2)
{
	return (this->radius < c2.getRadius());
}

bool Circle::operator>(const Circle & c2)
{
	return (this->radius > c2.getRadius());
}

bool Circle::operator<=(const Circle & c2)
{
	return (this->radius <= c2.getRadius());
}

bool Circle::operator>=(const Circle & c2)
{
	return (this->radius >= c2.getRadius());
}

bool Circle::operator==(const Circle & c2)
{
	return (this->radius == c2.getRadius());
}

bool Circle::operator!=(const Circle & c2)
{
	return (this->radius != c2.getRadius());
}
