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
	int getLocationOnBoard();
	void setLocationOnBoard(int);
	bool operator==(const Monster &other);
	bool operator!=(const Monster &other);
	~Monster();
	friend ostream& operator<<(ostream&, const Monster&);
	int attack();
	bool canAttack(size_t, Board);
private:
	string name;
	int hp;
	bool ready;
	int locationOnBoard;
};

