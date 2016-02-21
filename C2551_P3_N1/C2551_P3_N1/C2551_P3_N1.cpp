//Kim Lien Chu
//COP2551.0M1

/*
Using object - oriented programming concepts,
write a program that displays the name of each month
in a year and its rainfall amount,
sorted in order of rainfall from highest to lowest.
The program should use parallel arrays
where one array holds the name of the month
and the other array holds its corresponding rainfall amount.
Use a constructor to set the month names.
Use the file named rainfall.txt to read
in the rainfall amounts by month beginning with January
and ending with December.
The rainfall.txt file should be found in the current directory.
Do not prompt the user for a filename.
Be sure to make the program modular
by calling different methods(at least 3)
to read the rainfall amounts from the file,
to sort the data, and to display the data.

The output should display the both the month and
rainfall amount in descending order by rainfall amount,
one month information per line.
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
#include <fstream>
#include "RainFallList.h"
//#include "GetRainFile.h"
//#include "ReadInFile.h"
//#include "LoadArray.h"
//#include "SortData.h"
//#include "FindMinMax.h"
//#include "DisplayReport.h"

using namespace std;

int main()
{
	double rainAmt[12];
	//string nameMonth[12];
	RainFallList rainList1;
	RainFallList nameMonth[12]=
	{
		RainFallList("January"),	RainFallList("February"),	RainFallList("March"),
		RainFallList("April"),		RainFallList("May"),		RainFallList("June"),
		RainFallList("July"),		RainFallList("August"),		RainFallList("September"),
		RainFallList("October"),	RainFallList("November"),	RainFallList("December"), 
	};
	
	
	rainList1.getInputFile(12, rainAmt);
	cout << "\n inputarray " << endl;

	for (int count = 0; count < 12; count++)
	{
		cout << " in main  "<<rainAmt[count] << " ";
		cout << endl;
	}
	
	//rainList.setPtr(12, rainAmt);

	for (int index = 0; index < 12; index++)
	{		cout << "\n  monthname in main " << nameMonth[index].getMonthName() << endl;
	}
	cout << "\n rainfallSorted " << endl;
	rainList1.selectSort(rainAmt, 12);
	for (int count = 0; count < 12; count++)
	{
		cout << "  rainAmt in main   "<<rainAmt[count] << " ";
		cout << endl;
	}
	
	
	
	
	//rainList.rainfallSorted();
	cout << "\n rainfallReport " << endl;
	//rainList.rainfallReport();

	//LoadArray loadArray;
	//SortData sortData;
	//FindMinMax findMinMax;
	//DisplayReport displayReport;
	return 0;
}