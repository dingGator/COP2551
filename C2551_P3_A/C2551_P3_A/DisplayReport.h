//Kim Lien Chu
//COP2551.0M1
#ifndef DISPLAYREPORT_H
#define DISPLAYREPORT_H


#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
#include <fstream>

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
class DisplayReport
{

public:
	DisplayReport(){};
	void displayHeader();
	void displayCount();
	~DisplayReport(){};


};
#endif
