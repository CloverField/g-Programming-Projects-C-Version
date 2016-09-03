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
	~Monster();
};
