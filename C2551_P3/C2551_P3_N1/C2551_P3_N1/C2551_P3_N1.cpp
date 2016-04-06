//Kim Lien Chu
//COP2551.0M1

/********************************************
P3:
Program 
1.	Use parallel arrays to hold data
2.	Use the file named "rainfall.txt" to read
	A.	The rainfall.txt file is found in the current directory.
3.	Displays:	The output displays
	A.	the both the month and rainfall amount
		1.	In descending order by rainfall amount,
		2.	One month information per line.

***************************************************/
#include <iostream>
#include <string>
#include <iomanip>
#include "RainFallList.h"

using namespace std;


/********************************************
P3:

Program is modular:	Call different methods
1.	to read the rainfall amounts from the file
	A.	Use the file named "rainfall.txt" to read
		1.  In the file in the rainfall amounts by month
			a.	beginning with January
			b.	ending with December.
		2.	The rainfall.txt file is found in the current directory.
2.	Use parallel arrays
	A.  One array holds the name of the month
		1.	Use a constructor to set the month names.
	B.  The other array holds its corresponding rainfall amount.
3.	To sort the data:	
	A.	Used Selection Sort
	B.	Sort rainfall amount in descending order
4.	Displays:	The output displays
	A.	the both the month and rainfall amount
	B.	In descending order by rainfall amount,
	C.	One month information per line.
***************************************************/


int main()
{
/******************************************************
Use parallel arrays
	A.One array holds the name of the month
		1.	Use a constructor to set the month names.
	B.The other array holds its corresponding rainfall amount.
	
*************************************************************/
	

	RainFallList rainList1;			//instantiate RainFallList

	
/********************************************************
getInputFile:
	Use the file named "rainfall.txt" to read
		A.In the file in the rainfall amounts by month
			a.beginning with January
			b.ending with December.
******************************************/
	rainList1.getInputFile();

/***********************************************
selectSort
	sort both the month and rainfall amount
		1.	In descending order by rainfall amount,
****************************************/
	rainList1.selectSort();

/********************************************
rainSortDisplay
	Displays:	The output displays
		1.	the both the month and rainfall amount
		2.	In descending order by rainfall amount,
		3.	One month information per line.

***********************************/
	rainList1.rainSortDisplay();
	return 0;
}

