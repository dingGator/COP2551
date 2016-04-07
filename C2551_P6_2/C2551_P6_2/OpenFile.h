//Kim Lien Chu
//COP2551.0M1
#ifndef OPENFILE_H
#define OPENFILE_H

#include <iostream>
using namespace std;
/*************************************
class OpenFile
1.  Asks the user for two file names.
	a.  The first file will be opened for input,
	b.  The second file will be opened for output.
2.  Assume:  The first file contains
	a.  sentences that end with a period.
3.  Read first file
4.  produce the output file
5.  write the reformat text to output file

**************************************/

class OpenFile
{
private:
	string outFileName;
	string inFileName;

	
public:

	OpenFile(){};  // constructor

	void openIOFile(fstream&inFile,fstream&outFile);
	~OpenFile(){};
};
#endif