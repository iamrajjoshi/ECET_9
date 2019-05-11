/*
Raj Joshi
Calculator
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	long double num1, num2;
	char op;

	while (true)
	{
		cout << "Please enter the first number: ";
		cin >> num1;
		cout << "\nPlease enter the operation (+,-,*,/,^,s (square root): ";
		cin >> op;
		if (op != 's')
		{
			cout << "\nPlease enter the second number: ";
			cin >> num2;
		}
		switch (op)
		{
		case ('+'):
		{
			cout << "\nThe answer is: " << num1 + num2 << endl;
			break;
		}
		case ('-'):
		{
			cout << "\nThe answer is: " << num1 - num2 << endl;
			break;
		}
		case ('*'):
		{
			cout << "\nThe answer is: " << num1 * num2 << endl;
			break;
		}
		case ('/'):
		{
			if (num2 != 0)
				cout << "\nThe answer is: " << num1 / num2 << endl;
			else
				cout << "\nInvalid Input! Number 2 cannot be 0. " << endl;
			break;
		}
		case ('^'):
		{
			cout << "\nThe answer is: " << pow(num1, num2) << endl;
			break;
		}
		case ('s'):
		{
			if (num1 > 0)
				cout << "\nThe answer is: " << sqrt(num1) << " and " << -sqrt(num1) << endl;
			else if (num1 == 0)
				cout << "\nThe answer is: " << sqrt(num1) << endl;
			else
				cout << "\nInvalid Input! Number cannot be ngative. " << endl;
			break;
		}

		}
	}
}