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

void Test::testPositionClass()
{
	Position p = Position();
	cout << p << endl;
	Position p1 = Position(2, 3);
	cout << p1 << endl;
}

void Test::testPartyClass()
{
	Party<Kid> pKid = Party<Kid>("TestKid", 4);
	pKid.createParty();
	pKid.partyUp(Kid("Test", 8, "Test", 10));
	pKid.partyUp(Kid("Test2", 8, "Test2", 10));
	pKid.partyUp(Kid("Test3", 8, "Test3", 10));
	pKid.partyUp(Kid("Test4", 8, "Test4", 10));
	cout << pKid << endl;
	pKid.disbandParty();
	cout << pKid << endl;
	Party<Adult> pAdult = Party<Adult>("TestAdult", 4);
	pAdult.createParty();
	pAdult.partyUp(Adult("Test", 8, "Test", 10));
	pAdult.partyUp(Adult("Test2", 8, "Test2", 10));
	pAdult.partyUp(Adult("Test3", 8, "Test3", 10));
	pAdult.partyUp(Adult("Test", 8, "Test", 10));
	cout << pAdult << endl;
	pAdult.disbandParty();
	cout << pAdult << endl;
	Party<Monster> pMonster = Party<Monster>("TestMonster", 4);
	pMonster.createParty();
	pMonster.partyUp(Monster("Test", 8, "Test", 10));
	pMonster.partyUp(Monster("Test2", 8, "Test2", 10));
	pMonster.partyUp(Monster("Test3", 8, "Test3", 10));
	pMonster.partyUp(Monster("Test4", 8, "Test4", 10));
	cout << pMonster << endl;
	pMonster.disbandParty();
	cout << pMonster << endl;
}

void Test::runBasicTests()
{
	testKidClass();
	testAdultClass();
	testMonsterClass();
	testPieceClass();
	testBoardClass();
	testPositionClass();
	testPartyClass();
}

void Test::rundAdvancedTests()
{
	Party<Kid> pKid = Party<Kid>("Test", 4);
	_ASSERT(pKid.getParty() == nullptr);
	pKid.createParty();
	_ASSERT(pKid.getParty() != nullptr);
	pKid.disbandParty();
	_ASSERT(pKid.getParty() == nullptr);
}

void Test::runAllTests()
{
	runBasicTests();
	rundAdvancedTests();
}

Test::~Test()
{
}
