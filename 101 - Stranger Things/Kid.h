#pragma once
using namespace std;

class Kid
{
public:
	Kid();
	Kid(string);
	Kid(string, int);
	Kid(string, int, string);
	Kid(string, int, string, int);
	~Kid();
	string getName();
	void setName();
	int getHP();
	void setHP();
	void printName();
	void printStatus();
	bool isReady();
	void setReady();
	Position getPosition();
	void setPosition(Position);
	bool operator==(const Kid &other);
	bool operator!=(const Kid &other);
	friend ostream& operator<<(ostream&, const Kid&);
	int attack();
	bool canAttack(Board);
	void move(int, int);
private:
	string name;
	int age;
	string role;
	int hp;
	bool ready;
	Position position;
};

