//Kim Lien Chu
//COP2535.0M1
#ifndef TESTFRAME2_1_H
#define TESTFRAME2_1_H


#include <iostream>
#include <string>
#include <vector>
#include <fstream>


using namespace std;

/*******************************************
* *********************************************************/
class GetInFile
{
private:
	int inInt;
	double inDoub;
	string inStr;


public:
	GetInFile(){};

	void getInputFile(vector<double> &, vector<int> &, vector<string> &);
	~GetInFile(){};


};

#endif
