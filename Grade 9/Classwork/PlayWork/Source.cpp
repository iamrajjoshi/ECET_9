#include <iostream>
#include <windows.h>
using namespace std;

void playNote(char, float);

void displayColor(int);

int main()
{
	int num = 1;
	while (1)
	{
		system("CLS");
		displayColor(num++);
		playNote('A', 0.4);
		playNote('B', 0.4);
		playNote('C', 0.4);
		playNote('D', 0.4);
		playNote('E', 0.4);
		playNote('F', 0.4);
		playNote('G', 0.4);

		cout << " Thank you for listening!" << endl;
		Sleep(1000);
	}

	return 0;
}

void playNote(char g, float l)
{
	char n = g;
	if (n == 'A' || n == 'a')
	{
		cout << n;
		Beep(440, l * 1000);
	}
	else if (n == 'B' || n == 'b')
	{
		cout << n;
		Beep(493.88, l * 1000);
	}
	else if (n == 'C' || n == 'c')
	{
		cout << n;
		Beep(523.35, l * 1000);
	}
	else if (n == 'D' || n == 'd')
	{
		cout << n;
		Beep(587.33, l * 1000);
	}
	else if (n == 'E' || n == 'e')
	{
		cout << n;
		Beep(659.25, l * 1000);
	}
	else if (n == 'F' || n == 'f')
	{
		cout << n;
		Beep(698.45, l * 1000);
	}
	if (n == 'G' || n == 'g')
	{
		cout << n;
		Beep(783.99, l * 1000);
	}
}

void displayColor(int choice)
{
	switch (choice)
	{
	case 1:
		system("color f0");
		break;
	case 2:
		system("color 0F");
		break;
	case 3:
		system("color fc");
		break;
	case 4:
		system("color cf");
		break;
	case 5:
		system("color f2");
		break;
	case 6:
		system("color 2f");
		break;
	case 7:
		system("color f4");
		break;
	case 8:
		system("color4f");
		break;
	case 9:
		system("color f6");
		break;
	case 10:
		system("color 6f");
		break;
	case 11:
		system("color fb");
		break;
	case 12:
		system("color bf");
		break;
	case 13:
		system("color d2");
		break;
	}

}

