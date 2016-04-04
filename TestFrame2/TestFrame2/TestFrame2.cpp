#include <iostream>
//#include "searchvect.h"
#include "TestFrame2_1.h"
using namespace std;
/*
template <class T>
T min(vector<T> arr)
{
	T smallest = arr[0];
	for (int count = 1; count < arr.size(); count++)
	{
		cout << "  data small  " << arr[count] << endl;

		if (arr[count] < smallest)
		{
			smallest = arr[count];
			cout << "  data  small  " << smallest << endl;
		}
	}
	return smallest;
}

template <class T>
T max(vector<T> arr)
{
	T largest = arr[0];
	for (int count = 1; count < arr.size(); count++)
	{
		cout << "  data  large  " << arr[count] << endl;

		if (arr[count] > largest)
		{
			largest = arr[count];
			cout << "  data  large2  " << largest << endl;
		}
	}

	return largest;
}
*/
int main()
{
	int *ptr = new int;
	
	cout << "end program   " << endl;
	/*
	//const int SIZE = 10;
	//SearchableVector<string>strTable(SIZE);
	//SearchableVector<int>intTable(SIZE);
	//SearchableVector<double>doubleTable(SIZE);
	double smallestDoub;
	double largestDoub;
	string smallestStr;
	string largestStr;
	int result;
	vector<string>strTable;
	vector<int>intTable;
	vector<double>doubleTable;


	//read in file
	//load vector

	GetInFile inputFile;
	inputFile.getInputFile(doubleTable, intTable, strTable);
	//cout << "doubleTable[0]   " <<doubleTable[doubleTable.size()-1]<<endl;
	//search for min

	//result = intTable.findItem(10);
	//smallestDoub = doubleTable.minimum(10);
	//largestDoub = doubleTable.maximum(10);

	smallestDoub = min(doubleTable);
	largestDoub = max(doubleTable);

	smallestStr = min(strTable);
	largestStr = max(strTable);

	//search for max
	//display min/max report
	cout << "\n        ************************************" << endl;
	cout << "\n           Maximum and Minimum Report       " << endl;
	cout << "\n        ************************************" << endl << endl;

	cout << "\n        maximum number in file:   " << largestDoub << endl;
	cout << "\n        mininum number in file:   " << smallestDoub << endl;
	cout << "\n        maximum string in file:   " << largestStr << endl;
	cout << "\n        mininum string in file:   " << smallestStr << endl;

	cout << "\n\n      *******************" << endl << endl;
*/
	return 0;
}
