//Kim Lien Chu
// COP2551.0M1
#ifndef CALAVGMODE_H
#define CALAVGMODE_H

#include <iostream>
#include <string>

using namespace std;
/**************************************************************
1.  ask the user how many students were surveyed.
2.  An array of integers with this many elements should be dynamically allocated.
3.  allow the user to enter the number of movies each student saw into the array.
4   Validate all input.
5.  calculate and display the average and the mode
****************************************************/


class CalcAvgMode
{
private:
	int sumNum;
		
	double avgNum;

		int minIndex, minValue;
		int number;
		int mode;
		int count;
		int countMode;

		int modeNum;


public:
	CalcAvgMode(){};
	double avgCalc(int [] , int );
	void sortModeCalc(int[], int);
	
	int modeCalc(int [], int);
		~CalcAvgMode(){};
};
#endif