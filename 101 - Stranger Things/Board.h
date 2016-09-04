#pragma once
#include "Piece.h"
using namespace std;
class Board
{
public:
	Board();
	Board(string);
	Board(string, size_t, size_t);
	Board(string s, size_t r, size_t c, Piece* b);
	~Board();
	Piece* createBoard(size_t, size_t);
	void printBoard();
	bool operator==(const Board &other);
	bool operator!=(const Board &other);
	friend ostream& operator<<(ostream&, const Board&);
private:
	string campaignName;
	size_t rows;
	size_t cols;
	Piece* board;
};

