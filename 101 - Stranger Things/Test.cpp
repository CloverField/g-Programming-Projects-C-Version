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
	cout << p << "\n" << endl;
}

void Test::testPartyClass()
{
	Party<Kid> pInt = Party<Kid>("Test",4);
	//pInt.createParty(4);
	pInt.partyUp(Kid("Test", 8, "Test", 10));
	pInt.partyUp(Kid("Test2", 8, "Test2", 10));
	pInt.partyUp(Kid("Test3", 8, "Test3", 10));
	pInt.partyUp(Kid("Test", 8, "Test", 10));
	cout << pInt << endl;
}

void Test::runBasicTests()
{
	testKidClass();
	testAdultClass();
	testMonsterClass();
	testPieceClass();
	testBoardClass();
	testPartyClass();
}

void Test::runAllTests()
{
	runBasicTests();
}

Test::~Test()
{
}
