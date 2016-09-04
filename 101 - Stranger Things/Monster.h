#pragma once
using namespace std;
class Monster
{
public:
	string name;
	int hp;
	Monster();
	Monster(string);
	string getName();
	void setName(string);
	bool operator==(const Monster &other);
	bool operator!=(const Monster &other);
	~Monster();
};
