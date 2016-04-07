//Kim Lien Chu
//2551.0M01
/***************************************
Project 6
Program
1.  read in an input file
2.  produces an output file.
3.** Reformat: Change all the letters
	except the first letter of sentences to lowercase.
4.  The reformatted contents should be stored in the second file.
************************************************/
#include <iostream>
#include <stdlib.h>
#include "OpenFile.h"
#include "ReformatFile.h"
#include <fstream>
#include <string>


using namespace std;
/***************************************
Project 6
Program

1.  Asks the user for two file names.
	a.  The first file will be opened for input,
	b.  The second file will be opened for output.
2.  Assume:
	a.  The first file contains
	b.  sentences that end with a period.
3.  Read first file
4. ** Change all the letters
	except the first letter of sentences to lowercase.
5.  First letter of sentences should be made uppercase.
6.  The reformatted contents should be stored in the second file.
************************************************/

int main()
{
	OpenFile opIOFile;
	ReformatFile<string> fileReformat;
	fstream inFile, outFile;
	// open file
	opIOFile.openIOFile(inFile,outFile);
	//reformat file
	fileReformat.reformatText(inFile,outFile);
	inFile.close();
	outFile.close();
	return 0;
}

