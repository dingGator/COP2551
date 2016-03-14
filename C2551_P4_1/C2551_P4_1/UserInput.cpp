//Kim Lien Chu
//COP2551.0M1
#include <iostream>
#include "UserInput.h"

using namespace std;

UserInput::UserInput()
{
	inputNum = -98;
}
/***************************
UserInput::userNumIn
read in number,
**********************************/

int UserInput::userNumIn()
{
	cout << "\n      Please enter a number greater than 0 " << endl;
	cout << "                 Or enter -99 to end :  ";
	cin >> inputNum;
	while (!cin)
	{
		cout << "\n\n  You did not enter a number.  " << endl;
		cout << "\n    Please enter a number greater than 0  " << endl;
		cout << "                 Or enter -99 to end :  ";
		cin.clear();
		cin.ignore();
		cin >> inputNum;

	}
	return inputNum;
}
