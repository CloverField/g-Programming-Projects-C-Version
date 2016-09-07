#include "stdafx.h"
#include "Test.h"
using namespace std;

Test::Test()
{
}

void Test::testKidClass()
{
	Kid test = Kid("Test", 8, "Test", 10);
	cout << test << endl;
}

void Test::testAdultClass()
{
	Adult test = Adult("Test", 8, "Test", 8);
	cout << test << endl;
}

void Test::testMonsterClass()
{
	Monster test = Monster("Test", 8, "Test");
	cout << test << endl;
}

void Test::testBoardClass()
{
	Board Test = Board("Test");
	Test.createBoard(5, 5);
	Test.printBoard();
	Test.setBoard(Piece::Adult);
	Test.printBoard();
}

void Test::testPieceClass()
{
	Piece p = Piece::Kid;
	cout << p << endl;
}

void Test::testPartyClass()
{
	Party<Kid> pInt = Party<Kid>("Test", 4);
	pInt.partyUp(Kid("test1"));
	pInt.partyUp(Kid("test2"));
	pInt.partyUp(Kid("test3"));
	pInt.partyUp(Kid("test4"));
	cout << pInt << endl;
}

void Test::runTests()
{
	testKidClass();
	testAdultClass();
	testMonsterClass();
	testPieceClass();
	testBoardClass();
	//testPartyClass();
}

Test::~Test()
{
}
