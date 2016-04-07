//Kim Lien Chu
//COP2551.0M1
#include <iostream>
#include <iomanip>
#include <string>

#include "DisplayHeader.h"

using namespace std;


/*******************************
disProgHeader()
display program purpose
 Program will:                                                    
     1.  Asks the user for two file names.                        
           a.The first file will be opened for input,             
           b.The second file will be opened for output.			 
     2.  read in an input file									 
     3.  produces an output file.								 
     4.**Reformat: Change all the letters						 
			except the first letter of sentences to lowercase.		
     5.  The reformatted contents should be stored in the second file." 

******************************/

void DisplayHeader::disProgHeader()
{	//display
	cout << "\n*****************************************************************" << endl;
	cout << "\n Program will:                                                    " << endl;
	cout << "     1.  Asks the user for two file names.                          " << endl;
	cout << "           a.The first file will be opened for input,               " << endl;
	cout << "           b.The second file will be opened for output.			 " << endl;
	cout << "     2.  read in an input file									     " << endl;
	cout << "     3.  produces an output file.								     " << endl;
	cout << "     4.**Reformat: Change all the letters						     " << endl;
	cout << "			except the first letter of sentences to lowercase.		 " << endl;
	cout << "     5.  The reformatted contents should be stored in the second file." << endl;
	cout << "\n*****************************************************************" << endl;


}