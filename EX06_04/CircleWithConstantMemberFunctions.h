//Sam Holzer
#pragma once

class Circle
{
private:
	double radius;
	static int numberOfObjects;

public:
	Circle();
	Circle(double radius);
	double getArea() const;
	double getRadius() const;
	void setRadius(double radius);
	static int getNumberOfObjects();
	bool operator<(const Circle& c2);
	bool operator>(const Circle& c2);
	bool operator<=(const Circle& c2);
	bool operator>=(const Circle& c2);
	bool operator==(const Circle& c2);
	bool operator!=(const Circle& c2);

};