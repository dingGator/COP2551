//Kim Lien Chu
//COP2552.0M1
/*******************************************
This program
*	use a vector:
*	-- Read in numbers from the user
*	--validate each number:
*			between 10 and 100, inclusive
*			As each number is read in, 
*			store the value in the vector 
*				if it is not a duplicate of a previous number entered.
*
*	The vector ise dynamically allocated,
*	--mean: add elements to the vector as needed
*User stops entering numbers with sentinel: -99
*
*Once the user has stopped entering numbers, 
*the program -- display the values stored in the vector
*			-- display the size of the vector.
*********************************/

#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

//#include "ForTesting.h"    //*** for testing

#include "UserInput.h"
#include "ValidateNum.h"
#include "LoadVector.h"
#include "DisplayReport.h"
using namespace std;

int main()
{
	vector<int> numbers;
	
	//ForTesting testing1;   //****for testing
	
	UserInput userNumInput;
	ValidateNum valNum;
	
	LoadVector loadVector;
	
	DisplayReport displayReport;
	
	int inNum = -98;
	string statusMsg = "Begin_Input ";
	//testing1.testValLogic();    //*** for testing

	while (statusMsg != "end_Input")
	{	
		//--Read in numbers from the user
		inNum = userNumInput.userNumIn();

		/*************************
		--validate each number :
		*between 10 and 100, inclusive
		************************/
		statusMsg = valNum.errorMsg(inNum);
	
		/********************************
		store the value in the vector
		*--if it is NOT a duplicate of a previous number entered.
		*The vector should be dynamically allocated,
		*--mean: add elements to the vector as needed
		*********************************/
		loadVector.loadInVector(numbers, inNum, statusMsg);
	}
	//testing1.showVector(numbers);  //*** for testing
	/******************************************
	*the program -- display the values stored in the vector
	*			--display the size of the vector.
	*****************************************/

	displayReport.displayRepHeader();
	displayReport.valInVector(numbers);
	return 0;
}
	