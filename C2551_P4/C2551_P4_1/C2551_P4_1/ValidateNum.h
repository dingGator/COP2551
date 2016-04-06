//Kim Lien Chu
//COP2551.0M1

#ifndef VALIDATENUM_H
#define VALIDATENUM_H
#include <string>
using namespace std;
/*************************************
class ValidateNum
--validate each number :
*between 10 and 100, inclusive

***************************************/

class ValidateNum
{
private:
	// variables 


	int valInNum;

	int sentinel_99;
public:
	string errorMsgOut;
	ValidateNum();  // constructor
	string valInput(int &);
	~ValidateNum(){};
};
#endif