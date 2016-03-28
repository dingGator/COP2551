// Kim Lien Chu
//C2551.0M1
#include <iostream>
#include <string>
#include "UserInput.h"
#include "DisplayRep.h"
#include "EncryptableString.h"
using namespace std;
/**********************************
Project 5
A program
  that asks the user to enter strings 
  print the string 
  encrypt the string and print the encrypted string.
*   
********************************/
int main()
{
	string originalText;
	string encryptString;
	DisplayRep displayReport;
	UserInput userIn;
	//Get text from user
	displayReport.displayHeader();
	originalText = userIn.userEnterIn();
	EncryptableString<string> myEncryptString(originalText);

	
	//Send text to be encoded and display the result
	encryptString = myEncryptString.encrypt(originalText);
	displayReport.displayEncrypt(encryptString);

	cout << endl;
	cout << endl;

	
	return 0;
}