//Kim Lien Chu
//COP2551.0M1

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
#include <fstream>
#include "RainFallList.h"

using namespace std;
/*******************************************
DisplayReport
will make the report of this format

***************************************************

Survey of Cafeteria Food
***************************************************"

Food Item			   Like			Dislike
Cheese Pizza			3				0
Hamburger				1				2
Fish Sticks				2				1
Mystery Meat			0				3

* *********************************************************/
RainFallList::RainFallList(int num, string monthName[], double rainAmt[])
{	
	//monthName[12] = {	"January",		"February",	"March",	"April",
	//					"May",			"June",		"July",		"August",
	//					"September",	"October",	"November", "December" };
	
	numRainAmt = num;
	if (num > 0)
	{
		mnthRainAmt = new double[num];
	
		arrPtr = new double*[num];
		for (int count = 0; count < numRainAmt; count++)
		{
	
			mnthRainAmt[count] = rainAmt[count];
			arrPtr[count] = &mnthRainAmt[count];
			cout << "\n arrPtr1  " << arrPtr[count] << " minIndex   " << mnthRainAmt[count];

		}
		selectSort();
	}
};


RainFallList::~RainFallList()
{
	if (mnthRainAmt > 0)
	{
		delete[] mnthRainAmt;
		mnthRainAmt = 0;
		delete[] arrPtr;
		arrPtr = 0;
		 
	}
}
void RainFallList::getInputFile(int months, double monthlyRainAmt[])
{

	//read in cafeteria file
	//readData till EOF
	months = 12;
	double in;
	ifstream inFile;
	inFile.open("rainfall.txt");
	if (!inFile)
	{
		cout << "\n Error opening data file.\n";
	}
	else
	{
		for (int monthI = 0; monthI < 12; monthI++)
		{
			while (inFile >> in)
			{

				monthlyRainAmt[monthI] = in;
				cout << "\n load data in  " << in << " load data array   " << monthlyRainAmt[monthI];
			}
		};
		inFile.close();
	};

};
void RainFallList::selectSort()
{
	int minIndex;
	double *minElem;
	for (int scan = 0; scan < (12 - 1); scan++)
	{
		minIndex = scan;
		minElem = arrPtr[scan];
		for (int index = scan + 1; index < 12; index++)
		{
			if (*(arrPtr[index]) < *minElem)
			{
				minElem = arrPtr[index];
				minIndex = index;
				cout << "\n arrPtr  " << arrPtr[index] << " minIndex   " << minIndex;

			}
		}
		arrPtr[minIndex] = arrPtr[scan];
		arrPtr[scan] = minElem;
	}
	
}

void RainFallList::rainfallReport()
{
	for (int count = 0; count < 12;count++)
	{
		cout << mnthRainAmt[count] << " ";
	}
	cout << endl;

}
void RainFallList::rainfallSorted()
{
	for (int count = 0; count < 12; count++)
	{
		cout << *(arrPtr[count]) << " ";
	}
	cout << endl;

}





