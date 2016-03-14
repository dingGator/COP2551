//Kim Lien Chu
//COP2551.0M1
#ifndef TESTSCORES_H
#define TESTSCORES_H
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
	float tScore1;
	float tScore2;
	float tScore3;
	float maxScore;
	float minScore;
	//variables to calculate averageScore
	float avgScore;

public:

	TestScores();  // constructor
	//prototypes
	//get and set the scores
	void setScore1(float);
	float getScore1();

	void setScore2(float);
	float getScore2();

	void setScore3(float);
	float getScore3();

	// set and get max and min scores
	void setMaxScore();
	float getMaxScore();

	void setMinScore();
	float getMinScore();

	//  calc average score
	void calcAvgScore();
	float getAvgScore();

	//destructor
	~TestScores(){};


};
#endif