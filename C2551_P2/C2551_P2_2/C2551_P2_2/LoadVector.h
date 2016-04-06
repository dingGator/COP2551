//Kim Lien Chu
//COP2551.0M1
#ifndef LOADVECTOR_H
#define LOADVECTOR_H
#include <vector>
#include <string>
using namespace std;
/*************************************
*LinearSearch:
--that uses the linear search program to locate the value.
--& keep a count of	the number of comparisons it makes until it finds the value.
***************************************/
class LoadVector
{
private:
	// variables 
	

	
public:
	string errorInMsg;

	LoadVector();  // constructor
	string loadInVector(vector<int> &, int &, string);
	~LoadVector(){};
};
#endif