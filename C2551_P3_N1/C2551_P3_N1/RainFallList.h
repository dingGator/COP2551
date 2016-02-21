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
{ public:
	string monthName;

/*int numRainAmt;

	double *mnthRainAmt;
	double **arrPtr;
*/

	
	RainFallList(){};

	RainFallList(string mN){ monthName= mN; };
	//	~RainFallList();
	string getMonthName(){ return monthName; }

	void getInputFile(int, double[]);
	void selectSort(double[],int);
	//void setPtr(int, int, double[], double **, double[]);
	//void rainfallReport();
	//void rainfallSorted();

};
#endif
