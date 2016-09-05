#pragma once
using namespace std;

class Adult
{
public:
	Adult();
	Adult(string);
	Adult(string, int);
	Adult(string, int, int);
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
	bool canAttack(size_t, Board);
	friend ostream& operator<<(ostream &strm, const Adult &a);
	int attack();
private:
	string name;
	int age;
	int hp;
	string role;
	bool ready;
	int locationOnBoard;
};

