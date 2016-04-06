//Kim Lien Chu
//COP2551.0M1
#include <iostream>
#include <vector>
#include "DisplayReport.h"
using namespace std;


void DisplayReport::displayRepHeader()
{
	cout << "\n                                *****************" << endl;
	cout << "\n         The Contents of the Number Entered and Stored in the Vector " << endl;
	cout << "                             and The Size of the Vector" << endl;
	cout << "                                *****************" << endl;
	cout << endl;

}
/**************************************************
*Display number of Exchanges for:
--Bubble Sort
--Selection Sort
***********************************************************/




void DisplayReport::valInVector(vector<int> inVector)
{
	cout << " \n  The numbers you entered and stored in the Vector are: " <<endl;
	for (int index = 0; index < inVector.size(); index++)
	{
		cout << "\n                      " << inVector[index] << endl;
	}
	cout << "\n The vector size is:  " << inVector.size() << endl;
	
}

