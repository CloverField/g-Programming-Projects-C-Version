// 001a - Higher or Lower.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <random>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	bool running = true;
	cout << "This program will generate a random number between 1 and 10, its up to the user to guess it." << endl;
	cout << "It will tell the user if they need to guess higher or lower." << endl;
	//int numberToGuess = 1 + (rand() % (int)(10 - 1 + 1)); //Apprently this is biased towards lower numbers
	random_device rd;
	mt19937 rng(rd());
	uniform_int_distribution<int> uni(1, 10);
	int numberToGuess = uni(rng);
	int userGuess;
	do
	{
		cout << "Guess a number: ";
		cin >> userGuess;
		if (userGuess < numberToGuess)
		{
			cout << "\nGuess Higher! \n";
		}
		else if (userGuess > numberToGuess)
		{
			cout << "\nGuess Lower! \n";
		}
		else if (userGuess == numberToGuess)
		{
			cout << "\nYou got it! \n";
			running = false;
		}
	} while (running);
	system("Pause");
	return 0;
}

