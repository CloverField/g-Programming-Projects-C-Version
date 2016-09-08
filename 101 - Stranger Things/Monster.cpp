#include "stdafx.h"
#include "Monster.h"

Monster::Monster()
{
	ready = false;
}

Monster::Monster(string n)
{
	name = n;
	ready = false;
}

Monster::Monster(string n, int h)
{
	name = n;
	hp = h;
	ready = false;
}

Monster::Monster(string n, int h, string r)
{
	name = n;
	hp = h;
	role = r;
	ready = false;
}

Monster::Monster(string n, int h, string r, int a)
{
	name = n;
	hp = h;
	role = r;
	age = a;
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
	return strm << "Name: " << m.name << endl << "Age: " << m.age << endl << "HP: " << m.hp << endl << "Role: " << m.role << endl << "Location on Board: " << m.position;
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
	for (int row = -1; row < 2; row++)
	{
		for (int col = -1; col < 2; col++)
		{
			if (!(((position.x - row) + (position.y - col)) < 0) && ((position.x - row) + (position.y - col) > (int)b.getBoardSize()))
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

bool Monster::isReady()
{
	return ready;
}

void Monster::setReady()
{
	ready = true;
}

int Monster::getAge()
{
	return age;
}

void Monster::setAge(int a)
{
	age = a;
}

void Monster::move(int x, int y)
{
	position.x = x;
	position.y = y;
}