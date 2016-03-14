//Kim Lien Chu	
//COP2551.0M1
#include <iostream>

#include "CalcAvgMode.h"
#include "DisplayRep.h"
#include "LoadArray.h"
#include "UserInput.h"
#include "ValidateNum.h"

	
using namespace std;
/********************************************************
program:

1.  ask the user how many students were surveyed.  
2.  allow the user to enter the number of movies each student saw into the array.
		Validate all input.
3.  calculate and display the average and the mode 
****************************************************************/
int main()
{	
/**************************************************************
	ask the user how many students were surveyed.
	An array of integers with this many elements should be dynamically allocated.
	allow the user to enter the number of movies each student saw into the array.
	Validate all input.
****************************************************/
	
	UserInput userNumInput;
	ValidateNum valNum;

	CalcAvgMode calAM;
	DisplayRep disRep;
	
	double aveNum;
	int modNum;
	int movieNum;
	int studNum = -98;
	string statusMsg = "Begin_Input";
	
	if (statusMsg != "end_Input")
	{
		//	Ask the user how many students were surveyed.
		
		cout << "\n\n    How many students were surveyed?  ";
		studNum = userNumInput.userNumIn();

		/*************************
		--validate each number :
		************************/
		statusMsg = valNum.errorMsg(studNum);

		/********************************************
		An array of integers with this many elements should be dynamically allocated.
		*******************************************/
		if (statusMsg == "good_Num")
		{
			LoadArray ldArray(studNum);

			if (statusMsg == "good_Num")
			{
				int n = 0;
				while (n < studNum)
				{
					int numStd = n + 1;
					//			Allow the user to enter the number of movies each student saw into the array.

					cout << "\n\n how many movies did student # ";
					cout << numStd << "  see?  ";


					movieNum = userNumInput.userNumIn();
					//	 Validate all input.

					valNum.errorMsg(movieNum);
					if (statusMsg == "good_Num")
					{
						ldArray.loadInArray(n, movieNum, statusMsg); 
						n++;
					}
				}
			}ldArray.showArray(studNum);
		}
		
	}

	


	/**************************************************************
	calculate average and mode
****************************************************************/
	/*
	aveNum = calAM.avgCalc(movieCnt,inNum);
	// sort the data before mode calc

	sortModeCalc(movieCnt, inNum);
	
	modNum = calAM.modeCalc(movieCnt,inNum);
	*/
	/*************************************************
	display the average with one decimal place 
	display the mode(the value that occurs most often).
***********************************************/
	disRep.displayHeader();
	//disRep.displaySurAvg(aveNum);
	//disRep.displaySurMod(modNum);
	
		return 0;
}

