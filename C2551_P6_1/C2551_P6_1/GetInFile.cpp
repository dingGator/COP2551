//Kim Lien Chu
//COP2535.0M1

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "GetInFile.h"
#include <stack>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <stdlib.h>
using namespace std;
/*******************************************
class GetInFile
1.  read in an input file
2.  produces an output file.

3.  Asks the user for two file names.
	a.  The first file will be opened for input,
	b.  The second file will be opened for output.

4.  Assume:
5.  The first file contains
a.  sentences that end with a period.
6.  Read first file
7.  Change all the letters
	a.	except the first letter of sentences to lowercase.
8.  First letter of sentences should be made uppercase.
9.  The revised contents should be stored in the second file.

*******************************************/

/*

void GetInFile::getInputFile()
{
	/*
	3.  Asks the user for two file names.
		a.The first file will be opened for input,
		b.The second file will be opened for output.
	
	fstream inFile;
	string lCaseString;
	openFile(inFile);
	string line;
	getline(inFile, line);
	lCaseString = lowerCase(line);
	cout << "\n  lCaseString:  " << lCaseString << endl;
	inFile.close();
	
}
*/
/*
string GetInFile::lowerCase(string in)
{
	int ascii;
	char newChar =' ';
	string testWord = in;// (this->c_str());
	string lCaseString;
	for (unsigned pos = 0; pos < testWord.length(); pos++)
	{
		ascii = testWord[pos];
		if (ascii > 64 && ascii < 91)
		{
			newChar = ascii + 32;
		}
		else if (ascii = 46)
		{
			pos++;
			ascii = testWord[pos];
			if (ascii > 96 && ascii < 123)
			{
				newChar = ascii;
			}
		}
		cout << "\n  lCaseString2:  " << lCaseString << endl;
		lCaseString += newChar;
	}
	return lCaseString;
}
*/