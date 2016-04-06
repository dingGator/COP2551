//Kim Lien Chu
//COP2535.0M1

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
#include <fstream>
#include "DataCounter.h"
#include "GetInFile.h"

using namespace std;
/*******************************************

* *********************************************************/


void GetInFile::getInputFile(DataCounter respCount[])
{

	vector<string>inLine;
	
	//read in cafeteria file
	//readData till EOF
	string in;
	ifstream inFile;
	inFile.open("cafeteria.txt");
	if (!inFile)
	{
		cout << "\n Error opening data file.\n";
	}
	else
	{
		while (getline(inFile, in))
		{
			inLine.push_back(in);
		};
		inFile.close();
	};
		
		
	for (int inI= 0; inI < inLine.size(); inI++)
	{
		stringstream line(inLine[inI]);
		
			line >> firstWord;			//fetch first word of current line
			line >> secondWord;			// fetch second word of current line

		
			/**********************************************
			//loop thru the DataCounter structure find the name of food item
			// add one to the like or dislike variable of that food item
			***********************************************/

			for (int fNameI = 0; fNameI < sizeof(respCount); fNameI++)
			{	
				/*************************************************
				// when the food item name is one word 
				// the seond word will be a y or n response: like or dislike
				*********************************************/
				if (firstWord == respCount[fNameI].name1)
				{
					yorN = secondWord;
					getCountYorN(respCount, fNameI);				
				}

				/********************************************
				// when the food item name is two words 
				// the third word will be a response:
				//a y or n response: like or dislike
				****************************************/

				else if ((firstWord + " " + secondWord) == respCount[fNameI].name1)
				{
					line >> thirdWord;
					yorN = thirdWord;
					getCountYorN(respCount, fNameI);
				}

			}
			
		}
	
	
};
/***********************************
		getCountYorN
		bring in structure : Datacounter
		bring in index: fNameI
count how many y or n for each food item
******************************/

void GetInFile::getCountYorN(DataCounter respCount[], int fNameI)
{
	if (yorN == likeY)
	{
		respCount[fNameI].likeCount++;
	}
	else if (yorN == disN)
	{
		respCount[fNameI].dlikeCount++;
	}
	fNameI = 4;

}






