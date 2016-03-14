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
	int tScore1;
	int tScore2;
	int tScore3;
	int maxScore;
	double minScore;
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
#endif