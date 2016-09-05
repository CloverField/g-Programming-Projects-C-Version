#include "stdafx.h"
#include "Board.h"
using namespace std;

Board::Board()
{
	board = nullptr;
}

Board::Board(string s)
{
	campaignName = s;
	board = nullptr;
}

Board::Board(string s, size_t r, size_t c)
{
	campaignName = s;
	rows = r;
	cols = c;
	board = nullptr;
}

Board::Board(string s, size_t r, size_t c, Piece* b)
{
	campaignName = s;
	rows = r;
	cols = c;
	board = b;
}

Piece *Board::createBoard(size_t bRows, size_t bCols)
{
	Piece* b = new Piece[bRows*bCols]();
	rows = bRows;
	cols = bCols;
	board = b;
	return b;
}

void Board::printBoard()
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			cout << board[i + j];
		}
		cout << endl;
	}
}

Board::~Board()
{
	if (board != nullptr)
	{
		delete[] board;
	}
}

bool Board::operator==(const Board &other)
{
	return ((rows == other.rows) && (cols == other.cols) && (campaignName == other.campaignName) && (board == other.board));
}

bool Board::operator!=(const Board &other)
{
	return !(*this == other);
}

ostream& operator<<(ostream &strm, const Board &b)
{
	return strm << "Campaign Name: " << b.campaignName << endl << "Rows: " << b.rows << endl << "Columns: " << b.cols << endl;
}

void Board::setPiece(Piece p, int pos)
{
	board[pos] = p;
}

void Board::removePiece(int pos)
{
	board[pos] = Piece::Empty;
}

void Board::initializeBoard()
{
	for (size_t i = 0; i < rows*cols; i++)
	{
		board[i] = Piece::Empty;
	}
}

Piece* Board::getBoard()
{
	return board;
}

size_t Board::getBoardSize()
{
	return (rows*cols);
}