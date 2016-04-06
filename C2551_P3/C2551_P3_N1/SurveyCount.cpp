//Kim Lien Chu
//COP2551.0M1 
#include <iostream>
#include <iomanip>
#include<cstdlib>
#include <stdlib.h>     /* atoi */

#include "SurveyCount.h"

using namespace std;
/**************************************************************
1.  ask the user how many students were surveyed.
2.  An array of integers with this many elements should be dynamically allocated.
3.  allow the user to enter the number of movies each student saw into the array.
4.  Validate all input.
5.  calculate and display the average and the mode

****************************************************/
/*******************************************
constructor
**************************************/
SurveyCount::SurveyCount(){
	numStd = 0;
	avgNum = 0.0;
	movieCnt = 0;
	valMovieCnt = 0;
	modeNum = 0;
	average = 0.0;
	studentNum = 0;
	inputData = 0;
	errorCnt = 0;
	digitData = 0;
	validDigit = 0;
	goodData = false;
	valStdNum = false;
}
/********************************************
1. Ask the user how many students were surveyed.
2. An array of integers with this many elements should be dynamically allocated.
3. Allow the user to enter the number of movies each student saw into the array.
4. Validate all input.
*******************************************/
void SurveyCount::userInput()
{
	
	setStdNum();
	if (valStdNum)
	{
		surCnt = new int[studentNum];  //dynamic allocation of array
		setMovieNum();
	}
}
/********************************************
Ask the user how many students were surveyed.
validate input:  user entered a number
                 user entered a number > 0
*****************************************/
void SurveyCount::setStdNum()
{
	goodData = false;
	
		cout << "\n\n    How many students were surveyed?  ";
		
		cout << "\n         Enter a number   " ;
		
		cin >> inputData;
		while (!cin)
		{
			// validate number of student 
			valDigit();    // val user entered a number
		}
		if ((goodData == true) && (errorCnt<4))
		{
			goodData = false;
			numGrZero();    // val user entered a number >0
			if ((goodData == true) && (errorCnt<4))
			{
				studentNum = digitData;
				valStdNum = true;
			}
		}
	
}
/********************************************
Ask the user how many students were surveyed.
Validate input:		user entered a number
					user entered a number > 0
*****************************************/


void SurveyCount::setMovieNum()
{
	errorCnt = 0;
	
		for (int n = 0 ; n < studentNum; n++)
		{
			numStd = n + 1;
			cout << "\n\n how many movies did student # ";
			cout << numStd << "  see?  ";
			goodData = false;

			

			cin >> inputData;

			//validate number of movies
			while (!cin)
			{
				valDigit();     // user entered a number
			}
			if ((goodData == true) && (errorCnt<4))
			{
				goodData = false;
				numGrZero();  //user entered a number >0
				if((goodData == true) && (errorCnt<4))
				{
					surCnt[n] = digitData;  //load array
				}

			}
		}
	
}
/********************************************
Validate input:  user entered a number
*****************************************/


void SurveyCount::valDigit()
{
	
		cout << "\n\n  You did not enter a number.  " << endl;
		cout << "\nInvalid entry, you did not enter a number.  " << inputData;
		cout << "\n\n   Please enter a valid number:   ";
		errorCnt++;
		cin.clear();
		cin.ignore();

		cin >> inputData;

	
	/*
	if (isdigit(inputData.at(0)))
	{
		goodData = true;
	}
	else
	{
		goodData = false;
		
		cout << "\n\n   Invalid entry, you did not enter a number.  " << inputData;
		cout << "\n\n   Please enter a valid number:   ";
		errorCnt++;
	}
	*/

}
/********************************************
Validate input:  user entered a number > 0
*****************************************/

void SurveyCount::numGrZero()
{
	
	if (digitData > 0)
	{
		goodData = true;
	}
	else
	{
		goodData = false;
		
		cout << "\n\n   Number cannot be less than or equal to 0.";
		cout << "\n\n   Please enter a valid number:  ";
		cin.ignore();
		cin.clear();

		cin >> inputData;

		errorCnt++;
	}
}
/*****************************************
  calculate the average
********************************************/
void SurveyCount::avgCalc()
{
	for (int i = 0; i < studentNum; i++)
	{
		sumNum = sumNum + surCnt[i];
	}
	avgNum = sumNum / studentNum;
	
}
/*****************************************
sort the data to calculate the mode
*****************************************/
void SurveyCount::sortModeCalc()
{
	//selection sort
	int minIndex, minValue;
	for (int s = 0; s < (studentNum - 1); s++)
	{
		minIndex = s;
		minValue = surCnt[s];
		for (int index = s + 1; index < studentNum; index++)
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
void SurveyCount::modeCalc()
{	// sort the data before mode calc
	sortModeCalc();
	//mode calc
	int number = surCnt[0];
	int mode = number;
	int count = 1;
	int countMode = 1;

	for (int i = 1; i<studentNum; i++)
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
	
}

/*******************************
display header
******************************/

void SurveyCount::displayHeader()
{	//display
	
	cout << "\n\n     ***************************************************" << endl;
	cout << "\n          Report Of Numbers of Movies Student watch          "  << endl;
	cout << "\n     ****************************************************" << endl;

}
/*************************************
display average number of movies watched
************************************/
void SurveyCount::displaySurAvg()
{
	//display
	cout << fixed << showpoint << setprecision(1);
	cout << "\n        Student watched an average of :  ";
	cout<< avgNum << "  movies.  " << endl;
}
/****************************************
display mode of the survey
**************************************/
void SurveyCount::displaySurMod()
{
	cout << "\n        The mode is:   ";
	cout << modeNum << "  movies.  " << endl;
	cout << "\n                      *****                  " << endl;
	cout << endl << endl;
}


/*****************************************
destructor
**********************************/
SurveyCount::~SurveyCount()
{
	delete[] surCnt;
	delete[] yCnt;
}

void SurveyCount::printArray()
{
	cout << "\n\n  *****************************" << endl;
	for (int i = 0; i < studentNum; i++)
	{
		cout << "    array  " << surCnt[i] << endl;
	}
}

