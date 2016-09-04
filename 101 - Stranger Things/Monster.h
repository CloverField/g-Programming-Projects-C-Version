#pragma once
using namespace std;
class Monster
{
	string name;
	int hp;
	int locationOnBoard;
public:
	Monster();
	Monster(string);
	string getName();
	void setName(string);
	int getHP();
	void setHP(int);
	int getLocationOnBoard();
	void setLocationOnBoard(int);
	bool operator==(const Monster &other);
	bool operator!=(const Monster &other);
	~Monster();
};

