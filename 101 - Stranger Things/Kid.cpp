#include "stdafx.h"
#include "Kid.h"
using namespace std;

Kid::Kid()
{
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
	return ((name == other.name) && (age == other.age) && (role == other.role) && (hp == other.hp) && (ready == other.ready));
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