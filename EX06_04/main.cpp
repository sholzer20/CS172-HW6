//Sam Holzer
//This program adapts the CircleWithConstantMemberFunctions.h file from Listing 10.9 to use operator overloading in order to compare radii
#include "CircleWithConstantMemberFunctions.h"
#include <iostream>
using namespace std;

int main()
{
	Circle c1(4.6);
	Circle c2(3.5);
	Circle c3(5.7);

	if (c1 > c2 && c1 > c3)
	{
		if (c2 > c3)
		{
			cout << "The circles are ordered: c1, c2, c3." << endl;
		}
		else if (c3 > c2)
		{
			cout << "The circles are ordered: c1, c3, c2." << endl;
		}
	}
	else if (c2 > c1 && c2 > c3)
	{
		if (c3 > c1)
		{
			cout << "The circles are ordered: c2, c3, c1." << endl;
		}
		else if (c3 < c1)
		{
			cout << "The circles are ordered: c2, c1, c3." << endl;
		}
	}
	else if (c3 > c1 && c3 > c2)
	{
		if (c2 > c1)
		{
			cout << "The circles are ordered: c3, c2, c1." << endl;
		}
		else if (c1 > c2)
		{
			cout << "The circles are ordered: c3, c1, c2." << endl;
		}
	}
}
