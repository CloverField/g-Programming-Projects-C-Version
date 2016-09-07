// 101 - Stranger Things.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

string makeTextStrange(string s)
{
	for (size_t i = 0; i < s.length(); i++)
	{
		if (s[i] != ' ')
		{
			s[i] = (char((int)s[i] + 1));
		}
	}
	return s;
}

int _tmain(int argc, _TCHAR* argv[])
{
	Test().runTests();
	system("pause");
	return 0;
}
