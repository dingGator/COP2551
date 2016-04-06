//Kim Lien Chu
//COP2551.0M1
#ifndef USERINPUT_H
#define USERINPUT_H

#include <iostream>
#include <cstdlib>
using namespace std;
/*************************************
*Class UserInput
read in number,
**************************************/

class UserInput
{
private:
	// variables 
	int choiceNum;
	string begin_Input;
	int arrEleDisplay;


public:
	
	UserInput();  // constructor
	
	int userEnterInput(string);
	void processChoice();
	~UserInput(){};
};
#endif