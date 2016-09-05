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

Position Adult::getPosition()
{
	return position;
}

void Adult::setPosition(Position p)
{
	position = p;
}

bool Adult::operator==(const Adult &other)
{
	return ((name == other.name) && (age == other.age) && (hp == other.hp) && (role == other.role) && (position == other.position));
}

bool Adult::operator!=(const Adult &other)
{
	return !(*this == other);
}

ostream& operator<<(ostream &strm, const Adult &a)
{
	return strm << "Name: " << a.name << endl << "Age: " << a.age << endl << "HP: " << a.hp << endl << "Role: " << a.role << "Location on board: " << a.position << endl;
}

int Adult::attack()
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

bool Adult::canAttack(Board b)
{
	for (size_t row = -1; row < 2; row++)
	{
		for (size_t col = -1; col < 2; col++)
		{
			if (!(((position.x - row) + (position.y - col)) < 0) && ((position.x - row) + (position.y - col) > b.getBoardSize()))
			{
				if (b.getBoard()[((position.x - row) + (position.y - col))] == (Piece::Monster))
				{
					return true;
				}
			}
		}
	}
	return false;
}