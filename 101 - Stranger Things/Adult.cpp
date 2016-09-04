#include "stdafx.h"
#include "Adult.h"
using namespace std;

Adult::Adult()
{
	ready = false;
}

Adult::Adult(string s)
{
	name = s;
	ready = false;
}

Adult::Adult(string s, int a)
{
	name = s;
	age = a;
	ready = false;
}

Adult::Adult(string s, int a, int h)
{
	name = s;
	age = a;
	hp = h;
	ready = false;
}

Adult::Adult(string s, int a, int h, string r)
{
	name = s;
	age = a;
	hp = h;
	role = r;
	ready = false;
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

int Adult::getLocationOnBoard()
{
	return locationOnBoard;
}

void Adult::setLocationOnBoard(int l)
{
	locationOnBoard = l;
}

bool Adult::operator==(const Adult &other)
{
	return ((name == other.name) && (age == other.age) && (hp == other.hp) && (role == other.role) && (locationOnBoard == other.locationOnBoard));
}

bool Adult::operator!=(const Adult &other)
{
	return !(*this == other);
}

ostream& operator<<(ostream &strm, const Adult &a)
{
	return strm << "Name: " << a.name << endl << "Age: " << a.age << endl << "HP: " << a.hp << endl << "Role: " << a.role << "Location on board: " << a.locationOnBoard << endl;
}