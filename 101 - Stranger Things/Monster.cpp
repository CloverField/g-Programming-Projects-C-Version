#include "stdafx.h"
#include "Monster.h"

Monster::Monster()
{
	ready = false;
}

Monster::Monster(string s)
{
	name = s;
	ready = false;
}

Monster::Monster(string s, int h)
{
	name = s;
	hp = h;
	ready = false;
}

string Monster::getName()
{
	return name;
}

void Monster::setName(string s)
{
	name = s;
}

int Monster::getHP()
{
	return hp;
}

void Monster::setHP(int h)
{
	hp = h;
}

Monster::~Monster()
{
}

bool Monster::operator==(const Monster &other)
{
	return ((name == other.name) && (hp == other.hp) && (locationOnBoard == other.locationOnBoard));
}

bool Monster::operator!=(const Monster &other)
{
	return !(*this == other);
}

int Monster::getLocationOnBoard()
{
	return locationOnBoard;
}

void Monster::setLocationOnBoard(int l)
{
	locationOnBoard = l;
}

ostream& operator<<(ostream &strm, const Monster &m)
{
	return strm << "Name: " << m.name << endl << "HP: " << m.hp << endl;
}

int Monster::attack()
{
	//TODO: Implement
	return NULL;
}