#include "stdafx.h"
#include "Kid.h"
using namespace std;

string name;
int age;
string party;
int hp;

Kid::Kid()
{
}

Kid::~Kid()
{
}

string Kid::getName()
{
	return name;
}

void Kid::printName()
{
	cout << name << endl;
}