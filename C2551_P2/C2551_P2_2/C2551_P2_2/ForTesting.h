//Kim Lien Chu
//COP2535.0M1
/*************************************************
**************************************************/
#ifndef FORTESTING_H
#define FORTESTING_H
#include<vector>
using namespace std;
/*************************************
class ForTesting
Function show array
--- to show array first ten elements
***************************************/
class ForTesting
{
private:
	int minInput;
	int maxInput;
	int invalidInput;
	int validInput;
	int endInput;
public:

	ForTesting(){};  // constructor
	//prototypes
	void testValLogic();
	void showVector(vector<int>);

	//destructor
	~ForTesting(){};


};
#endif

