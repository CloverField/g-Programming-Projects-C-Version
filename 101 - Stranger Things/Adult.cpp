#include "stdafx.h"
#include "Adult.h"
using namespace std;

Adult::Adult()
{
}

Adult::Adult(string s)
{
	name = s;
}

Adult::Adult(string s, int a)
{
	name = s;
	age = a;
}

Adult::~Adult()
{
}

//TODO: Define overloads here