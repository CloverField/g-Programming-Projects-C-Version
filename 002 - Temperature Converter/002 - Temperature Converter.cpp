// 002 - Temperature Converter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string convert(int temperature, char units, char convertTo)
{
	double convertedTemperature;
	ostringstream output;
	if ((units == 'F' ) && (convertTo == 'F'))
	{
		return string(temperature + " " + convertTo);
	}
	else if ((units == 'F') && (convertTo == 'C'))
	{
		convertedTemperature = ((temperature - 32) / (9 / 5));
		output << convertedTemperature;
		return output.str() + " " + convertTo;
	}
	else if ((units == 'F') && (convertTo == 'K'))
	{
		convertedTemperature = (temperature + 459.67)*(5 / 9);
		output << convertedTemperature;
		return output.str() + " " + convertTo;
	}
	else if ((units == 'C') && (convertTo == 'C'))
	{
		return string(temperature + " " + convertTo);
	}
	else if ((units == 'C') && (convertTo == 'F'))
	{
		convertedTemperature = ((temperature *(9 / 5)) + 32);
		output << convertedTemperature;
		return output.str() + " " + convertTo;
	}
	else if ((units == 'C') && (convertTo == 'K'))
	{
		convertedTemperature = temperature + 273.15;
		output << convertedTemperature;
		return output.str() + " " + convertTo;
	}
	else if ((units == 'K') && (convertTo == 'K'))
	{
		return string(temperature + " " + convertTo);
	}
	else if ((units == 'K') && (convertTo == 'F'))
	{
		convertedTemperature = ((temperature *(9/5) - 459.67));
		output << convertedTemperature;
		return output.str() + " " + convertTo;
	}
	else if ((units == 'K') && (convertTo == 'C'))
	{
		convertedTemperature = ((temperature -273.15));
		output << convertedTemperature;
		return output.str() + " " + convertTo;
	}
	return string();
}

int _tmain(int argc, _TCHAR* argv[])
{
	int userTemp;
	char userTempUnits;
	char unitsToConvertTo;
	
	cout << "This program converts temperatures." << endl;
	cout << "You'll need to enter the temperature as a number and then the units of temperature, then the units you want to convert it too." << endl;
	cout << "Enter the temperature: ";
	cin >> userTemp;
	cout << "Enter the units: ";
	cin >> userTempUnits;
	cout << "Enter the units you want to convert too: ";
	cin >> unitsToConvertTo;
	
	string output = convert(userTemp, toupper(userTempUnits), toupper(unitsToConvertTo));
	
	if (output != string())
	{
		cout << "\nYou entered: " << userTemp << userTempUnits << endl;
		cout << "This converts to: " << output << endl;
	}
	
	system("Pause");
	return 0;
}
