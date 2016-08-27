// 006a - Rock Paper Scissors.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <random>
using namespace std;

int compMove()
{
	int move;
	default_random_engine generator;
	uniform_int_distribution<int> distribution(1, 3);
	move = distribution(generator);
	return move;
}

int whoWon(int userMove, int compMove)
{
	if ((userMove == 1) && (compMove == 1))
	{
		return 0;
	}
	else if ((userMove == 1) && (compMove == 2))
	{
		return -1;
	}
	else if ((userMove == 1) && (compMove == 3))
	{
		return 1;
	}
	else if ((userMove == 2) && (compMove == 1))
	{
		return -1;
	}
	else if ((userMove == 2) && (compMove == 2))
	{
		return 0;
	}
	else if ((userMove == 2) && (compMove == 3))
	{
		return 1;
	}
	else if ((userMove == 3) && (compMove == 1))
	{
		return -1;
	}
	else if ((userMove == 3) && (compMove == 2))
	{
		return 1;
	}
	else if ((userMove == 3) && (compMove == 3))
	{
		return 0;
	}
	return 4;
}

int _tmain(int argc, _TCHAR* argv[])
{
	bool running = true;
	int userHand;
	cout << "This program plays rock, paper, scissors with the user." << endl;
	cout << "It will keep playing until the user wins" << endl;
	cout << "Enter 1 for rock, 2 for paper, and 3 for scissors" << endl;

	do
	{
		cout << "Enter your move: ";
		cin >> userHand;
		int result = whoWon(userHand, compMove());
		
		if (result == 1)
		{
			cout << "\nYou won!" << endl;
			running = false;
		}
		else if (result == 0)
		{
			cout << "\nIt's a Tie!" << endl;
		}
		else if (result == -1)
		{
			cout << "\nYou lose!" << endl;
		}

	} while (running);

	system("Pause");
	return 0;
}

