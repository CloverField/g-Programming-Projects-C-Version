#pragma once
using namespace std;
class Board
{
	enum Piece{ Empty, Kid, Adult, Monster };
	string campaignName;
	size_t rows;
	size_t cols;
	Piece* board;
public:
	Board();
	Board(string);
	Board(string, size_t, size_t);
	Board(string, size_t, size_t, Board::Piece*);
	~Board();
	Piece* createBoard(size_t,size_t);
	void printBoard();
	bool operator==(const Board &other);
	bool operator!=(const Board &other);
};

