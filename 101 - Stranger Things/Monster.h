#pragma once
using namespace std;
class Monster
{
	string name;
	int hp;
public:
	Monster();
	Monster(string);
	string getName();
	void setName(string);
	bool operator==(const Monster &other);
	bool operator!=(const Monster &other);
	~Monster();
};

