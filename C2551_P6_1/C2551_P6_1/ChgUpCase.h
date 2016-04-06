// Kim Lien Chu
//C2551.0M1//Kim Lien Chu
//COP2535.0M1
#ifndef CHGUPCASE_H
#define CHGUPCASE_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/**********************************************
•	Project 5

class EncryptableString
that is derived from the STL string class.
adds a member function:
void encrypt()
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
*************************************************/
template<class T>
class ChgUpCase : public string
{
private:


	//T encryptString;
	//T originalText;
public:
	ChgUpCase();
	ChgUpCase(T);
	T upCase(T);
	~chgUpCase(){};
};

#endif