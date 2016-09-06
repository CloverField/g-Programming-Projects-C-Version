#ifndef Piece_H
#define Piece_H
#pragma once
using namespace std;

enum class Piece{ Empty, Kid, Adult, Monster };
ostream& operator<<(ostream&, Piece);
#endif
