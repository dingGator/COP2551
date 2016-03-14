//Kim Lien Chu
//COP2551.0M1
#include <iostream>
#include <string>


#include "LoadArray.h"

using namespace std;

LoadArray::LoadArray(int stNum)
{
	errorInMsg = "good_Num";
	//dynamic allocation of array
	movieCnt = new int[stNum];
	arrPtr = new int*[stNum];

}
/***************************
LoadArray::loadInArray
****************************************/
string LoadArray::loadInArray(int n, int inputOneNum, string msgError)
{
		errorInMsg = msgError;
		
		if (errorInMsg == "good_Num")
		{
			movieCnt[n] = inputOneNum;  //load array
		}
		return errorInMsg;
	
}
void LoadArray::showArray(int stNum)
{
	for (int i = 0; i < stNum; i++)
	{
		cout << "\n\n    movieCnt array    " << movieCnt[i] << endl;;
	}
}
