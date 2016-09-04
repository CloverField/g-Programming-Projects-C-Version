#pragma once
using namespace std;

class Adult
{
	string name;
	int age;
	int hp;
	string role;
	int locationOnBoard;
public:
	Adult();
	Adult(string);
	Adult(string, int);
	Adult(string, int, int, string);
	~Adult();
	string getName();
	void setName(string);
	int getHP();
	void setHP(int);
	int getLocationOnBoard();
	void setLocationOnBoard(int);
	bool operator==(const Adult &other);
	bool operator!=(const Adult &other);
};

