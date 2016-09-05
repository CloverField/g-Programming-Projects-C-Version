#pragma once
using namespace std;

class Monster
{
public:
	Monster();
	Monster(string);
	Monster(string, int);
	string getName();
	void setName(string);
	int getHP();
	void setHP(int);
	Position getPosition();
	void setPosition(Position);
	bool operator==(const Monster &other);
	bool operator!=(const Monster &other);
	~Monster();
	friend ostream& operator<<(ostream&, const Monster&);
	int attack();
	bool canAttack(Board);
private:
	string name;
	int hp;
	bool ready;
	Position position;
};

