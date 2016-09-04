#include "stdafx.h"
#include "Piece.h"
using namespace std;

ostream& operator<<(ostream& os, Piece p)
{
	switch (p)
	{
	case Piece::Empty: os << "[ ]";    break;
	case Piece::Kid: os << "[K]"; break;
	case Piece::Adult: os << "[A]";  break;
	case Piece::Monster: os << "[M]";   break;
	default: os.setstate(std::ios_base::failbit);
	}
	return os;
}
