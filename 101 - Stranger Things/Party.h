#pragma once
using namespace std;
class Party
{
	Kid* currentParty;
	string partyName;
	size_t partySize;
public:
	Party();
	Party(string);
	Party(string, size_t);
	Party(string, size_t, Kid*);
	Kid* getParty();
	void setParty(Kid*);
	void partyUp(Kid);
	~Party();
	Kid* createParty(size_t);
	void partyUp();
	bool operator==(const Party &other);
	bool operator!=(const Party &other);
};
