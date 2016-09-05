#include "stdafx.h"
#include "Kid.h"
using namespace std;

Kid::Kid()
{
	ready = false;
}

Kid::Kid(string n)
{
	name = n;
	ready = false;
}

Kid::Kid(string n, int a)
{
	name = n;
	age = a;
	ready = false;
}

Kid::Kid(string n, int a, string r)
{
	name = n;
	age = a;
	role = r;
	ready = false;
}

Kid::Kid(string n, int a, string r, int h)
{
	name = n;
	age = a;
	role = r;
	hp = h;
	ready = false;
}

Kid::~Kid()
{
}

string Kid::getName()
{
	return name;
}

bool Kid::isReady()
{
	return ready;
}

void Kid::setReady()
{
	ready = true;
}

bool Kid::operator==(const Kid &other)
{
	return ((name == other.name) && (age == other.age) && (role == other.role) && (hp == other.hp) && (ready == other.ready) && (locationOnBoard == other.locationOnBoard));
}

bool Kid::operator!=(const Kid &other)
{
	return !(*this == other);
}

void Kid::printName()
{
	cout << name << endl;
}

int Kid::getLocationOnBoard()
{
	return locationOnBoard;
}

void Kid::setLocationOnBoard(int l)
{
	locationOnBoard = l;
}

ostream& operator<<(ostream &strm, const Kid &k)
{
	return strm << "Name: " << k.name << endl << "Age: " << k.age << endl << "Role: " << k.role << endl << "Location on board: " << k.locationOnBoard << endl;
}

int Kid::attack()
{
	//TODO: Implement
	return NULL;
}