// LeapYear.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	/*

	D6 = (R % 6) + 1
	Gives range of 1 through 6

	Rules: 
	Years divisible by 400 are always leap years
	Years divisible by 4 are leap years unless they are divisible by 100 but not 400
	All other year are common years

	*/

	int yearToCheck = 0;
	char check;
	bool run = true;

	cout << "Give this progam a year, and it will check if it is a leap year.\n";

	while (run)
	{
		cout << endl << "What year are you checking ? ";
		cin >> yearToCheck;
		if (yearToCheck % 400 == 0.0)
		{
			cout << endl << "     The year " << yearToCheck << " is a leap year.\n";
		}

		else if (yearToCheck % 4 == 0.0 and yearToCheck % 100 != 0.0)
		{
			cout << endl << "     The year " << yearToCheck << " is a leap year.\n";
		}

		else 
		{
			cout << endl << "     The year " << yearToCheck << " is not a leap year.\n";
		}

		cout << endl << "Would you like to check another year? (y/n) : ";
		cin >> check;
		if (check == 'y')
		{
			run = true;
		}
		else if (check == 'n')
		{
			run = false;
		}
	}
	cout << endl << "Thank you. Have a nice day!" << endl;
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
