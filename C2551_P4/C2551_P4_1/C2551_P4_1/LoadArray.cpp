//Kim Lien Chu
//COP2551.0M1
#include <iostream>
#include <iomanip>
#include <string>
#include <new>

#include "LoadArray.h"

using namespace std;
/***************************
LoadArray::LoadArray
overload constructor
dynamic allocation of array
****************************************/
LoadArray::LoadArray(int stNum)
{
	
	//dynamic allocation of array
	movieCnt = new int[stNum];
	
}
/***************************
LoadArray::loadInArray
****************************************/

string LoadArray::loadInArray(int n, int inputOneNum, string msgError)
{
		errorInMsg = msgError;
		if (errorInMsg == good_Num)
		{
			movieCnt[n] = inputOneNum;
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

double LoadArray::avgCalc(int stNum)
{
	for (int i = 0; i < stNum; i++)
	{
		
		sumNum = sumNum + movieCnt[i];
		
	}
	avgNum = sumNum / stNum;
	return avgNum;
}
/*****************************************
sort the data to calculate the mode
*****************************************/

void LoadArray::sortModeCalc(int stNum)
{
	//selection sort
	int minIndex, minValue;
	for (int s = 0; s < (stNum - 1); s++)
	{
		minIndex = s;
		minValue = movieCnt[s];
		for (int index = s + 1; index < stNum; index++)
		{
			if (movieCnt[index] < minValue)
			{
				minValue = movieCnt[index];
				minIndex = index;
			}
		}
		movieCnt[minIndex] = movieCnt[s];
		movieCnt[s] = minValue;
	}
}
/*****************************************
1.  sort the data to calculate the mode
2.  calc the mode
*****************************************/

int LoadArray::modeCalc(int stNum)
{	//mode calc
	number = movieCnt[0];
	mode = number;
	count = 1;
	countMode = 1;

	for (int i = 1; i<stNum; i++)
	{
		if (movieCnt[i] == number)
		{ // count occurrences of the current number
			count++;

			if (count > countMode)
			{
				countMode = count; // mode is the biggest ocurrences
				mode = number;
			}
		}
		else
		{ // now this is a different number

			count = 1; // reset count for the new number
			number = movieCnt[i];
		}
	}
	modeNum = mode;
	return modeNum;

}

