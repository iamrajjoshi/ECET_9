#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdio>
#include <dos.h>
using namespace std;

void main()
{
	int time, i, b, a;

	cout << "This program simulates a police siren!" << endl;

	cout << "Enter number of times: ";
	cin >> time;

	for (a = 0; a < time; a++)
	{
		for (i = 681; i <= 978; i += 10)
		{
			Beep(i, 100);

		}

		for (b = 978; b >= 681; b -= 10)
		{
			Beep(b, 100);
		}
	}

}