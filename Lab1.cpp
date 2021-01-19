// Lab1 Exercise
// WoonHak kong - 101300258

#include <iostream>
#include <string>

using namespace std;

int main()
{

	cout << "------- Size of data types IN ORDER -------" << endl;
	cout << "Data type \"bool\" is " << sizeof(bool) << " byte." << endl;
	cout << "Data type \"char\" is " << sizeof(char) << " byte." << endl;
	cout << "Data type \"short int\" is " << sizeof(short int) << " byte." << endl;
	cout << "Data type \"int\" is " << sizeof(int) << " byte." << endl;
	cout << "Data type \"long int\" is " << sizeof(long int) << " byte." << endl;
	cout << "Data type \"float\" is " << sizeof(float) << " byte." << endl;
	cout << "Data type \"long long int\" is " << sizeof(long long int) << " byte." << endl;
	cout << "Data type \"double\" is " << sizeof(double) << " byte." << endl;
	cout << "Data type \"string\" is " << sizeof(string) << " byte." << endl;
	cout << "-------------------------------------------" << endl;
	cout << endl;

	cout << "----------- Operator ------------" << endl;
	double num1 = 2.4443;
	double num2 = 3.5552212;
	double num3 = 6.3234512;
	double num4 = 72.1434235;
	int num5 = 15;
	int num6 = 2;

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;
	cout << "num5 = " << num5 << endl;
	cout << "num6 = " << num6 << endl;
	cout << endl;

	cout << "num1 + num2 = " << num1 + num2 << endl;
	cout << "num3 - num1 = " << num3 - num1 << endl;
	cout << "num4 * num2 = " << num4 * num2 << endl;
	cout << "num5 / num6 = " << num5 / num6 << endl;
	cout << "num5 % num6 = " << num5 % num6 << endl;
	cout << "num4 / num5 = " << num4 / num5 << endl;
	cout << "--------------------------------" << endl;






	return 0;
}

/*
int
float
bool
double
char
string
short int
long int
long long int
*/