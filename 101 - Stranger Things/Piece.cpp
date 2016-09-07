#include "stdafx.h"
#include "Piece.h"
using namespace std;

ostream& operator<<(ostream& strm, Piece p)
{
	switch (p)
	{
	case Piece::Empty: strm << "[ ]";    break;
	case Piece::Kid: strm << "[K]"; break;
	case Piece::Adult: strm << "[A]";  break;
	case Piece::Monster: strm << "[M]";   break;
	default: strm.setstate(std::ios_base::failbit);
	}
	return strm;
}
