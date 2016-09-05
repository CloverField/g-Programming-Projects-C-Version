#ifndef Adult_H
#define Adult_H
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
	Position getPosition();
	void setPosition(Position);
	bool operator==(const Adult &other);
	bool operator!=(const Adult &other);
	bool canAttack(Board);
	friend ostream& operator<<(ostream &strm, const Adult &a);
	int attack();
	void move(int, int);
	bool isReady();
	void setReady();
private:
	string name;
	int age;
	int hp;
	string role;
	bool ready;
	Position position;
};
#endif
