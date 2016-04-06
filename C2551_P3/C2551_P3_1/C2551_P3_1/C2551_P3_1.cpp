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
//#include "ReadInFile.h"
//#include "LoadArray.h"
//#include "SortData.h"
//#include "FindMinMax.h"
#include "DisplayReport.h"

using namespace std;

int main()
{	
	//ReadInFile readInFile;
	//LoadArray loadArray;
	//SortData sortData;
	//FindMinMax findMinMax;
	DisplayReport displayReport;
	return 0;
}