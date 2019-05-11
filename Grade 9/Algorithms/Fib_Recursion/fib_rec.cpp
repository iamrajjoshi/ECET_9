/*

Raj Joshi
Compute Fibonacci Sequence using Recursion
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/ DISCLAIMER: THERE IS A BETTER WAY TO DO RECURSION THAN THIS. THIS IS NOT THE FASTEST WAY. THIS IS JUST A TUTORIAL! /
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
*/

#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
#include <time.h>
#include <Windows.h>

using namespace std;
int fibonacci(int n);// You always have to create a function to do recursion (Cannot be done in main -- According to my knowledge)

int main()
{
	int n, i = 0;
	cout << "Input the number of terms for Fibonacci Series: ";
	cin >> n;
	cout << "\nFibonacci Series is as follows\n";

	while (i<n)
	{
		cout << " " << fibonacci(i);// to put spaces after every number
		i++;
	}

	return 0;
}

int fibonacci(int n)
{
	if ((n == 1) || (n == 0))// This is your base case
	{
		return(n);
	}
	else
	{
		return(fibonacci(n - 1) + fibonacci(n - 2));// recursion part (You call the function when you return)
		/* The return is most important. basically it will call function over again
		I advice searching it up online*/
	}
}
