//Kim Lien Chu
//COP2535.0M1
#ifndef GETINFILE_H
#define GETINFILE_H


#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
#include <fstream>
#include "DataCounter.h"

using namespace std;

/*******************************************
Class DisplayReport
will make the report of this format
it brings in structure DataCounter
which had the counts of the survey

***************************************************

Survey of Cafeteria Food
***************************************************"

Food Item			   Like			Dislike
Cheese Pizza			3				0
Hamburger				1				2
Fish Sticks				2				1
Mystery Meat			0				3

* *********************************************************/
class GetInFile
{
private:
	string likeY;
	string disN;
	string s;
	string firstWord;
	string secondWord;
	string thirdWord;
	string yorN;
	
	


public:
	GetInFile()
	{likeY = "Y"; disN = "N";};

	void getInputFile(DataCounter[]);
	void getCountYorN(DataCounter[], int);
	~GetInFile(){};


};

#endif
