/*

Raj Joshi
Black_Jack Game

*/

#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
#include <time.h>
#include <Windows.h>
#include <iostream>       // std::cout, std::endl
#include <thread>         // std::this_thread::sleep_for
#include <chrono>   

using namespace std;

int main()
{
	const int cards[13] = { 1,2,3,4,5,6,7,8,9,10,10,10,10 };
	const string cardtype[13] = { "Ace","2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };
	int dcard1 = 0, dcard2 = 0, dcard3 = 0, pcard1 = 0, pcard2 = 0, pcard3 = 0, playerSum = 0, dealerSum = 0;
	srand(time(NULL));
	bool gameover = false;
	bool newround = true;
	bool morecards = true;
	while (gameover == false)
	{
		if (newround == true)
		{
			dcard1 = rand() % 13;
			dcard2 = rand() % 13;
			dcard3 = rand() % 13;
			dealerSum = 0;
			playerSum = 0;
			pcard1 = rand() % 13;
			pcard2 = rand() % 13;
			
			dealerSum = cards[dcard1] + cards[dcard2];
			playerSum = cards[pcard1] + cards[pcard2];
			while (dealerSum <= 16)
				dealerSum += cards[dcard3];
			newround = false;
		}

		cout << "\n\t\tWelcome to Black Jack!\n";
		cout << "--------------------------------------------------------\n\n";
		Sleep(1000);
		cout << "You have pulled: " << cardtype[pcard1] << " and a " << cardtype[pcard2] << " --> Your sum is: " << playerSum << "\n" << endl;

		while (morecards == true)
		{
			cout << "Would you like another card? (Yes = 1 - No = 0): ";
			cin >> morecards;
			cout << "\n";
			if (morecards == false)
				break;
			else
			{
				pcard3 = rand() % 13;
				playerSum += cards[pcard3];
				cout << "You have pulled: " << cardtype[pcard3] << " --> Your sum is: " << playerSum << "\n" << endl;
			}
			if (playerSum > 21)
			{
				cout << "Oh No! You have went over 21! You have lost the game!" << endl;
				break;
			}	
		}
		if ((playerSum <= 21 && dealerSum == playerSum) || (playerSum <= 21 && (dealerSum > playerSum && dealerSum <= 21)))// If dealer ties or has more
		{
			cout << "Dealer Sum is: " << dealerSum << " Your sum is: " << playerSum << " --> You have lost the game! " << endl;
			
		}
		else if(playerSum <= 21 )
		{
			cout << "Dealer Sum is: " << dealerSum << " Your sum is: " << playerSum << " --> You have won the game! " << endl;
		}
		cout << "\nWould you like to play again? (Yes = 0 - No = 1): ";
		cin >> gameover;
		if (gameover == false)
		{
			system("CLS");
			newround = true;
			morecards = true;
		}	
		else
			newround = false;
	}
	return 0;
}