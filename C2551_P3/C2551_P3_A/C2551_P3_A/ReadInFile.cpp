//Kim Lien Chu
//COP2551.0M1

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
#include <fstream>
#include "ReadInFile.h"

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
void ReadInFile::getInputFile(mRain[], int mIndex)
{

	//read in cafeteria file
	//readData till EOF
	double in;
	ifstream inFile;
	inFile.open("rainfall.txt");
	if (!inFile)
	{
		cout << "\n Error opening data file.\n";
	}
	else
	{	
		for (int monthI = 0; monthI < mIndex; month++)
		{
			while (inFile >> in))
			{

				mRain[monthI] = in;
				cout << "\n load data in  " << in << "\n load data array   " << mRain[monthI];
			}
		};
		inFile.close();
	};

};
/***********************************
getCountYorN
bring in structure : Datacounter
bring in index: fNameI
count how many y or n for each food item
******************************/







