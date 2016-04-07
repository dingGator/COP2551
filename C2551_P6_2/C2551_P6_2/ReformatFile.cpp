//Kim Lien Chu                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
//COP2551.0M1
#include <iostream>
#include <string>
#include <cctype>
#include "ReformatFile.h"

using namespace std;
template class ReformatFile<string>;
/***********************
reformatText(fstream &inFile, fstream &outFile)

Reformat:
a.  Change all the letters
	except the first letter of sentences to lowercase.
******************************/

template<class T>
void ReformatFile<T>::reformatText(fstream &inFile, fstream &outFile)
{
	ch = inFile.peek();
	if (isalpha(ch))// first letter capitalized
	{
		ch = inFile.get();
		newChar = toupper(ch);
		outFile << newChar;
		ch = inFile.peek();
	}
	while (ch != EOF)
	{
		if (ch == '.')
		{
			ch = inFile.get();
			outFile << ch;

			ch = inFile.peek();

			if (isspace(ch))
			{
				ch = inFile.get();
				outFile << ch;

				ch = inFile.peek();
				if (isalpha(ch))
				{
					ch = inFile.get();
					newChar = toupper(ch);
					outFile << newChar;
				}
			}
		}
		ch = inFile.get();
		outFile << ch;

		ch = inFile.peek();
	}
}
