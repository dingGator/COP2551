//Kim Lien Chu
//COP2551.0M1
#include "TestScores.h"
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
	maxScore = tScore1;
	minScore = tScore1;

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
	if (tScore2 > maxScore)
		maxScore = tScore2;

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
	if (tScore2 < minScore)
		minScore = tScore2;

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
