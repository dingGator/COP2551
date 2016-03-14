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
#include <fstream>
#include <sstream>
#include "ReadInFile.h"
//#include "LoadArray.h"
//#include "SortData.h"
//#include "FindMinMax.h"
//#include "DisplayReport.h"

using namespace std;
//void getInputFile(double[], int);


int main()
{
	/*
	const int NUM_MONTHS =12;
	string name[NUM_MONTHS] = { "Jan", "Feb", "March", "April",
								"May", "June", "July", "August", 
								"Sept", "Oct", "Nov", "Dec" };
	double monthRain[12] = { 0 };
	cout << "\n  name   " << name[1]<<endl;
	double in;
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
			while (inFile>> in)
			{
				monthRain[monthI] = in;
				cout << "\n load data in  " << in << "\n load data array.  " << monthRain[monthI];
			}
		};
		inFile.close();
	};*/
	//ReadInFile readFile;

	
	//LoadArray loadArray;
	//readFile.getInputFile(monthRain,12);
	//LoadArray loadArray;
	//SortData sortData;
	//FindMinMax findMinMax;
	//DisplayReport displayReport;
	//displayReport.displayHeader();



	return 0;
}