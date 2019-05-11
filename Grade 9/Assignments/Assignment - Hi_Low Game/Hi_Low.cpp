/*

Raj Joshi
Hi_Low Game

*/

#include <conio.h>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>
#include <time.h>
#include <Windows.h>

//Function Definition
int sys_num_gen();
int check_guess(int, int);

using namespace std;

int main()
{
	int systemnumber = sys_num_gen();//Fetch Random Number
	int guess_number = 0;
	int tries = 0;
	int y = 0;
	bool game_finished = false;
	bool play_again = false;


	while (game_finished == false)//When the game is not finished
	{
		cout << "Player, please enter an integer (between 1-1000)" << endl;
		cin >> guess_number;
		cout << "Guess Number: " << guess_number << endl;
		tries++;//Increments number of trials tries = tries + 1;

		//Defensive Programming
		if (guess_number < 1 || guess_number > 1000)
		{
			cout << "Invalid Move! \n Please enter a new number: ";
			cin >> guess_number;
		}

		y = check_guess(guess_number, systemnumber);

		//End Game
		if (y == 0)
		{
			cout << "Won\nNumber of tries: " << tries << endl;
			cout << "Would you like to play again? (Yes = 1) (N = 0)" << endl;
			cin >> play_again;

			if (play_again == true)
			{
				game_finished = false;
				systemnumber = sys_num_gen();//Fetch Random Number
				tries = 0;
			}
			else if (play_again == false)
			{
				game_finished = true;
				return 0;
			}

		}
		else if (y == 1)
			cout << "High" << endl;
		else if (y == -1)
			cout << "Low" << endl;
	}
}

//Generates a Random Number
int sys_num_gen()
{
	srand(time(NULL));
	int systemnumber = rand() % 1000 + 1;
	return systemnumber;
}

//Checks the guess of the user (0 = correct 1 = higher -1 = lower)
int check_guess(int guess_number, int systemnumber)
{
	if (guess_number == systemnumber)
		return 0;
	else if (guess_number < systemnumber)
		return -1;
	else if (guess_number > systemnumber)
		return 1;
}