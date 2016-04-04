//Kim Lien Chu
//COP2535.0M1

#include <iostream>
#include <string>
#include <iomanip>
#include<cstring>
#include<cstdlib>
#include <vector>
#include <fstream>

#include "TestFrame2_1.h"

using namespace std;
/*******************************************

* *********************************************************/


void GetInFile::
getInputFile(vector<double> &doubVect, vector<int>&intVect, vector<string>&strVect)
{

	//read in cafeteria file
	//readData till EOF
	string valStr;
	double valDoub;
	char ch;
	ifstream inFile;
	string line;
	inFile.open("minmax.txt");
	if (!inFile)
	{
		cout << "\n Error opening data file.\n";
	}
	else
	{
		cout << "\n   opened file  \n";

		while (getline(inFile, line))
		{

			if (isdigit(line.at(0)) || line.at(0) == '-')
			{
				int valDoub = atof(line.c_str());
				doubVect.push_back(valDoub);
				cout << " num load done " << valDoub << endl;
			}
			else
			{
				valStr = line;
				strVect.push_back(valStr);
				cout << "\n  string load here:  " << valStr << endl;
			}

		}
		inFile.close();
	}

}


