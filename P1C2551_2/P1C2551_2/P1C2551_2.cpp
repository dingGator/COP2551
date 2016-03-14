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
using namespace std;
/*************************************
		class TestScores
*has member variables to hold three integer test scores.
*have a constructor, accessor, and mutator functions
*for the test score fields,
*has member functions
*that return the minimum, maximum, and average of the test scores.
***************************************/
class TestScores
{
private:
	// variables to keep scores
	int tScore1;
	int tScore2;
	int tScore3;
	int maxScore;
	int minScore;
	//variables to calculate averageScore
	int sumScore;
	int countScore;
	double avgScore;

public:

	TestScores();  // constructor
	//prototypes
	//get and set the scores
	void setScore1(int);
	int getScore1();

	void setScore2(int); 
	int getScore2();

	void setScore3(int);
	int getScore3();

	// set and get max and min scores
	void setMaxScore();
	int getMaxScore();
	
	void setMinScore();
	int getMinScore();
	
	//  calc average score
	void addScore(int);
	void calcAvgScore();
	double getAvgScore();

	//destructor
	~TestScores(){};


};
/***************************
	TestScores::TestScores
*Constructor
*Initialize	-the three test scores
*			-maximum score
*			-minimun score
*			-average score
**********************************/
TestScores::TestScores()
{
	maxScore = minScore = 0;
	sumScore = countScore = 0;
	avgScore = 0.0;
	tScore1 = tScore2 = tScore3 = 0;

}
/***************************
*	TestScores::setScore1
*set first incoming score to tScore1
*and maxScore
**********************************/

void TestScores::setScore1(int inSc)
{
	tScore1 = inSc;
	maxScore = inSc;
}
/***************************
*	TestScores::getScore1
*return tScore1
**********************************/

int TestScores::getScore1()
{
	return tScore1;
}
/***************************
*	TestScores::setScore2
*set second incoming score to tScore2
*and minScore
**********************************/

void TestScores::setScore2(int inSc)
{
	tScore2 = inSc;
	minScore = inSc;
}
/***************************
*	TestScores::getScore2
*return tScore2
**********************************/

int TestScores::getScore2()
{
	return tScore2;
}
/***************************
*	TestScores::setScore3
*set tScore3 to incoming score
**********************************/

void TestScores::setScore3(int inSc)
{
	tScore3 = inSc;
}
/***************************
*	TestScores::getScore3
*return tscore3
**********************************/

int TestScores::getScore3()
{
	return tScore3;
}

/***************************
*	TestScores::setMaxScore
*test tScore3 to see if it is bigger than max
*then it become maxScore
**********************************/

void TestScores::setMaxScore()
{
	
	if (tScore3 > maxScore)
		maxScore = tScore3;
}
/***************************
*	TestScores::getMaxScore
*return maxScore
**********************************/

int TestScores::getMaxScore()
{
	return maxScore;
}
/***************************
*	TestScores::setMinScore
*test tScore3 to see if it is smaller than min
*then it become minScore
**********************************/

void TestScores::setMinScore()
{
	
	if (tScore3 < minScore)
		minScore = tScore3;

}
/***************************
*	TestScores::getMinScore
*return minScore
**********************************/

int TestScores::getMinScore()
{
	return minScore;
}
/***************************
*	TestScores::addScore
*add incoming score to sumScore to get average later
**********************************/

void TestScores::addScore(int tScore)
{
	sumScore = sumScore + tScore;
	countScore++;
}
/***************************
*	TestScores::calcAvgScore
*calculate avgScore by  sumScore/ countScore
**********************************/

void TestScores::calcAvgScore()
{
	if (countScore > 0)
	{
		avgScore = sumScore / countScore;
	}
}
/***************************
+	TestScores::getAvgScore
*return avgScore
**********************************/

double TestScores::getAvgScore()
{
	return avgScore;
}
// prototypes
void displayReportHeader();
int getTScore();
void valTScore(int);
void displayScore(TestScores &testSc);

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
	int inScore;
	int maxOfTest = 4;

	TestScores testAvg;

	//input number from the user

	displayReportHeader();
	for (int numOfTest = 1 ; numOfTest < maxOfTest; numOfTest++)
	{	
		// Ask the user to enter three test scores
		inScore = getTScore();
		valTScore(inScore);
	// store input in the TestScores object.
	//move the value to the class
		if (numOfTest == 1)
		{
			testAvg.setScore1(inScore);
		}
		else if (numOfTest == 2)
		{
			testAvg.setScore2(inScore);
		}
		else if (numOfTest == 3)
		{
			testAvg.setScore3(inScore);
		}
		testAvg.addScore(inScore);


	}
	// compare Score 
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
*	getTScore()
*prompt the user for input test score
*get score 
*return score
**********************************/

int getTScore()
{
	int tScore;
	int countTScore = 0;
	cout << "         Please Enter a test score:  ";
	cin >> tScore;
	return tScore;

}
/***************************
*	 valTScore
*validate that the score is entered and >0
**********************************/
void valTScore(int tScore)
{
	while (!cin || tScore < 0)
	{
		cin.sync();
		cin.clear();
		cout << "Invalid test score, try again: ";
		cin >> tScore;
	}
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
	cout << left << "   " << testScore.getScore1() << " , "; //tSc1;
	cout << right << " "<< testScore.getScore2()<< " , "; //tSc2;
	cout << right << " " << testScore.getScore3()<< "  "<<endl;
	cout << "\n  The the maximum score: " << testScore.getMaxScore()<<endl;
	cout << "\n  The the minimum score: " << testScore.getMinScore()<<endl;

	cout << left << fixed << setprecision(1) << "\n  The average of the three test scores are: "
		<< testScore.getAvgScore()<< endl;
	cout << "\n\n" << endl;
}