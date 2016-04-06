//Debbie Reid
//ask the user for two numbers then square, cube, and display the results

#include<iostream>
using namespace std;

//prototypes go here
float getInput();
void headers();
void validate(float& n);

class Powers
{
private:
	float number;		//input value from the user

	float square();
	float cube();


public:
	void setNumber(float);
	float getNumber();

	void display();



};

/***********Method Definitions**************/
void Powers::setNumber(float f)
{
	number = f;
}

float Powers::getNumber()
{
	return number;
}

void Powers::display()
{
	cout << number << "\t\t" << square() << "\t\t" << cube() << endl;
}

float Powers::square()
{
	return number * number;
}

float Powers::cube()
{
	return number * number * number;
}



/**********Driver Program*******************/

int main()
{
	//variables
	float inNum;		//raw input from the user

	Powers num1;		//object 1 from our class Powers
	Powers num2;		//object 2 from our class Powers

	inNum = getInput();

	//move the value to the class
	num1.setNumber(inNum);

	//get the second value from the user
	inNum = getInput();

	//move the value to the class
	num2.setNumber(inNum);

	//display the header
	headers();

	//display the data
	num1.display();
	num2.display();



	return 0;
}

/***************************************/
float getInput()
{
	float num;
		
	//input from the user
	cout << "Enter a number: ";
	cin >> num;

	validate(num);

	return num;
}

//****************************************
void validate(float& n)
{
	while (!cin)
	{
		cin.sync();
		cin.clear();
		cout << "Invalid input, try again: ";
		cin >> n;
	}
}

/*******************************************/
void headers()
{
	cout << endl << endl;
	cout << "Number \t\t Square \t\t Cube" << endl;
	cout << "-----------------------------------------------------" << endl;
}

	

