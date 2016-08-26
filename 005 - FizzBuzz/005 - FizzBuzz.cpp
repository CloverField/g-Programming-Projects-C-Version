// 005 - FizzBuzz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	for (int i = 1; i <= 100; i++)
	{
		if ((i%3 == 0) && (i%5 == 0))
		{
			cout << "Fizzbuzz\n";
		}
		else if (i%3 == 0)
		{
			cout << "Fizz\n";
		}
		else if (i % 5 == 0)
		{
			cout << "Buzz\n";
		}
		else
		{
			cout << i << "\n";
		}
	}

	system("pause");
	return 0;
}

