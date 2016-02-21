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
//RainFallList::RainFallList(string nName[])
//{
//	monthName[] = nName[];	
	
	/*

	numRainAmt = num;

	if (num > 0)
	{
		mnthRainAmt = new double[num];

		arrPtr = new double*[num];
		for (int count = 0; count < numRainAmt; count++)
		{

			mnthRainAmt[count] = rainAmt[count];
			arrPtr[count] = &mnthRainAmt[count];
			//cout << "\n arrPtr1  " << arrPtr[count] << " minIndex   " << mnthRainAmt[count];

		}
		
	}
	*/
//};

/*
RainFallList::~RainFallList()
{/*
	if (numRainAmt > 0)
	{
		delete[] mnthRainAmt;
		mnthRainAmt = 0;
		delete[] arrPtr;
		arrPtr = 0;

	}

}
*/
void RainFallList::getInputFile(int months, double rainAmt[])
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

			inFile >> in;
			rainAmt[monthI] = in;
			cout << "\n load data in  " << in << " load data array   " << rainAmt[monthI] <<" index  " <<monthI;
			
		};
		inFile.close();
	};
	for (int count = 0; count < 12; count++)
	{
		cout << "\n in array1 " << rainAmt[count] << " index    "   << count;
	}


};
/*
void RainFallList::setPtr(int num, int numRainAmt, double nRainAmt[], double **arrPtr, double rainAmt[])
{
	numRainAmt = 12;
	if (num > 0)
	{
		nRainAmt = new double[num];
		arrPtr = new double*[num];
		for (int count = 0; count < 12; count++)
		{

			nRainAmt[count] = rainAmt[count];
			arrPtr[count] = &nRainAmt[count];
			//cout << "\n arrPtr1  " << arrPtr[count] << " minIndex   " << mnthRainAmt[count];

		}
		selectSort();
	}
};
*/
void RainFallList::selectSort(double array1[], int size)
{
	
	
	int startScan, minIndex;
	double maxValue;
	string maxMnthName;
	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		
		minIndex = startScan;
		maxValue = array1[startScan];
		//maxMnthName = monthName[startScan];
		cout << "\n  array1[startScan]  " << array1[startScan] << " startScan  " << startScan <<  endl;

		for (int index = (startScan + 1); index < size; index++)
		{
			if (array1[index] > maxValue)
			{
				//maxMnthName = monthName[index];
				maxValue = array1[index];
				minIndex = index;
				
				cout << "\n if loop  array1  " << array1[index] << " index  " << index;
				cout << " maxValue   " << maxValue;
				//cout << " monthName[index]  "<< monthName[index]<< endl;
			}

		}
		array1[minIndex] = array1[startScan];
		array1[startScan] = maxValue;
		//monthName[minIndex] = monthName[startScan];
		cout << "\n for loop array1[minIndex]  " << array1[minIndex] << " minIindex  " << minIndex;
		cout << "\n array1[startScan] " << array1[startScan] << " startScan " << startScan;
		cout << " monthName[startScan]  " << monthName[0] << endl;

		//monthName[startScan] = maxMnthName;
		
	}
	for (int count = 0; count < size; count++)
	{
		cout << "   1  " << array1[count] << " ";
		cout << endl;

	}
	cout << endl;
}
/*
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
				//cout << "\n arrPtr  " << arrPtr[index] << " minIndex   " << minIndex;

			}
		}
		arrPtr[minIndex] = arrPtr[scan];
		arrPtr[scan] = minElem;
	}
	
}

void RainFallList::rainfallReport()
{
	cout << "\n   ***************************************************" << endl;

	cout << "		      Rainfall Report For the Year               " << endl;
	cout << "\n   ***************************************************" << endl;
	cout << setw(21) << left << "   Month        ";
	cout << setw(18) << left << "   Rainfall              ";
	cout << endl << endl;

	for (int count = 0; count < 12; count++)
	{
		cout << "   " << setw(20) << left << monthName[count];
		cout << "   " << setw(21) << left ;
		
		cout << endl;


		
	}
	cout << endl;

}
void RainFallList::rainfallSorted()
{
	cout << "\n   ***************************************************" << endl;

	cout << "		      Rainfall Report For the Year               " << endl;
	cout << "\n   ***************************************************" << endl;
	cout << setw(21) << left << "   Month        ";
	cout << setw(18) << left << "   Rainfall              ";
	cout << endl << endl;

	for (int count = 0; count < 12; count++)
	{
		cout << arrPtr[count]<< " "<<endl;
	}
	cout << endl;

}

*/



