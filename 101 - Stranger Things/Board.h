#pragma once
using namespace std;
class Board
{
	string campaignName;
	size_t boardSize;
	Board* board;
public:
	Board();
	Board(string);
	Board(string, size_t);
	Board(string, size_t, Board*);
	~Board();
	Board* createBoard(size_t);
};

