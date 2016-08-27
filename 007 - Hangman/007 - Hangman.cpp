// 007 - Hangman.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

enum HangmanState{ Head = 1, LArm, Torso, RArm, LLeg, RLeg };

#pragma warning( push )
#pragma warning( disable : 4018)
bool* createGuessStatusArray(string word)
{
	bool* pGuessArray = new bool[word.length()];
	for (int i = 0; i < word.length(); i++)
	{
		pGuessArray[i] = false;
	}
	return pGuessArray;
}

bool* userGuessResult(char userguess, string word)
{
	bool* pResults;
	pResults = new bool[word.length()];
	for (int i = 0; i < word.length(); i++)
	{
		if (toupper(word[i]) == userguess)
		{
			pResults[i] = true;
		}
		else
		{
			pResults[i] = false;
		}
	}
	return pResults;
}
#pragma warning( pop )

HangmanState UpdateGameState(HangmanState state)
{
	if (state == NULL)
	{
		state = HangmanState::Head;
	}
	else
	{
		state = (HangmanState)((int)state + 1);
	}
	return state;
}

string getHangManStateString(HangmanState state)
{
	string hangmanString;
	if (state == NULL)
	{
		hangmanString += "";
	}
	else if ((int)state >= 1)
	{
		hangmanString += " O\n";
	}
	else if ((int)state >= 2)
	{
		hangmanString += "/";
	}
	else if ((int)state >= 3)
	{
		hangmanString += "|";
	}
	else if ((int)state >= 4)
	{
		hangmanString += "\\n";
	}
	else if ((int)state >= 5)
	{
		hangmanString += "/";
	}
	else if ((int)state >=6)
	{
		hangmanString += " \\";
	}
	return hangmanString;
}

void reset(bool* status, string word)
{
	status = createGuessStatusArray(word);
}

bool goodGuess(bool* resultArray)
{
	bool isGood = true;
	for (int i = 0; i < sizeof(resultArray)/sizeof(resultArray[1]); i++)
	{
		if (resultArray[i] == false)
		{
			isGood = false;
		}
	}
	return isGood;
}

int _tmain(int argc, _TCHAR* argv[])
{
	bool running = true;
	bool* pGuessStatus;
	cout << "This program plays hang man with the user." << endl;
	cout << "This program will keep playing until the user wins." << endl;
	string word = "Test";
	char userGuess;
	pGuessStatus = createGuessStatusArray(word);
	HangmanState gameState = (HangmanState)NULL;
	
	do
	{
		system("cls");
		cout << "Guess a letter " << endl;
		cin >> userGuess;
		if (goodGuess(userGuessResult(userGuess, word)))
		{
			
		}
		else
		{
			UpdateGameState(gameState);
		}

		if (gameState == HangmanState::RLeg)
		{
			cout << "You lose! Try again!" << endl;
			reset(pGuessStatus, word);
		}
	} while (running);


	return 0;
}
