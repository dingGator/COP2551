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
	
	LoadArray();  // constructor
	void alloArray(string, int); 
	string loadInArray(int, int, string);

	//~LoadArray();
};
#endif