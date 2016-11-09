//Sam Holzer
//This program asks the user to input a file name and then displays the number of character in the file
//I use HelloWorld.txt in this directory to test if the program works

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
	string fileName = "";
	cout << "Please enter the name of a file (include .txt): ";
	cin >> fileName;

	//File exits with this error message if the file doesn't exist or can't be found
	ifstream filein(fileName);
	if (filein.fail())
	{
		cout << "File does not exist\nExit program" << endl;
		return 1;
	}

	string word = "";
	size_t charcount = 0;

	//Reads through every word of the file and count the characters in each word
	while (filein >> word)
	{
		charcount += word.length();
	}

	cout << "There are " << charcount << " characters in the file." << endl;
	filein.close();
	return 0;
}