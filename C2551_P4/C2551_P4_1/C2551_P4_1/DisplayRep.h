//Kim Lien Chu
//COP2551.0M1
#ifndef DISPLAYREP_H
#define DISPLAYREP_H
#include <vector>
#include <string>
using namespace std;
/*************************************
class DisplayRep
	display average
	display mode
***************************************/

class DisplayRep
{
private:
	// variables 


public:


	DisplayRep(){};  // constructor
	void displayHeader();
	/*************************************
	display average number of movies watched
	************************************/
	void displaySurAvg(double);

	/****************************************
	display mode of the survey
	**************************************/
	void displaySurMod(int);

	~DisplayRep(){};
};
#endif