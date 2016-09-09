// 000 - Name Generator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string line;
	ifstream fNameFile ("CSV_Database_of_First_Names.csv");
	ifstream lNameFile ("CSV_Database_of_Last_Names.csv");
	int numberOfLines = 0;

	cout << "This program generates random names" << endl;

	while (getline(fNameFile, line, '\r'))
	{
		cout << line << endl;
	}

	string *fnameStorage = new string[15];
	int arraySize = 14;
	while (getline(fNameFile, line, '\r'))
	{
		fnameStorage[numberOfLines] = line;
		if (numberOfLines == arraySize)
		{
			string *tempArray = new string[arraySize*2];
			for (int i = 0; i <= arraySize; i++)
			{
				tempArray[i] = fnameStorage[i];
			}
			fnameStorage = tempArray;
			delete[] tempArray;
			arraySize = arraySize * 2;
		}
		numberOfLines++;
	}
	fNameFile.close();
	fNameFile.clear();
	
	string *fNames = new string[numberOfLines];
	for (int i = 0; i == numberOfLines; i++)
	{
		fNames[i] = fnameStorage[i];
	}
	
	delete[] fnameStorage;

	numberOfLines = 0;

	while (getline(lNameFile, line, '\r'))
	{
		numberOfLines++;
	}
	lNameFile.close();
	lNameFile.clear();

	string *lnames = new string[numberOfLines];

	int loop = 0;
	fNameFile.open("CSV_Database_of_First_Names.csv");
	while (getline(fNameFile, line, '\r'))
	{
		fNames[loop] = line;
		loop++;
	}
	fNameFile.close();
	fNameFile.clear();

	loop = 0;
	lNameFile.open("CSV_Database_of_Last_Names.csv");
	while (getline(lNameFile, line, '\r'))
	{
		lnames[loop] = line;
		loop++;
	}
	lNameFile.close();
	lNameFile.clear();

	map<string, string> names;

	for (int i = 0; i < sizeof(fNames); i++)
	{
		string randomLname = lnames[rand() % (sizeof(lnames) - 1) + 0];
		names[fNames[i]] = randomLname;
	}

	for (map<string, string>::const_iterator it = names.begin(); it != names.end(); ++it)
	{
		std::cout << it->first << " " << it->second <<endl;
	}

	delete fNames;
	delete lnames;

	system("Pause");
	return 0;
}