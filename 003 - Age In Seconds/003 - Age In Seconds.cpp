// 003 - Age In Seconds.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int userAge;
	cout << "This program calculates your age in seconds." << endl;
	cout << "Enter your age in years: ";
	cin >> userAge;
	cout << "\nYour age in seconds is: " << userAge * 365 * 24 * 60 * 60 << endl;
	system("Pause");
	return 0;
}
