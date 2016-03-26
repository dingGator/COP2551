//Kim Lien Chu
//COP2551.0M1
#ifndef LOADARRAY_H
#define LOADARRAY_H
#include <vector>
#include <string>
using namespace std;
/*************************************
class LoadArray
	load data
	calculate average
	calculate mode
***************************************/

class LoadArray
{
private:
	// variables 
	double sumNum;

	double avgNum;

	int minIndex;
	int minValue;
	int number;
	int mode;
	int count;
	int countMode;

	int modeNum;

	string errorMsg;
	string good_Num = "good_Num";
	string errorInMsg;

public:
	int *movieCnt;
	
	LoadArray(){};
	LoadArray(int);  // overload constructor
	string loadInArray(int, int, string );
	void showArray(int);
	double avgCalc(int);
	void sortModeCalc(int);
	int modeCalc(int);
	~LoadArray(){};
};
#endif