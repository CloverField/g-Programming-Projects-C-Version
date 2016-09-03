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
	Adult(string s, int a, int h, string r){ name = s, age = a, hp = h, role = r; };
	~Adult();
	string getName();
	void setName();
};

