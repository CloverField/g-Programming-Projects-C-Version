#ifndef MONSTER_H
#define MONSTER_H
using namespace std;

class Monster
{
public:
	Monster();
	Monster(string);
	Monster(string, int);
	Monster(string, int, string);
	Monster(string, int, string, int);
	string getName();
	void setName(string);
	int getHP();
	void setHP(int);
	int getAge();
	void setAge(int);
	Position getPosition();
	void setPosition(Position);
	~Monster();
	int attack();
	bool canAttack(Board);
	void move(int, int);
	bool operator==(const Monster &other);
	bool operator!=(const Monster &other);
	friend ostream& operator<<(ostream&, const Monster&);
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
