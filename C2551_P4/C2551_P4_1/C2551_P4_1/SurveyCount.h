//Kim Lien Chu
// COP2551.0M1
#ifndef SURVEYCOUNT_H
#define SURVEYCOUNT_H

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


class SurveyCount
{
private:
	int *surCnt;   //survey count array
	int *yCnt;		// mode count array

	int inputData;
	int studentNum;
	bool valStdNum;

	int digitData;
	bool goodData;

	int numStd;

	int movieCnt;
	int valMovieCnt;
	int modeNum;
	
	double num;
	double sumNum;
	double average;
	double avgNum;
	
	int errorCnt;
	int validDigit;
	
	
public:
	SurveyCount();			// constructor

	//void userInput();	  // get input
	//void setStdNum();     // get student number
	//void setMovieNum();   // get movie number for each student
	//void valDigit();	  // validate the input as a number 
	//void numGrZero();     // validate the input is greater than zero
	//void avgCalc();       // calc average
	void sortModeCalc();
	void modeCalc();      // calc mode
	void displayHeader(); // display header of report 
	void displaySurAvg();  // display survey average
	void displaySurMod();  // display survey mode
	void printArray();

	~SurveyCount();			//destructor
};
#endif