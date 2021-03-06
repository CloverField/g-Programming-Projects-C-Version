#ifndef PARTY_H
#define PARTY_H
#include "stdafx.h"
using namespace std;

template <class T> 
class Party
{
public:
	Party(){ currentParty = nullptr; }
	Party(string s){ name = s, currentParty = nullptr; };
	Party(string s, size_t i){ name = s, partySize = i, currentParty = nullptr; }
	Party(string s, size_t i, T* t){ name = s, partySize = i, currentParty = t; }
	T* getParty(){ return currentParty; }
	void setParty(T* t){ currentParty = t; }
	T getName(){ return name; }
	void setName(T n){ name = n; }
	bool partyUp(T t){
		if (currentParty == nullptr)
			return false;
		if (currentPos < partySize)
		{
			currentParty[currentPos] = t;
			currentPos++;
			return true;
		}
		return false;
	}
	~Party(){
		if (currentParty != nullptr)
		{
			delete[] currentParty;
		}
	};
	T* createParty(size_t t){
		T* party = new T[t]();
		partySize = t;
		currentParty = party;
		return party;
	}
	T* createParty(){
		if (partySize != NULL)
		{
			T* party = new T[partySize]();
			currentParty = party;
		}
		return currentParty;
	};
	void disbandParty(){
		if (currentParty != nullptr)
		{
			delete[] currentParty;
			currentParty = nullptr;
		}
		partySize = 0;
		currentPos = 0;
	}
	bool operator==(const Party &other){ return ((currentParty == other.currentParty) && (name == other.name) && (partySize == other.partySize)); }
	bool operator!=(const Party &other){ return !(*this == other); }
	friend ostream& operator<<(ostream &strm, const Party &p){
		strm << "Party Name: " << p.name << endl << "Party size: " << p.partySize << endl;
		//TODO: Fix this
		if (p.currentParty != nullptr)
		{
			strm << "Party Members: \n\n";
			for (size_t i = 0; i < p.partySize; i++)
			{
				if (i != p.partySize - 1)
					strm << p.currentParty[i] << endl;
				else
					strm << p.currentParty[i];
			}
		}
		return strm;
	};
private:
	T* currentParty;
	string name;
	size_t partySize;
	size_t currentPos = 0;
};
#endif
