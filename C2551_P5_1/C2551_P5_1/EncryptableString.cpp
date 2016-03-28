//Kim Lien Chu                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
//COP2535.0M1
#include <iostream>
#include <string>
#include <cctype>
#include "EncryptableString.h"

using namespace std;
template class EncryptableString<string>;
/*******************************************
class EncryptableString
	that is derived from the STL string class.
	adds a member function :
********************************************/
template<class T>
EncryptableString<T>::EncryptableString(T word) :string(word)
{
	originalText = word;
	cout << "\n\n   The original word:  " << originalText << endl;

};
/***************************************************
string encrypt(string)

that encrypts the string contained
in the object by replacing each letter
with its successor in the ASCII ordering.

For example,
the string baa would be encrypted to cbb.

Assume that all characters
are part of the EncryptableString object
are letters a - z and A - Z,
and that the successor of z is a
and the successor of Z is A.
******************************/

template<class T>
T EncryptableString<T>::encrypt(T s)
{
	int ascii;
	char newChar;
	string testWord(this->c_str());
	for (unsigned pos = 0; pos < testWord.length(); pos++)
	{
		ascii = testWord[pos];
		if (ascii == 90)
		{
			newChar = 65;
		}
		else if (ascii == 122)
		{
			newChar = 97;
		}
		else
		{
			newChar = ascii + 1;
		}
		encryptString += newChar;
	}
	return encryptString;
}
