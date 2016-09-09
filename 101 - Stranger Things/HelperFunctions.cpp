#include "stdafx.h"
#include "HelperFunctions.h"


HelperFunctions::HelperFunctions()
{
}

string HelperFunctions::makeTextStrange(string s)
{
	default_random_engine generator;
	uniform_int_distribution<int> distribution(1, 26);
	for (size_t i = 0; i < s.length(); i++)
	{
		if (s[i] != ' ')
		{
			s[i] = (char((int)s[i] + distribution(generator)));
		}
	}
	return s;
}

HelperFunctions::~HelperFunctions()
{
}
