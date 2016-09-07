#ifndef PARTY_H
#define PARTY_H
#include "stdafx.h"
using namespace std;

template <class T> 
class Party
{
public:
	Party(){currentParty = nullptr};
	Party(string s){ name = s, currentParty = nullptr; };
	Party(string s, size_t i){ name = s, partySize = i, currentParty = nullptr; };
	Party(string s, size_t i, T* t){name = s, partySize = i, currentParty = t};
	T* getParty(){ return currentParty; };
	void setParty(T* t){currentParty = t};
	//TODO: Fix this
	bool partyUp(T t){
		for (size_t i = 0; i < partySize; i++)
		{
			if (currentParty[i] == T())
			{
				currentParty[i] = t;
				return true;
			}
		}
		return false;
	};
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
	};
	bool operator==(const Party &other){ return ((currentParty == other.currentParty) && (name == other.name) && (partySize == other.partySize)); }
	bool operator!=(const Party &other){ return !(*this == other); }
	friend ostream& operator<<(ostream &strm, const Party &p){
		return strm << "Party Name: " << p.name << endl << "Party size: " << p.partySize << endl;
	};
private:
	T* currentParty;
	string name;
	size_t partySize;
};
#endif
