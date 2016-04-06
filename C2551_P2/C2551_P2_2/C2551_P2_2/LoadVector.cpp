//Kim Lien Chu
//COP2551.0M1
#include <iostream>
#include <string>
#include <vector>
#include "LoadVector.h"

using namespace std;

LoadVector::LoadVector()
{
	errorInMsg = "good_Num";
}
/***************************
LoadVector::loadInVector
* store the value in the vector
*--if it is not a duplicate of a previous number entered.
*The vector should be dynamically allocated,
*--meaning:  add elements to the vector as needed
****************************************/

string LoadVector::loadInVector(vector<int> &inNum, int &inputOneNum, string msgError)
{	
	errorInMsg = msgError;
	if (errorInMsg == "good_Num")
	{
		//check for duplicate
		for (int index = 0; index < inNum.size(); index++)
		{
			if (inputOneNum == inNum[index])
			{
				cout << "\n\n      You entered a duplicate number:  " << inputOneNum << endl;
				cout << "      Please enter a different number." << endl;
				errorInMsg = "duplicate_Num";
			}
		}
		
		if (errorInMsg == "good_Num")
		{
			inNum.push_back(inputOneNum);
		}
		return errorInMsg;
	}
}
