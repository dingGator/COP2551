//Kim Lien Chu
//COP2551.0M1
#ifndef LOADARRAY_H
#define LOADARRAY_H
#include <vector>
#include <string>
using namespace std;
/*************************************
***************************************/
class LoadArray
{
private:
	// variables 
	

public:
	int *movieCnt;
	int **arrPtr;

	
	string errorInMsg;
	
	LoadArray(int);  // constructor
	//void alloArray(string, int); 
	string loadInArray(int, int, string);
	void showArray(int);
	//~LoadArray();
};
#endif