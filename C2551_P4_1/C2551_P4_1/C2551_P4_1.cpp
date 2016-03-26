//Kim Lien Chu	
//COP2551.0M1
#include <iostream>

#include "DisplayRep.h"
#include "LoadArray.h"
#include "UserInput.h"
#include "ValidateNum.h"

	
using namespace std;
/********************************************************
Program 4:

1.  ask the user how many students were surveyed.
		Validate all input.
2.  allow the user to enter the number of movies each student saw 
		Validate all input.
		enter the number of movies into the array.
3.  calculate and display the average and the mode
****************************************************************/
int main()
{

	UserInput<int> userEnterInput;
	ValidateNum valNum;

	
	DisplayRep  disRep;
	double aveNum;
	int modNum;
	int movieNum;
	string begin_Input = "begin_Input";
	string good_Num = "good_Num";
	int numberOfStudent = -98;
	string statusMsg;
	statusMsg = begin_Input;


		/**************************************************************
		Ask the user how many students were surveyed.
		An array of integers with this many elements is be dynamically allocated.
		Validate all input.
		****************************************************/
				
		numberOfStudent = userEnterInput.userEnterIn(statusMsg,numberOfStudent);

		/********************************************
		//	 Validate all input.
		*******************************************/
		statusMsg = valNum.valInput(numberOfStudent);
		if (statusMsg == good_Num)
		{
			/***************************************
			//	allocate pointer array
			********************************/
			LoadArray  ldArray(numberOfStudent);

			if (statusMsg == good_Num)
			{
				int n = 0;
				while (n < numberOfStudent)
				{
					int numStd = n + 1;
					/********************************************
					//			Allow the user to enter the number
					//of movies each student saw into the array.
					*******************************************/

					movieNum = userEnterInput.userEnterIn(statusMsg,n);
					/********************************************
					//	 Validate all input.
					*******************************************/

					statusMsg = valNum.valInput(movieNum);
					if (statusMsg == good_Num)
					{

						/********************************************
						//	 Load number of movie into array.
						*******************************************/

						ldArray.loadInArray(n, movieNum, statusMsg);
						n++;
					}
				}
			}
			
		/**************************************************************
					calculate average and mode
		****************************************************************/

			aveNum = ldArray.avgCalc(numberOfStudent);
			/**************************************************************
			// sort the data before mode calc
			****************************************************************/
			ldArray.sortModeCalc(numberOfStudent);

			modNum = ldArray.modeCalc(numberOfStudent);
		

		/*************************************************
		display the average with one decimal place
		display the mode(the value that occurs most often).
		***********************************************/

		disRep.displayHeader();
		disRep.displaySurAvg(aveNum);
		disRep.displaySurMod(modNum);
	}

		return 0;
}

