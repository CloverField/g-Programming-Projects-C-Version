#pragma once
class Position
{
public:
	int x;
	int y;
	Position(){ x = -1, y = -1; }
	Position(int row, int col){ x = row, y = col; }
	bool operator==(const Position &other){ return ((x == other.x) && (y == other.y)); }
	bool operator!=(const Position &other){ return !(*this == other); }
	friend ostream& operator<<(ostream &strm, const Position &p){
		return strm << "x position: " << p.x << " " << "y position: " << p.y << endl;
	};
	~Position(){ if ((x != NULL) && (y != NULL)){ x = NULL; y = NULL; }; }
};

