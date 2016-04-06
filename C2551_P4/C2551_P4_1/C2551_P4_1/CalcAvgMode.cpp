//Kim Lien Chu
//COP2551.0M1 
#include <iostream>
#include <iomanip>

#include "CalcAvgMode.h"

using namespace std;
/*****************************************
calculate the average
********************************************/
double CalcAvgMode::avgCalc(int surCnt[],int studNum)
{
	for (int i = 0; i < studNum; i++)
	{
		sumNum = sumNum + surCnt[i];
	}
	avgNum = sumNum / studNum;
	return avgNum;
}
/*****************************************
sort the data to calculate the mode
*****************************************/
void CalcAvgMode::sortModeCalc(int surCnt[],int studNum)
{
	//selection sort
	int minIndex, minValue;
	for (int s = 0; s < (studNum - 1); s++)
	{
		minIndex = s;
		minValue = surCnt[s];
		for (int index = s + 1; index < studNum; index++)
		{
			if (surCnt[index] < minValue)
			{
				minValue = surCnt[index];
				minIndex = index;
			}
		}
		surCnt[minIndex] = surCnt[s];
		surCnt[s] = minValue;
	}
}
/*****************************************
1.  sort the data to calculate the mode
2.  calc the mode
*****************************************/
int CalcAvgMode::modeCalc(int surCnt[], int stud)
{	//mode calc
	number = surCnt[0];
	mode = number;
	count = 1;
	countMode = 1;

	for (int i = 1; i<stud; i++)
	{
		if (surCnt[i] == number)
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
			number = surCnt[i];
		}
	}
	modeNum = mode;
	return modeNum;

}
