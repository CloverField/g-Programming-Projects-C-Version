#ifndef ADULT_H
#define ADULT_H
using namespace std;

class Adult
{
public:
	Adult();
	Adult(string);
	Adult(string, int);
	Adult(string, int, string);
	Adult(string, int, string, int);
	~Adult();
	string getName();
	void setName(string);
	int getHP();
	void setHP(int);
	int getAge();
	void setAge(int);
	bool operator==(const Adult&);
	bool operator!=(const Adult&);
	friend ostream& operator<<(ostream &strm, const Adult &a);
	Position getPosition();
	void setPosition(Position);
	bool canAttack(Board);
	int attack();
	void move(int, int);
	bool isReady();
	void setReady();
private:
	string name;
	int age;
	string role;
	int hp;
	bool ready;
	Position position;
};
#endif
