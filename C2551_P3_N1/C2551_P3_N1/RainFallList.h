//Kim Lien Chu
//COP2551.0M1
#ifndef RAINFALLLIST_H
#define RAINFALLLIST_H


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/*******************************************
class RainFallList
the array: string monthName
	store month name
methods: 
	RainFallList -- default constructor
	RainFallList (string mN)
		overload constructor to load month name
	~RainFallList -- destructor				
	getMonthName	-- to load month name       
	getInputFile	-- to load rain amount from file
							to rainAmt
	selectSort		-- to the rain amount in descending order
	rainSortDisplay -- to display report of sorted rain amount

*********************************************************/
class RainFallList
{ 
private:
	const int NUM_MONTHS = 12;
	double in;
	int minIndex;
	double maxValue;
	string *monthName;
	double *rainAmt;


public:

//default constructor
	RainFallList();			

//Destructor
	~RainFallList(){};
	
// to load rain amount from file
	void getInputFile();	

// sort rain amount with month name
	void selectSort();

// display report of sorted rain fall
	void rainSortDisplay();

};
#endif
