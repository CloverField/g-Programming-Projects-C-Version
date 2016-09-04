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

Monster::~Monster()
{
}

bool Monster::operator==(const Monster &other)
{
	return ((name == other.name) && (hp == other.hp));
}

bool Monster::operator!=(const Monster &other)
{
	return !(*this == other);
}
//TODO: Define overloads here