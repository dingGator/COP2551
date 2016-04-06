//Kim Lien Chu
//COP2551.0M1
#ifndef RAINFALL_H
#define RAINFALL_H


#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
#include <fstream>

using namespace std;

class RainFall
{
private:
	

public:
	RainFall(int,string monthName[]);
	
};

RainFall::RainFall(int num_months, string monthName[])
{
	num_months = 12;
	monthName[num_months] = { "January", "February", "March", "April",
									"May",			"June",		"July",		"August",
									"September",	"October",	"November",	"December" };
	cout << "\n  name   " << monthName[1] << endl;

}

#endif