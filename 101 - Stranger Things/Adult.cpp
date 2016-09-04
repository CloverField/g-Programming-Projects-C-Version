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

Adult::Adult(string s, int a, int h, string r)
{
	name = s;
	age = a;
	hp = h;
	role = r;
}

Adult::~Adult()
{
}

string Adult::getName()
{
	return name;
}

void Adult::setName(string s)
{
	name = s;
}

int Adult::getHP()
{
	return hp;
}

void Adult::setHP(int h)
{
	hp = h;
}

bool Adult::operator==(const Adult &other)
{
	return ((name == other.name) && (age == other.age) && (hp == other.hp) && (role == other.role));
}

bool Adult::operator!=(const Adult &other)
{
	return !(*this == other);
}