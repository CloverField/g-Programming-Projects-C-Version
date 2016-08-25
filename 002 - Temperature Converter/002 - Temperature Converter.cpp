// 002 - Temperature Converter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

string convert(int temperature, string units, string convertTo)
{
	int convertedTemperature;
	if ((units == "F" ) && (convertTo == "F"))
	{

	}
	else if ((units == "C") && (convertTo == "C"))
	{

	}
	else if ((units == "K") && (convertTo == "K"))
	{

	}
	return convertTo;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int userTemp;
	string userTempUnits;
	string unitsToConvertTo;
	cout << "This program converts temperatures." << endl;
	cout << "You'll need to enter the temperature as a number and then the units of temperature, then the units you want to convert it too." << endl;
	cout << "Enter the temperature: ";
	cin >> userTemp;
	cout << "Enter the units: ";
	getline(cin, userTempUnits);
	cout << "Enter the units you want to convert too: ";
	getline(cin, unitsToConvertTo);
	
	return 0;
}

