#include "stdafx.h"
#include "Adult.h"
using namespace std;

Adult::Adult()
{
	ready = false;
}

Adult::Adult(string n)
{
	name = n;
	ready = false;
}

Adult::Adult(string n, int a)
{
	name = n;
	age = a;
	ready = false;
}

Adult::Adult(string n, int a, string r)
{
	name = n;
	age = a;
	role = r;
	ready = false;
}

Adult::Adult(string n, int a, string r, int h)
{
	name = n;
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

int Adult::getAge()
{
	return age;
}

void Adult::setAge(int a)
{
	age = a;
}

Position Adult::getPosition()
{
	return position;
}

void Adult::setPosition(Position p)
{
	position = p;
}

bool Adult::isReady()
{
	return ready;
}

void Adult::setReady()
{
	ready = true;
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
	return strm << "Name: " << a.name << endl << "Age: " << a.age << endl << "HP: " << a.hp << endl << "Role: " << a.role << endl <<"Location on board: " << a.position;
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


void Adult::move(int x, int y)
{
	position.x = x;
	position.y = y;
}