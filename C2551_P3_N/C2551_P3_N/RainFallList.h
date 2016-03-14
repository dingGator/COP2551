//Kim Lien Chu
//COP2551.0M1
#ifndef RAINFALLLIST_H
#define RAINFALLLIST_H


#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
#include <fstream>

using namespace std;

/*******************************************

***************************************************

***************************************************"

* *********************************************************/
class RainFallList
{
	string monthName;
	int numRainAmt;

	double *mnthRainAmt;
	double **arrPtr;
	void selectSort();

public:
	
	RainFallList(){};
	RainFallList(int num, string[],double rainAmt[]);
	~RainFallList();
	void getInputFile(int, double[]);
	void rainfallReport();
	void rainfallSorted();
	
};
#endif
