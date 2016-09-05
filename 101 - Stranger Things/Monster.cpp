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
	return ((name == other.name) && (hp == other.hp) && (position == other.position));
}

bool Monster::operator!=(const Monster &other)
{
	return !(*this == other);
}

Position Monster::getPosition()
{
	return position;
}

void Monster::setPosition(Position p)
{
	position = p;
}

ostream& operator<<(ostream &strm, const Monster &m)
{
	return strm << "Name: " << m.name << endl << "HP: " << m.hp << endl;
}

int Monster::attack()
{
	if (hp < 0)
	{
		random_device rd;
		mt19937 gen{ rd() };
		uniform_int_distribution<int> dis(hp / 2, hp);
		return dis(gen);
	}
	return NULL;
}

bool Monster::canAttack(Board b)
{
	for (size_t row = -1; row < 2; row++)
	{
		for (size_t col = -1; col < 2; col++)
		{
			if (!(((position.x - row) + (position.y - col)) < 0) && ((position.x - row) + (position.y - col) > b.getBoardSize()))
			{
				if ((b.getBoard()[((position.x - row) + (position.y - col))] == (Piece::Adult)) || (b.getBoard()[((position.x - row) + (position.y - col))] == (Piece::Kid)))
				{
					return true;
				}
			}
		}
	}
	return false;
}