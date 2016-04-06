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
	maxScore = minScore = 0.0;
	avgScore = 0.0;
	tScore1 = tScore2 = tScore3 = 0.0;

}
/***************************
*	TestScores::setScore1
*set first incoming score to tScore1
*and maxScore
**********************************/

void TestScores::setScore1(float inSc)
{
	tScore1 = inSc;
	
}
/***************************
*	TestScores::getScore1
*return tScore1
**********************************/

float TestScores::getScore1()
{
	return tScore1;
}
/***************************
*	TestScores::setScore2
*set second incoming score to tScore2
*and minScore
**********************************/

void TestScores::setScore2(float inSc)
{
	tScore2 = inSc;
	
}
/***************************
*	TestScores::getScore2
*return tScore2
**********************************/

float TestScores::getScore2()
{
	return tScore2;
}
/***************************
*	TestScores::setScore3
*set tScore3 to incoming score
**********************************/

void TestScores::setScore3(float inSc)
{
	tScore3 = inSc;
}
/***************************
*	TestScores::getScore3
*return tscore3
**********************************/

float TestScores::getScore3()
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
	maxScore = tScore1;
	if (tScore2 > maxScore)
		maxScore = tScore2;
	if (tScore3 > maxScore)
		maxScore = tScore3;

}
/***************************
*	TestScores::getMaxScore
*return maxScore
**********************************/

float TestScores::getMaxScore()
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
	minScore = tScore1;
	if (tScore2 < minScore)
		minScore = tScore2;
	if (tScore3 < minScore)
		minScore = tScore3;


}
/***************************
*	TestScores::getMinScore
*return minScore
**********************************/

float TestScores::getMinScore()
{
	return minScore;
}

/***************************
*	TestScores::calcAvgScore
*calculate avgScore by  sumScore/ countScore
**********************************/

void TestScores::calcAvgScore()
{
		avgScore = (tScore1 + tScore2 + tScore3) / 3.0;
}
/***************************
+	TestScores::getAvgScore
*return avgScore
**********************************/

float TestScores::getAvgScore()
{
	return avgScore;
}
