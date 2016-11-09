//Sam Holzer
//This program creates an output file (if it does not exist) and then adds 100 random integers to the end of the file
//When appending, does not include a space against the last number in the existing file (to avoid huge if statements)

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
	fstream output("Exercise13_1.txt", ios::app);

	//Exits the program if the file cannot be opened
	if (output.fail())
	{
		cout << "Can't open the file" << endl;
		return 1;
	}


	srand(time(NULL));
	int randnumb = 0;

	//Outputs 100 integers in to the output file
	for (int i = 1; i <= 100; i++)
	{
		//Inlcudes a space for all but the last number
		if (i != 100)
		{
			randnumb = (int)(rand());
			output << randnumb << " ";
		}
		else
		{
			randnumb = (int)(rand());
			output << randnumb;
		}
	}

	output.close();

	return 0;
}

