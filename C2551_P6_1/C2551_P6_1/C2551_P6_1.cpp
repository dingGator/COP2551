//Kim Lien Chu
//2551.0M01
/*
Project 6
Program
1.  read in an input file 
2.  produces an output file.

3.  Asks the user for two file names.
	a.  The first file will be opened for input, 
	b.  The second file will be opened for output.  
4.  Assume:
5.  The first file contains 
	a.  sentences that end with a period.
5.  Read first file
6.  Change all the letters 
	except the first letter of sentences to lowercase.  
7.  First letter of sentences should be made uppercase.
8.  The revised contents should be stored in the second file.
*/
#include <iostream>
//#include <stdlib.h>
//#include "GetInFile.h"
//#include "DisplayRep.h"
//#include <sstream>
//#include <stack>
#include <fstream>
#include <string>
//#include <cctype>
//#include<stdio.h>

using namespace std;
int main()
{
	char ch;
	int number;
	char newChar;
	fstream inFile, outFile;
	string inFileName;
	inFileName = "mockingbird.txt";
	inFile.open(inFileName.c_str(), ios::in);
	if (!inFile)
	{
		cout << "\n Error opening inFile.\n";
	}
	string outFileName;
	outFileName = "output.txt";
	outFile.open(outFileName, ios::out);
	if (!outFile)
	{
		cout << "\n Error opening outFile.\n";

	}
	ch = inFile.peek();
	if (isalpha(ch))// first letter capitalized
	{
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
				else // not letter after space and period
				{
					ch = inFile.get();
					outFile << ch;
				}
			} // no space after period
			else
			{
				ch = inFile.get();
				outFile << ch;
			}
		}
		else // not a period
		{
			ch = inFile.get();
			outFile << ch;
		}

	

		ch = inFile.peek();
	}
	inFile.close();
	outFile.close();
	return 0;
}

/*
//void openFile(fstream &file);
string lowerCase(string);
/*
class GetInFile : public fstream
{
public:
	GetInFile(){};
	void writeOutput(string);
};
void GetInFile::writeOutput(string inputFile)
{}

int main()
{
	char ch;
	string inFileName;
	string outFileName;
	fstream inFile, outFile;
	cout << "\n\n     Enter the name of the input file:  " << endl;
	cin.sync();
	cin.clear();
	cin >> inFileName;

	inFileName = "mockingbird.txt";
	inFile.open(inFileName.c_str(), ios::in);

	if (!inFile)
	{
		cout << "\n Error opening inFile.\n";
	}
	cout << "\n\n     Enter the name of the output file:  " << endl;
	cin.sync();
	cin.clear();
	cin >> outFileName;
	outFileName = "output.txt";
	outFile.open(outFileName, ios::out);
	if (!outFile)
	{
		cout << "\n Error opening outFile.\n";
	
	}
	lowerCase(inFile);
	inFile.close();
	outFile.close();
	return 0;
}
/*
 
	GetInFile outputFile;
	fstream inFile;
	openFile(inFile);
	openFile(outFile);
	string line;
	string newline;
	getline(inFile, line);
	cout << "\n  line  " << line << endl;
	while (inFile)
	{ 
		newline = lowerCase(line);
		outputFile.writeOutput(inFile);
	//	cout << " \n  newline  " << newline << endl;
		getline(inFile, line);
	}
	cout << endl;
	
	return 0;
}*/

	/*
void openFile(fstream &file)
{
	string inFileName;
	//string outFileName;
	cout << "\n\n     Enter the name of the input file:  " << endl;
	cin.sync();
	cin.clear();
	cin >> inFileName;

	inFileName = "mockingbird.txt";

	file.open(inFileName.data(), ios::in);

	if (!file)
	{
		cout << "\n Error opening data file.\n";
	}

}
*/
	/*
string lowerCase(string in)
{
	int ascii;
	char newChar = ' ';
	string testWord = in;// (this->c_str());
	string lCaseString;
	for (unsigned pos = 0; pos < testWord.length(); pos++)
	{
		ascii = testWord[pos];
		if (ascii = 46)
		{
			newChar = ascii;
			pos++;
			ascii = testWord[pos];
			if (ascii > 96 && ascii < 123)
			{
				newChar = ascii - 32;
			}
		}
		else
		{
			newChar = ascii;
		}
		//cout << "\n  lCaseString2:  " << lCaseString << endl;
		lCaseString += newChar;
	}
	//cout << "\n  lCaseString2:  " << lCaseString << endl;

	return lCaseString;
}
*/