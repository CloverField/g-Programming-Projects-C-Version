// 101 - Stranger Things.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Test().runAllTests();
	cout << "Strange Text Test: " << HelperFunctions().makeTextStrange("Test") << endl;
	system("pause");
	return 0;
}
