//Kim Lien Chu                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
//COP2535.0M1
#include <iostream>
#include <string>
#include <cctype>
#include "ChgUpCase.h"

using namespace std;
template class ChgUpCase<string>;
/*******************************************
class EncryptableString
that is derived from the STL string class.
adds a member function :
********************************************/
template<class T>
ChgUpCase<T>::ChgUpCase(T word) :string(word)
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
T chgUpCase<T>::upCase(T s)
{
	int ascii;
	char newChar;
	string testWord(this->c_str());
	//for (unsigned pos = 0; pos < testWord.length(); pos++)
	//{/*
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
		void lowerCase(string inFile)
		{
			//string inputString =s;
		*/
		ch = inFile.peek();


			cout << "\n\n ch  " << ch << endl;
			while (ch != EOF)
			{
				cout << "\n\n ch2  " << ch << endl;

				if (isalpha(ch))
				{
					/*
					if (ispunct(ch))
					{
					ch = inFile.get();
					outFile << ch;
					cout << "\n\n   ch  " << ch << endl;
					ch = inFile.peek();
					if (isspace(ch))
					{
					ch = inFile.get();
					outFile << ch;

					ch = inFile.peek();
					if (islower(ch))
					{
					toupper(ch);
					}
					}

					}*/
				}

				ch = inFile.get();
				outFile << ch;

				ch = inFile.peek();

			}


		}


//	}
//	return encryptString;
}
