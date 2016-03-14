//Kim Lien Chu
//COP2535.0M1
#include <iostream>
#include <vector>
#include "ValidateNum.h"
#include "ForTesting.h"
using namespace std;
/****************
***** Show first 10 elements  of array
**************/
void ForTesting::testValLogic()
{
	ValidateNum testValNum;
	int minInput = 10;
	int maxInput = 100;
	int invalidInput1 = 120;
	int invalidInput2 = -59;
	int validInput = 76;
	int endInput = -99;
	cout << "\n\n***********************Testing validation logic**************************";
	cout << "\n               Testing:    Validation Logic" << endl;
	cout << "                Entered following test data:          " << endl;
	cout << "\n\n********************************";

		cout << left<<"\n\n test:       int minInput = 10 " << "                   ";
		cout << "Results:  "<< testValNum.errorMsg(minInput);
		cout << "\n\n********************************";
		cout << left  << "\n\n test:       int maxInput = 100;" << "                 ";
		cout << "Results:  " << testValNum.errorMsg(maxInput);
		cout << "\n\n*********************************";
		cout << left << "\n\n test:       int invalidInput1 = 120;" << "            ";
		cout << "Results:  " << testValNum.errorMsg(invalidInput1);
		cout << "\n\n*********************************";
		cout << left << "\n\n test:       int invalidInput2 = -59;" << "            ";
		cout << "Results:  " << right << testValNum.errorMsg(invalidInput2);
		cout << "\n\n*********************************";
		cout << left << "\n\n test:       int validInput = 76;" << "                ";
		cout << "Results:  " << right<<testValNum.errorMsg(validInput);
		cout << "\n\n*********************************";
		cout << left << "\n\n test:       int endInput = -99;" << "                 ";
		cout << "Results:  " << right << testValNum.errorMsg(endInput);
		cout << "\n\n*********************************";
		cout << endl;
			
	cout << " *****************end Testing: Validation Logic********************" << endl;

	
}

void ForTesting::showVector(vector<int> vect)
{
	cout << "\n\n***********************Testing show vector**************************";
	cout << "\n  Testing:    Show Vector " << endl;
	cout << "\n     content       index of elements " << endl;

	for (int count = 0; count < vect.size(); count++)
	{
		cout << "       " << vect[count] << "          " << count << endl;
	};
	cout << "\n\n***********************end Testing show vector**************************";
	cout << endl;
}



