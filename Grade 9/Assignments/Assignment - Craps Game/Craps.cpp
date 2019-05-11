/*

Raj Joshi
Craps Game

*/

#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
#include <time.h>
#include <Windows.h>

//Function Definition
void rollDice();
void origSoR();
void nSoR();
void conditionWin();

//Global Variables
int firstDice;
int secondDice;
int sum;
int newSum;

using namespace std;

//Contains Condition to end game in the first round
int main()
{
	srand(time(NULL));
	cout << "Hello and welcome to a game of craps" << endl;
	Sleep(1000);
	rollDice();
	origSoR();
	switch (sum)
	{
	case 7:
		cout << "You have won" << endl;
		break;
	case 11:
		cout << "You have won" << endl;
		break;
	case 2:
		cout << "You have lost" << endl;
		break;
	case 3:
		cout << "You have lost" << endl;
		break;
	case 12:
		cout << "You have lost" << endl;
		break;
	default:
		conditionWin();
	}
}

//Random Number to mimic rolling dice
void rollDice()
{
	firstDice = rand() % 6 + 1;
	secondDice = rand() % 6 + 1;
	cout << "You rolled: " << firstDice << "\t" << secondDice << "\t";
}

//Orignal Sum
void origSoR()
{
	sum = firstDice + secondDice;
	cout << "Which is a sum of: " << sum << endl;
}

// Sum for every other roll
void nSoR()
{
	newSum = firstDice + secondDice;
	cout << "Which is a sum of: " << newSum << endl;
}

//Runs Until Someone wins
void conditionWin()
{
	cout << "You need to get: " << sum << endl;
	int end = 0;
	while (true)
	{
		rollDice();
		nSoR();
		if (newSum == sum)
		{
			cout << "Player wins" << endl;
			break;
		}
		if (newSum == 7)
		{
			cout << "Player loses" << endl;
			break;
		}
	}
}