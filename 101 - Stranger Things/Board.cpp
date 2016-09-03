#include "stdafx.h"
#include "Board.h"

string campaignName;
size_t boardSize;
Board* board;

Board::Board()
{
	board = NULL;
}

Board::Board(string s)
{
	campaignName = s;
	board = NULL;
}

Board::Board(string s, size_t bs)
{
	campaignName = s;
	boardSize = bs;
	board = NULL;
}

Board::Board(string s, size_t bs, Board* b)
{
	campaignName = s;
	boardSize = bs;
	board = b;
}

Board* Board::createBoard(size_t bSize)
{
	Board* b = new Board[bSize];
	boardSize = bSize;
	return b;
}

Board::~Board()
{
	if (board != NULL)
	{
		delete[] board;
	}
}