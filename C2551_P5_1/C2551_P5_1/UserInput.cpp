//Kim Lien Chu
//COP2535.0M1
#include <iostream>
#include<string>
#include "UserInput.h"

using namespace std;


/***************************
UserInput::userNumIn
read in number,
**********************************/
string UserInput::userEnterIn()
{
		cout << "\n\n     Enter the word to encrypt with no space between letters:   " << endl;
		cout << "\n\n Enter a word here:    ";
		cin.sync();
		cin.clear();
		cin >> originalString;
		return originalString;

}