//Kim Lien Chu
//COP2551.0M1
/*******************************************
*The program asks the user to enter three test scores
*The three test scores are validated
*The three test scores are stored in the TestScores object.
*The TestScores class
Creates member functions to: find the
minimum, maximum, and average(one for each).
*The program redisplays the three test scores,
*			displays the minimum value, the maximum value,
*			displays the average test score
*                      with one decimal place
******************************************/


#include <iostream>
#include <iomanip>
#include "TestScores.h"
using namespace std;
// prototypes
void displayReportHeader();
float valTScore();
void displayScore(TestScores &);

/*******************************
main
*Ask the user to enter three test scores
*Validated and then Stored in the TestScores object.
*Create member functions to find the
minimum, maximum, and average(one for each).
*Redisplay the three test scores,
and the minimum value, the maximum value,
and the average test score with one decimal place

*********************************/

int main()
{

	//variables
	float valScore = 0.0;
	int maxOfTest = 4;

	TestScores testAvg;

	//input number from the user

	displayReportHeader();
	for (int numOfTest = 1; numOfTest < maxOfTest; numOfTest++)
	{
		
		// Ask the user to enter three test scores
		
		valScore = valTScore();
		
		// store input in the TestScores object.
		//move the value to the class
		if (numOfTest == 1)
		{
		
			testAvg.setScore1(valScore);
		}
		else if (numOfTest == 2)
		{
		
			testAvg.setScore2(valScore);
		}
		else if (numOfTest == 3)
		{
		
			testAvg.setScore3(valScore);
		}
		

	}
	// set Scores to min and max score 
	testAvg.setMaxScore();
	testAvg.setMinScore();
	testAvg.calcAvgScore();

	//display min, max, avg Score
	displayScore(testAvg);




	return 0;
}
/***************************
*	displayReportHeader
*display report header
**********************************/

void displayReportHeader()
{
	cout << "\n\n          Please Enter Three Test Scores " << endl;
	cout << "                You would like To Average" << endl;
	cout << "                          *****" << endl;
	cout << endl;

}

/***************************
*	 valTScore
*validate that the score is entered and >0
**********************************/
float valTScore()
{
	float tScore;
	float validScore = 0.0;

	cout << "         Please Enter a test score:  ";
	cin >> tScore;

	while ((!cin) || (tScore < 0)|| (tScore>100))
	{
		
		if (!cin)
		{
			cin.sync();
			cin.clear();
			cout << "\n           Invalid test score. "
				 << "\n           Please enter a number test score. " << endl;
			cout << "\n           Please try again:  ";
			cin >> tScore;
		}
		else if (tScore < 0)
		{
			cin.sync();
			cin.clear();
			cout << "\n         Invalid test score." 
				 << "\n         Please enter a test score > 0. "<< endl;
			cout << "\n         Please try again:  ";
			cin >> tScore;
		}
		else if (tScore > 100)
		{
			cin.sync();
			cin.clear();
			cout << "\n         Invalid test score."
				<< "\n         Please enter a test score < 100. " << endl;
			cout << "\n         Please try again:  ";
			cin >> tScore;
		}
	}

	validScore = tScore;
	return validScore;
}
/***************************
*	displayScore
*display the report
* with three test scores
*with min score
*with max score
*wiht average score
**********************************/

void displayScore(TestScores &testScore)
{
	cout << " \n  The three test scores are: " << endl;
	cout << left << fixed << setprecision(1) << "   " << testScore.getScore1() << " , "; //tSc1;
	cout << right << fixed << setprecision(1) << " " << testScore.getScore2() << " , "; //tSc2;
	cout << right << fixed << setprecision(1) << " " << testScore.getScore3() << "  " << endl;
	cout << "\n  The the maximum score: " << testScore.getMaxScore() << endl;
	cout << "\n  The the minimum score: " << testScore.getMinScore() << endl;

	cout << left << fixed << setprecision(1) << "\n  The average of the three test scores are: "
		<< testScore.getAvgScore() << endl;
	cout << "\n\n" << endl;
}