//Kim Lien Chu
//COP2551.0M1
#ifndef DISPLAYREPORT_H
#define DISPLAYREPORT_H
#include <vector>
using namespace std;
/*************************************
/class DisplayReport*
* -- display the values stored in the vector
*  --display the size of the vector.
**********************************/

class DisplayReport
{

public:

	DisplayReport(){};  // constructor
	//prototypes

	void displayRepHeader();
	void valInVector(vector<int> );


	//destructor
	~DisplayReport(){};


};
#endif

