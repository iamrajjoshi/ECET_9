/*

Student Name
Program Purpose

*/

#include <vector>
#include <Windows.h>
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
#include<stdlib.h>
#include <fstream>
#include <mmsystem.h>

using namespace std;

/*int main()
{
	char x[80];
	int lowercase = 0,
		uppercase = 0,
		space = 0,
		tab = 0,
		digit = 0;

	cout << "\nPlease enter a line of character: ";

	for (int i = 0; (x[i] = cin.get()) != '\n'; i++)
	{
		if (x[i] >= 'A' && x[i] <= 'Z')
			uppercase++;
		else if (x[i] >= 'a' && x[i] <= 'z')
			lowercase++;
		else if (x[i] >= '0' && x[i] <= '9')
			digit++;
		else if (x[i] == ' ')
			space++;
		else if (x[i] == '\t')
			tab++;
	}
	cout << "Uppercases: " << uppercase << endl;
	cout << "Lowercases: " << lowercase << endl;
	cout << "Spaces: " << space << endl;
	cout << "Digits: " << digit << endl;
	cout << "Tabs: " << tab << endl;
	return 0;
}*/
int main()
{
	char x[80];
	int lowercase = 0,
		uppercase = 0,
		space = 0,
		tab = 0,
		digit = 0;

	cout << "\nPlease enter a line of character: ";

	cin.getline(x, 80); // cin.getline(x, 80, 'z'); --> z becomes a carrige line return;

	for (int i = 0; x[i] != '\0'; i++)
	{
		if (x[i] >= 'A' && x[i] <= 'Z')
			uppercase++;
		else if (x[i] >= 'a' && x[i] <= 'z')
			lowercase++;
		else if (x[i] >= '0' && x[i] <= '9')
			digit++;
		else if (x[i] == ' ')
			space++;
		else if (x[i] == '\t')
			tab++;
	}
	cout << "Uppercases: " << uppercase << endl;
	cout << "Lowercases: " << lowercase << endl;
	cout << "Spaces: " << space << endl;
	cout << "Digits: " << digit << endl;
	cout << "Tabs: " << tab << endl;
	return 0;
}