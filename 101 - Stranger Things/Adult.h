#pragma once
using namespace std;

class Adult
{
	string name;
	int age;
	int hp;
	string role;
public:
	Adult();
	Adult(string);
	Adult(string, int);
	Adult(string, int, int, string);
	~Adult();
	string getName();
	void setName();
	bool operator==(const Adult &other);
	bool operator!=(const Adult &other);
};

