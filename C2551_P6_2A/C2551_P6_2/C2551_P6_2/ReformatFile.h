// Kim Lien Chu
//C2551.0M1
#ifndef REFORMATFILE_H
#define REFORMATFILE_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/**********************************************
reformatText(fstream &inFile, fstream &outFile)

Reformat:
a.  Change all the letters
except the first letter of sentences to lowercase.
*************************************************/
template<class T>
class ReformatFile : public string
{
private:

	char ch;
	int number;
	char newChar;

	
public:
	ReformatFile(){};
	
	void reformatText(fstream &, fstream&);
	~ReformatFile(){};
};

#endif