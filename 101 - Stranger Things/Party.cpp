#include "stdafx.h"
#include "Party.h"
using namespace std;

Party* currentParty;
string partyName;
size_t partySize;

Party::Party()
{
	currentParty = NULL;
}

Party::Party(string s)
{
	partyName = s;
	currentParty = NULL;
}

Party* Party::createParty(size_t pS)
{
	Party* party = new Party[pS];
	currentParty = party;
	partySize = pS;
	return party;
}

Party::~Party()
{
	if (currentParty != NULL)
	{
		delete[] currentParty;
	}
}
