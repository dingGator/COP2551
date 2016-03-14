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
*---if between 10 and 100, inclusive     -- good number
*--- of not between 10 and 100           --- error range number
**********************************/

string ValidateNum::errorMsg(int& inNum)
{
	
	
	if (inNum == sentinel_99)  //sentinel
	{
		cout << "\n\n  You wanted to stop entering numbers.  " << endl;
		errorMsgOut = "end_Input";
	}
	else if ((inNum < 10) || (inNum > 100))
	{
		cout << "\n\n You entered:  " << inNum << "." << endl;
		cout << "\n This number is not between 10 and 100, inclusively." << endl;
		errorMsgOut = "err_range_Number";
	}
	else if ((inNum >= 10) || (inNum <= 100))
	{	
		errorMsgOut = "good_Num";
	}
	
	
	return errorMsgOut;
	
	
}
