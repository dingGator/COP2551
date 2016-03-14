//Kim Lien Chu
//COP2551.0M1
/*
The program will ask the user to enter three test scores 
which are validated and then stored in the TestScores object.
Create member functions to find the minimum, maximum, and average(one for each).
The program should redisplay the three test scores, 
the minimum value, the maximum value, 
and the average test score with one decimal place in an attractive output display.
*/


#include <iostream>
#include <iomanip>
using namespace std;
/************************************* 
	         class TestScores 
	has member variables to hold three integer test scores.
	have a constructor, accessor, and mutator functions 
		for the test score fields,
	has member functions 
	that return the minimum, maximum, and average of the test scores. 
***************************************/
class TestScores
{
	private:
		int tscore1;
		int tscore2;
		int tscore3;
		int largestScore;
		int smallestScore;
		int sumScore;
		int countScore;
		double averageScore;
		
	public:
	
		TestScores();
		void setScore(int);
		int getLargest();
		bool isNewLargestScore(int);
		bool isNewSmallestScore(int);
		int getCount();
		bool addScore(int);
		double getAvgScore();
		~TestScores(){};

	
};
/***************************
		TestScores::TestScores
	Constructor
Initialize the three test scores
**********************************/
TestScores::TestScores()
{
	largestScore = sumScore = countScore = 0;
}


void TestScores::setScore(int inScore)
{
	largestScore = inScore;
}

int TestScores::getLargest()
{
	return largestScore;
}

int TestScores::getCount()
{
	return countScore;
}


bool TestScores::addScore(int tScore)
{
	bool goodScore = true;
	
		if ((tScore >= 0) & (tScore <= 100))
		{
			sumScore += tScore;
			countScore++;
			if (isNewLargestScore(tScore))
				largestScore = tScore;
		}
		else
		{
			goodScore = false;

		}
		return goodScore;
	
}
bool TestScores::isNewLargestScore(int tScore)
{
	if (tScore > largestScore)
		return true;
	else
		return false;
}
bool TestScores::isNewSmallestScore(int tScore)
{
	if (tScore < largestScore)
		return true;
	else
		return false;
}

double TestScores::getAvgScore()
{
	if (countScore > 0)
	{
		averageScore = sumScore / countScore;
		return averageScore;
	}
	else
		return 0;
}
// prototypes
int getTScore();
void valTScore(int&);
void displayScore(double);

/*******************************
Ask the user to enter three test scores
Validated and then Stored in the TestScores object.
Create member functions to find the 
minimum, maximum, and average(one for each).
Redisplay the three test scores,
the minimum value, the maximum value,
and the average test score with one decimal place in an attractive output display.

*********************************/

int main()
{	
/*	TODO: The program should redisplay the three test scores,
	      the minimum value, the maximum value, 
		  and the average test score with one decimal place 
		  in an attractive output display.

*/	
	
	//TODO: Ask the user to enter three test scores
		//variables
		int inScore;
		double avgScore;
		
		//input number from the user
		cout << "\n\n          Please Enter Three Test Scores " << endl;
		cout << "                You would like To Average" << endl;
		cout << "                          *****" << endl;
		cout<< endl;
		TestScores testAvg;		//get the value from the user
		
		inScore = getTScore();
	//TODO: store input in the TestScores object.

		//move the value to the class
		testAvg.setScore(inScore);
		testAvg.addScore(inScore);

		inScore = getTScore();
		testAvg.setScore(inScore);
		testAvg.addScore(inScore);

		inScore = getTScore();
		testAvg.setScore(inScore);
		testAvg.addScore(inScore);
		// compare Score 
		
		
		//display Score
		//display min, max and ave
		displayScore(testAvg.getAvgScore());
		
			
	return 0;
}
//TODO: Ask the user to enter test score
int getTScore()
{
	int tScore;
	int countTScore = 0 ;
	cout << "         Please Enter a test score:  ";
	cin >> tScore;
	while (countTScore < 4 )
	{
		valTScore(tScore);
		countTScore++;
	}
	return tScore;

}
// validate input
void valTScore(int& tScore)
{
	while (!cin|| tScore < 0)
	{
		cin.sync();
		cin.clear();
		cout << "Invalid test score, try again: ";
		cin >> tScore;
	}
}
void displayScore(double avSc)
{	
	cout << "The three test scores are: " << endl;
	cout << left << setw(8) ; //tSc1;
	cout << right << setw(8); //tSc2;
	cout << right << setw(8) << endl;
	cout << left << "The average of the three test scores are: " << avSc << endl;
}