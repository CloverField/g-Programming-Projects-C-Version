#pragma once
using namespace std;

template <class T> 
class Party
{
	T* currentParty;
	string name;
	size_t partySize;
public:
	Party(){currentParty = nullptr};
	Party(string s){ name = s, currentParty = nullptr; };
	Party(string s, size_t i){ name = s, partySize = i, currentParty = nullptr};
	Party(string s, size_t i, T* t){name = s, partySize = i, currentParty = t};
	T* getParty(){ return currentParty; };
	void setParty(T* t){currentParty = t};
	bool partyUp(T t){
		for (size_t i = 0; i < partySize; i++)
		{
			if (currentParty[i] == nullptr)
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
	void partyUp(T t){
		for (size_t i = 0; i < partySize; i++)
		{
			if (currentParty[i] == T())
			{
				currentParty[i] = t;
			}
		}
	};
	bool operator==(const T &other){return (*this == other)};
	bool operator!=(const T &other){return !(*this == other)};
};

