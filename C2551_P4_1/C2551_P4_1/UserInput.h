//Kim Lien Chu
//COP2551.0M1
#ifndef USERINPUT_H
#define USERINPUT_H
/*************************************
*Class UserInput
read in number,
**************************************/
class UserInput
{
private:
	// variables 
	int inputNum;

public:
	
	UserInput();  // constructor

	int userNumIn();
	~UserInput(){};
};
#endif