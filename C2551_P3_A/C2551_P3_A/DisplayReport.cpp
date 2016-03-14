//Kim Lien Chu
//COP2551.0M1

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
#include <fstream>
#include "DisplayReport.h"

using namespace std;
/*******************************************
DisplayReport
will make the report of this format

***************************************************

Survey of Cafeteria Food
***************************************************"

Food Item			   Like			Dislike
Cheese Pizza			3				0
Hamburger				1				2
Fish Sticks				2				1
Mystery Meat			0				3

* *********************************************************/

void DisplayReport::displayHeader()
{
	cout << "\n   ***************************************************" << endl;

	cout << "		      Rainfall Report For the Year               " << endl;
	cout << "\n   ***************************************************" << endl;
	cout << setw(21) << left << "   Month        ";
	cout << setw(18) << left << "   Rainfall              ";
	cout << endl << endl;

};
void DisplayReport::displayCount()

{
	cout << "   " << setw(20) << left;
	cout << "   " << setw(21) << left;
	cout << "   " << setw(15) << left;
	cout << endl;
	

	cout << endl << endl;
};

