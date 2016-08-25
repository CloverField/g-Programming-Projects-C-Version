// 001b - Heads or Tails.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "This program flips a coin and asks the user to guess it." << endl;
	cout << "Enter your responce in the form of Heads Tails" << endl;
	cout << "The program will keep running until you guess correctly." << endl;
	bool running = true;
	do
	{
		bool headsOrTails = rand() % 2;
		string userGuess;
		cout << "\nEnter your guess: ";
		getline(cin, userGuess);
		if ((userGuess == "Heads") && headsOrTails)
		{
			cout << "\nYou got it!\n";
			running = false;
		}
		else if ((userGuess == "Tails") && !headsOrTails)
		{
			cout << "\nYou got it!\n";
			running = false;
		}
		else
		{
			cout << "\nGuess again!\n";
		}
		
	} while (running);
	system("Pause");

	return 0;
}