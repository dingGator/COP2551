//Kim Lien Chu
//COP2551.0M1
#include <iostream>
#include <string>

#include "DisplayRep.h"

using namespace std;
/*******************************
display header
******************************/

void DisplayRep::displayHeader()
{	//display

	cout << "\n\n     ***************************************************" << endl;
	cout << "\n          Report Of Numbers of Movies Student watch          " << endl;
	cout << "\n     ****************************************************" << endl;

}
/*************************************
display average number of movies watched
************************************/
void DisplayRep::displaySurAvg(double avgNum)
{
	//display
	cout << fixed << showpoint;//<< setprecision(1);
	cout << "\n        Student watched an average of :  ";
	cout << avgNum << "  movies.  " << endl;
}
/****************************************
display mode of the survey
**************************************/
void DisplayRep::displaySurMod(int modeNum)
{
	cout << "\n        The mode is:   ";
	cout << modeNum << "  movies.  " << endl;
	cout << "\n                      *****                  " << endl;
	cout << endl << endl;
}



