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
	int getLocationOnBoard();
	void setLocationOnBoard(int);
	bool operator==(const Kid &other);
	bool operator!=(const Kid &other);
	friend ostream& operator<<(ostream&, const Kid&);
private:
	string name;
	int age;
	string role;
	int hp;
	bool ready;
	int locationOnBoard;
};

