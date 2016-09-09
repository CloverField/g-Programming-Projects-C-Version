#ifndef TEST_H
#define TEST_H
using namespace std;

class Test
{
public:
	Test();
	~Test();
	void testKidClass();
	void testAdultClass();
	void testMonsterClass();
	void testPieceClass();
	void testBoardClass();
	void testPositionClass();
	void testPartyClass();
	void runBasicTests();
	void runAdvancedTests();
	void runAllTests();
};
#endif
