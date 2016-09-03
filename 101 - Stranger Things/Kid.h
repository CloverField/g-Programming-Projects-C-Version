#pragma once
using namespace std;

class Kid
{
	string name;
	int age;
	string role;
	int hp;
public:
	Kid();
	Kid(string s){ name = s; }
	Kid(string s, int i){ name = s, age = i; }
	Kid(string s, int i, string r){ name = s, age = i, role = r; }
	Kid(string s, int i, string r, int h){ name = s, age = i, role = r, hp = h; }
	~Kid();

	string getName();
	void setName();
	int getHP();
	void setHP();
	void printName();
	void printStatus();
};