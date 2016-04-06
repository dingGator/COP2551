//Kim Lien Chu
//COP2551.0M1

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "RainFallList.h"

using namespace std;
/*******************************************
class RainFallList
getInputFile	-- to load rain amount from file
				to rainAmt
*********************************************************/
//default constructor
RainFallList::RainFallList()
{
	rainAmt = new double[NUM_MONTHS];
	monthName = new string[NUM_MONTHS];
	
	monthName[0] = "January";
	monthName[1] = "Febrary";
	monthName[2] = "March";
	monthName[3] = "April";
	monthName[4] = "May";
	monthName[5] = "June";
	monthName[6] = "July";
	monthName[7] = "August";
	monthName[8] = "September";
	monthName[9] = "October";
	monthName[10] = "November";
	monthName[11] = "December";
	
}
void RainFallList::getInputFile()
{



	//read in cafeteria file
	ifstream inFile;
	inFile.open("rainfall.txt");
	if (!inFile)
	{
		cout << "\n Error opening data file.\n";
	}
	else
	{
		for (int monthI = 0; monthI < NUM_MONTHS; monthI++)
		{
			//read in file
			inFile >> in;
			
			//load data into array
			rainAmt[monthI] = in;
		};
		inFile.close();
	};

}
/***********************************************
selectSort
sort both the month and rainfall amount
1.	In descending order by rainfall amount,
****************************************/

void RainFallList::selectSort()
{
	int startScan;
	int size = NUM_MONTHS;
	string maxMnthName;
	for (startScan = 0; startScan < (size - 1); startScan++)
	{

		minIndex = startScan;
		maxValue = rainAmt[startScan];
		maxMnthName = monthName[startScan];

		for (int index = (startScan + 1); index < NUM_MONTHS; index++)
		{
			if (rainAmt[index] > maxValue)
			{
				maxMnthName = monthName[index];
				maxValue = rainAmt[index];
				minIndex = index;

			}

		}
		rainAmt[minIndex] = rainAmt[startScan];
		rainAmt[startScan] = maxValue;
		monthName[minIndex] = monthName[startScan];
		monthName[startScan] = maxMnthName;

	}
}
/********************************************
rainSortDisplay
Displays:	The output displays
1.	the both the month and rainfall amount
2.	In descending order by rainfall amount,
3	One month information per line.

***********************************/

void RainFallList::rainSortDisplay()
{
	cout << "\n   ***************************************************" << endl;

	cout << "             Rainfall For the Year                      " << endl;
	cout << "     Sorted In Descending Order By Rainfall Amount      " << endl;
	cout << "\n   ***************************************************" << endl;
	cout << "      " << setw(21) << left << "   Month        ";
	cout << "       " << setw(18) << left << "   Rainfall              ";
	cout << endl << endl;
	for (int reportI = 0; reportI < NUM_MONTHS; reportI++)
	{
		cout << "         " << setw(21) << left << monthName[reportI];
		cout << "         " << setw(18) << left << rainAmt[reportI];
		cout << endl;
	}

	cout << endl << endl;

}


