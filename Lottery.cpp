//Debbie Reid
//Lottery program

#include<iostream>
using namespace std;

//prototypes
void validate(int& n);
int getLottery();
void validateAgain(char& c);
void askAgain(char& userwantsto);


class Lottery
{
private:
	int winningNum;			//holds the winning lottery number
	int userNum;			//user's guess

	void displayResults(bool);


public:
	Lottery();
	Lottery(int);					//constructor
	void setUserNum(int i);		//set the user input 
	int getUserNum();			//get the user input (not used here)

	void compare();				//compare the values to see if the user won
	~Lottery();					//destructor
};

/************Method Definitions********************/
Lottery::Lottery()
{
	winningNum = 45678;
}

Lottery::Lottery(int i)
{
	winningNum = i;		//set the winning lottery number
}

void Lottery::setUserNum(int i)
{
	userNum = i;
}

int Lottery::getUserNum()
{
	return userNum;
}

void Lottery::compare()
{
	bool win;

	if (userNum == winningNum)
		win = true;
	else
		win = false;

	displayResults(win);
}

void Lottery::displayResults(bool b)
{
	cout << endl;

	if (b == true)			// or if (b)
		cout << "You won!" << endl << endl;
	else
		cout << "Not a match, try again!" << endl << endl;
}

Lottery::~Lottery()
{
	cout << endl << "Goodbye!" << endl << endl;
}
	
/******************Driver**********************/
int main()
{
	//variables
	int inNum;		//input number from the user
	char userwantsto = 'y';

	Lottery play(12345);
	Lottery play2();

	while (userwantsto == 'y')
	{
		system("cls");

		inNum = getLottery();

		play.setUserNum(inNum);
		play.compare();

		askAgain(userwantsto);
	}

}

int getLottery()
{
	//get a number from the user
	int num;

	cout << "Enter a 5 digit number: ";
	cin >> num;

	validate(num);

	return num;
}

void validate(int& n)
{
	//validate for a 5 digit number only
	while (!cin || n < 10000 || n > 99999)
	{
		cin.sync();
		cin.clear();
		cout << "Input must be a 5 digit number, try again: ";
		cin >> n;
	}
}

void askAgain(char& userwantsto)
{
	//ask the user if they want to try again with a new lottery number
	cout << endl << endl;
	cout << "Do you want to try again? (y = yes, n = no): ";
	cin >> userwantsto;

	validateAgain(userwantsto);

}

void validateAgain(char& c)
{
	//validate user input
	c = tolower(c);

	while (c != 'y' && c != 'n')
	{
		cout << "Invalid input, answer must be y or n, try again: ";
		cin >> c;
		c = tolower(c);
	}
}
	





	



