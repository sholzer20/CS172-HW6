//Sam Holzer
//This program asks the user to input a year (2010-2014), gender (M/F), amd name. It then displays the ranking of that name for that year

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	string year = "";
	string gender = "";
	string name = "";
	cout << "Please enter a year (2010-2014): ";
	cin >> year;
	cout << "Please enter a gender (M/F): ";
	cin >> gender;
	cout << "Please enter a name: ";
	cin >> name;

	//Concatenates the year into the file name
	string filename = "Babynameranking" + year + ".txt";
	ifstream filein(filename);


	//File exits with this error message if the file doesn't exist or can't be found
	if (filein.fail())
	{
		cout << "File does not exist\nExit program" << endl;
		return 1;
	}

	string line = "";
	string rank = "";
	string bname = "";
	string bcount = "";
	string gname = "";
	string gcount = "";
	//Reads through each line of code and searches for the name based on the gender entered
	//The string stream breaks down each line to get names and distinguish between male and female
	while (getline(filein,line))
	{
		istringstream iss(line);
		iss >> rank;
		iss >> bname;
		iss >> bcount;
		iss >> gname;
		iss >> gcount;
		if (gender == "M")
		{
			//Break is used to keep the rank of the line because if the name if found, we don't need to look at any more lines
			if (bname == name)
			{
				break;
			}
			//Resets the rank to clear if the name if not found in the line. This way the output code works properly
			else
			{
				rank = "";
			}
		}
		else if (gender == "F")
		{
			//Break is used to keep the rank of the line because if the name if found, we don't need to look at any more lines
			if (gname == name)
			{
				break;
			}
			//Resets the rank to clear if the name if not found in the line. This way the output code works properly
			else
			{
				rank = "";
			}
		}
	}
	
	if (rank != "")
	{
		cout << name << " is ranked #" << rank << " in year " << year << endl;
	}
	else
	{
		cout << "The name " << name << " is not ranked in year " << year << endl;
	}
}

