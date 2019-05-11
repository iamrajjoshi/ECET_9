/*

Raj Joshi
Tic Tac Toe

*/

#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
#include <time.h>
#include <Windows.h>
#include <iostream>       
#include <thread>     
#include <chrono>
#include <stdlib.h>

using namespace std;

int checkgamestatus();
void printboard();
char board[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int main()
{
	cout << "\t\tWelcome the classic game if Tic Tac Toe!\n" << endl;
	cout << "\t\tThis game is created by Raj Joshi\n" << endl;
	cout << "\t\tThe game will start in 5 seconds..." << endl;
	Sleep(5000);
	system("CLS");
	int player = 1, i, choice;
	char mark;
	bool mistake = false;
	bool playagain = true;
	do
	{
		printboard();
		player = (player % 2) ? 1 : 2;
		if (mistake == false)
		{
			cout << "\tPlayer " << player << ", please enter a number: ";
			cin >> choice;
		}
		else
		{
			cout << "\aPlayer " << player << ", Invalid Move! Please enter a new number: ";
			cin >> choice;
			mistake = false;
		}


		mark = (player == 1) ? 'X' : 'o';

		if (choice == 1 && board[0][0] == '1')
			board[0][0] = mark;
		else if (choice == 2 && board[0][1] == '2')
			board[0][1] = mark;
		else if (choice == 3 && board[0][2] == '3')
			board[0][2] = mark;
		else if (choice == 4 && board[1][0] == '4')
			board[1][0] = mark;
		else if (choice == 5 && board[1][1] == '5')
			board[1][1] = mark;
		else if (choice == 6 && board[1][2] == '6')
			board[1][2] = mark;
		else if (choice == 7 && board[2][0] == '7')
			board[2][0] = mark;
		else if (choice == 8 && board[2][1] == '8')
			board[2][1] = mark;
		else if (choice == 9 && board[2][2] == '9')
			board[2][2] = mark;
		else
		{
			mistake = true;
			player--;
		}
		system("CLS");
		i = checkgamestatus();
		player++;
	} while (i == -1);
	printboard();

	if (i == 1)
		cout << " --> \t\aPlayer " << --player << " Wins!\n" << endl;
	else
		cout << " --> \aGame Draw...\n" << endl;
	return 0;
}


//Game Status: 1 (Gameover with winner) -1(Game is still in progress) 0(Game is over with tie)
int checkgamestatus()
{
	if ((board[0][0] == board[0][1]) && (board[0][1] == board[0][2]))
		return 1;
	else if ((board[1][0] == board[1][1]) && (board[1][1] == board[1][2]))
		return 1;
	else if ((board[2][0] == board[2][1]) && (board[2][1] == board[2][2]))
		return 1;
	else if ((board[0][0] == board[1][0]) && (board[1][0] == board[2][0]))
		return 1;
	else if ((board[0][1] == board[1][1]) && (board[1][1] == board[2][1]))
		return 1;
	else if ((board[0][2] == board[1][2]) && (board[1][2] == board[2][2]))
		return 1;
	else if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2]))
		return 1;
	else if ((board[0][2] == board[1][1]) && (board[1][1] == board[2][0]))
		return 1;
	else if (board[0][0] != '1' && board[0][1] != '2' && board[0][2] != '2' &&
		board[1][0] != '4' && board[1][1] != '5' && board[1][2] != '6' &&
		board[2][0] != '7' && board[2][1] != '8' && board[2][2] != '9')
		return 0;
	else
		return  -1;
}

//Board Design function to draw print board
void printboard()
{
	cout << "\n\n\t\t  Tic Tac Toe\n" << endl;
	cout << "\tPlayer 1 (X)  -  Player 2 (o)\n\n";
	cout << "-----------------------------------------------------\n" << endl;
	cout << "\t\t     |     |     " << endl;
	cout << "\t\t  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "  " << endl;
	cout << "\t\t_____|_____|_____" << endl;
	cout << "\t\t     |     |     " << endl;
	cout << "\t\t  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "  " << endl;
	cout << "\t\t_____|_____|_____" << endl;
	cout << "\t\t     |     |     " << endl;
	cout << "\t\t  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "  " << endl;
	cout << "\t\t     |     |     \n" << endl;
	cout << "-----------------------------------------------------\n" << endl;
}