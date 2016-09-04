#pragma once
using namespace std;

class Kid
{
	string name;
	int age;
	string role;
	int hp;
	bool ready;
	int locationOnBoard;
public:
	Kid();
	Kid(string s){ name = s, ready = false; }
	Kid(string s, int i){ name = s, age = i; }
	Kid(string s, int i, string r){ name = s, age = i, role = r, ready = false; }
	Kid(string s, int i, string r, int h){ name = s, age = i, role = r, hp = h, ready = false; }
	~Kid();

	string getName();
	void setName();
	int getHP();
	void setHP();
	void printName();
	void printStatus();
	bool isReady();
	void setReady();
	int getLocationOnBoard();
	void setLocationOnBoard(int);
	bool operator==(const Kid &other);
	bool operator!=(const Kid &other);
};

