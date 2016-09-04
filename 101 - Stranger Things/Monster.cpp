#include "stdafx.h"
#include "Monster.h"

Monster::Monster()
{
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