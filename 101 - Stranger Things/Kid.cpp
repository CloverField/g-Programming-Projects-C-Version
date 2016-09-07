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

void Kid::setName(string n)
{
	name = n;
}

int Kid::getAge()
{
	return age;
}

void Kid::setAge(int a)
{
	age = a;
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
	return ((name == other.name) && (age == other.age) && (role == other.role) && (hp == other.hp) && (ready == other.ready) && (position == other.position));
}

bool Kid::operator!=(const Kid &other)
{
	return !(*this == other);
}

void Kid::printName()
{
	cout << name << endl;
}

Position Kid::getPosition()
{
	return position;
}

void Kid::setPosition(Position p)
{
	position = p;
}

ostream& operator<<(ostream &strm, const Kid &k)
{
	return strm << "Name: " << k.name << endl << "Age: " << k.age << endl << "HP: " << k.hp << endl << "Role: " << k.role << endl << "Location on board: " << k.position;
}

int Kid::attack()
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

bool Kid::canAttack(Board b)
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

void Kid::move(int x, int y)
{
	position.x = x;
	position.y = y;
}