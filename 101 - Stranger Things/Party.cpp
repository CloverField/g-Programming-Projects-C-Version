#include "stdafx.h"
#include "Party.h"
using namespace std;

Party::Party()
{
	currentParty = NULL;
}

Party::Party(string s)
{
	partyName = s;
	currentParty = NULL;
}

Party::Party(string s, size_t ps)
{
	partyName = s;
	partySize = ps;
	currentParty = NULL;
}

Party::Party(string s, size_t ps, Kid* p)
{
	partyName = s;
	partySize = ps;
	currentParty = p;
}

Kid* Party::createParty(size_t pS)
{
	Kid* party = new Kid[pS]();
	currentParty = party;
	partySize = pS;
	return party;
}

Kid* Party::getParty()
{
	return currentParty;
}

void Party::setParty(Kid* p)
{
	currentParty = p;
}

void Party::partyUp(Kid k)
{
	for (size_t i = 0; i < partySize; i++)
	{
		if (currentParty[i] == Kid())
		{
			currentParty[i] = k;
			currentParty[i].setReady();
			break;
		}
		if (i == partySize)
			cout << "Party is Full!" << endl;
	}
}

bool Party::operator==(const Party &other)
{
	if (partySize != other.partySize)
	{
		return false;
	}
	else
	{
		for (size_t i = 0; i < partySize; i++)
		{
			if (currentParty[i] != other.currentParty[i])
			{
				return false;
			}
		}
		return true;
	}
}

bool Party::operator!=(const Party &other)
{
	return !(*this == other);
}

Party::~Party()
{
	if (currentParty != NULL)
	{
		delete[] currentParty;
	}
}
