//Kim Lien Chu
//COP2551.0M1
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include "OpenFile.h"

using namespace std;

/**************************
	openIOFile(fstream &inFile, fstream &outFile)

1.  Asks the user for two file names.
	a.  The first file will be opened for input,
	b.  The second file will be opened for output.
2.  Assume:  The first file contains
	a.  sentences that end with a period.
3.  Read first file

4.  create the output file
5.  write the reformatted text to output file

**********************************/

void OpenFile::openIOFile(fstream &inFile, fstream &outFile)
{
	//ask user for name of input file
	//read in input file
	cout << "\n\n     Enter the name of the input file (format:  name.txt):  " ;
	cin.sync();
	cin.clear();
	cin >> inFileName;
	inFile.open(inFileName.c_str(), ios::in);
	if (!inFile)
	{
		cout << "\n Error opening inFile.\n";
		exit(1);
	}
	//ask user for name of output file
	// create output file
	cout << "\n\n     Enter the name of the output file (format:  name.txt):  " ;
	cin.sync();
	cin.clear();
	cin >> outFileName;
	outFile.open(outFileName, ios::out);
	if (!outFile)
	{
		cout << "\n Error opening outFile.\n";
		exit(2);

	}

	
}