//Kim Lien Chu
//COP2551.0M1
#ifndef USERINPUT_H
#define USERINPUT_H

#include <iostream>
using namespace std;
/*************************************
*Class UserInput
read in number,
**************************************/

class UserInput
{
private:
	// variables 
	
	string originalString;

public:
	
	UserInput(){};  // constructor

	string userEnterIn();
	~UserInput(){};
};
#endif