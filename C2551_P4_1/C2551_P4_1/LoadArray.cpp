//Kim Lien Chu
//COP2551.0M1
#include <iostream>
#include <string>


#include "LoadArray.h"

using namespace std;

LoadArray::LoadArray()
{
	errorInMsg = "good_Num";

}
/***************************
LoadArray::loadInArray
* store the value in the vector
*--if it is not a duplicate of a previous number entered.
****************************************/
void LoadArray::alloArray(string msgError, int stNum)
{
	errorInMsg = msgError;
	
	if (errorInMsg== "good_Num" )
	{
		movieCnt = new int[stNum];
		arrPtr = new int*[stNum];
		//dynamic allocation of array
	}
}

string LoadArray::loadInArray(int n, int inputOneNum, string msgError)
{
		errorInMsg = msgError;
		
		if (errorInMsg == "good_Num")
		{
			movieCnt[n] = inputOneNum;  //load array
		}
		return errorInMsg;
	
}
