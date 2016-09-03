#pragma once
using namespace std;
class Party
{
	Party* currentParty;
	string partyName;
	size_t partySize;
public:

	Party();
	Party(string);
	~Party();
	Party* createParty(size_t);
	void partyUp();
};
