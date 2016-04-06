//Debbie Reid
//temperature conversion

#include<iostream>
using namespace std;

//prototypes
void validateScale(int& s);
void validateTemp(float& num);
float getInputTemp();
int getInputScale();

class Temperature
{
private:
	float temp;
	int scale;
	float converted;

	float fToC();
	float cToF();

public:
	Temperature();			//constructor

	void setTemp(float f);
	float getTemp();

	void setScale(int s);
	int getScale();

	void convertTemp();
	void display();

	~Temperature();			//destructor
};

//****************Method Definitions*****************************

Temperature::Temperature()
{
	//initialize variables
	temp = 0;
	scale = 1;
	converted = 0;

	cout << "In the constructor.  Welcome!" << endl << endl;
}


void Temperature::setTemp(float f)
{
	temp = f;
}

float Temperature::getTemp()
{
	return temp;
}

void Temperature::setScale(int i)
{
	scale = i;
}

int Temperature::getScale()
{
	return scale;
}

float Temperature::cToF()
{
	return temp * 9/5 + 32;
}

float Temperature::fToC()
{
	return (temp - 32) * 5/9;
}

void Temperature::convertTemp()
{
	if (scale == 1)
		converted = fToC();
	else
		converted = cToF();
}

void Temperature::display()
{
	cout << endl << endl;

	if (scale == 1)
		cout << temp << "F = " << converted << "C." << endl;
	else
		cout << temp << "C = " << converted << "F." << endl;
}

Temperature::~Temperature()
{
	cout << endl << "In the destructor.  Goodbye!" << endl << endl;
}

/**************Driver************************/
int main()
{
	//variables
	Temperature t1;

	float inTemp;		//raw input data
	int inScale;		//raw input data

	//get and validate input from the user
	inTemp = getInputTemp();
	inScale = getInputScale();

	//move to the class and complete the conversion
	t1.setTemp(inTemp);
	t1.setScale(inScale);
	t1.convertTemp();
	t1.display();

	return 0;
}

/***********Function Definitions********************/

float getInputTemp()
{
	float num;

	cout << "Enter the temperature to convert: ";
	cin >> num;

	//validate the input
	validateTemp(num);

	return num;
}

void validateTemp(float& num)
{
	while (!cin)
	{
		cin.sync();
		cin.clear();
		cout << "Invalid input, try again: ";
		cin >> num;
	}
}

int getInputScale()
{
	int sc;

	cout << endl << endl;
	cout << "Press 1 to convert to Celsius" << endl
		<< "Press 2 to convert to Fahrenheit" << endl << endl;

	cout << "Your choice: ";
	cin >> sc;

	validateScale(sc);

	return sc;
}

void validateScale(int& s)
{
	while (!cin || s < 1 || s > 2)
	{
		cin.sync();
		cin.clear();
		cout << "Invalid input, try again: ";
		cin >> s;
	}
}

	




