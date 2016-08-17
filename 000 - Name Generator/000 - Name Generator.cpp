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

	while (getline(fNameFile, line))
	{
		numberOfLines++;
	}

	string *fNames = new string[numberOfLines];
	numberOfLines = 0;

	while (getline(lNameFile, line))
	{
		numberOfLines++;
	}

	string *lnames = new string[numberOfLines];

	int loop = 0;
	while (getline(fNameFile, line, '\r'))
	{
		fNames[loop] = line;
	}

	loop = 0;
	while (getline(lNameFile, line, '\r'))
	{
		lnames[loop] = line;
	}

	map<string, string> names;

	for (int i = 0; i < sizeof(fNames); i++)
	{
		string randomLname = lnames[rand() % (sizeof(lnames) - 1) + 0];
		names[fNames[i]] = randomLname;
	}

	for (map<string, string>::const_iterator it = names.begin(); it != names.end(); ++it)
	{
		std::cout << it->first <<endl;
	}

	delete fNames;
	delete lnames;

	system("Pause");
	return 0;
}
