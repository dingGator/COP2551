//Kim Lien Chu
//COP2551.0M1
#include <iostream>
#include <string>
#include "ValidateNum.h"

using namespace std;

ValidateNum::ValidateNum()
{
	valInNum = -98;
	sentinel_99 = -99;
}
/***************************
ValidateNum::errorMsg
validate each number :--- send console error msgs out
and error msg back to the program
*---if blank or not a number            --- not a number
---if -99 stop asking for more numbers   -- end input
*---if  greater than    0                -- good number
*--- if 0 or less than  0               --- error range number
**********************************/

string ValidateNum::valInput(int & inNum)
{


	if (inNum == sentinel_99)  //sentinel
	{
		cout << "\n\n  You wanted to stop entering numbers.  Good bye    " << endl;

		exit(0);
	}
	else if (inNum <= 0)
	{
		cout << "\n\n You entered:  " << inNum << "." << endl;
		cout << "\n This number is not greater than 0." << endl;
		errorMsgOut = "err_range_Number";
	}
	else if (inNum >0)
	{
		errorMsgOut = "good_Num";
	}


	return errorMsgOut;


}
