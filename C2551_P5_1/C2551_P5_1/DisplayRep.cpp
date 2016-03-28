//Kim Lien Chu
//COP2551.0M1
#include <iostream>
#include <iomanip>
#include <string>

#include "DisplayRep.h"

using namespace std;


/*******************************
display header
******************************/

void DisplayRep::displayHeader()
{	//display
	cout << "\n*****************************************************************" << endl;
	cout << "\n     This program will encrypt the word you enter               " << endl;
	cout << "\n     By changing the letter to the next letter in alphabet      " << endl;
	cout << "\n     For example:  letter a will become b in encrypted string   " << endl;
	cout << "\n*****************************************************************" << endl;
	

}
void DisplayRep::displayEncrypt(string encryptString)
{
	cout << "\n\n  The encrypted word:  " << encryptString << endl;
	cout << endl;
	cout << endl;


}
