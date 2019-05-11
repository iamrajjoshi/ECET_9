#include <iostream>
#include <conio.h>
#include <iomanip>
#include <windows.h>
using namespace std;

int main()
{
	char key;

	cout << "Welcome to the piano program!" << endl;

	cout << "The keys are as follows: " << endl << endl;

	cout << "Keyboard Key           Piano Key" << endl;
	cout << setw(5) << "A" << setw(23) << "A (LOW)" << endl;
	cout << setw(5) << "1" << setw(23) << "A#/Bb" << endl;
	cout << setw(5) << "B" << setw(23) << "B" << endl;
	cout << setw(5) << "C" << setw(23) << "C" << endl;
	cout << setw(5) << "2" << setw(23) << "C#/Db" << endl;
	cout << setw(5) << "D" << setw(23) << "D" << endl;
	cout << setw(5) << "3" << setw(23) << "D#/Eb" << endl;
	cout << setw(5) << "E" << setw(23) << "E" << endl;
	cout << setw(5) << "F" << setw(23) << "F" << endl;
	cout << setw(5) << "4" << setw(23) << "F#/Gb" << endl;
	cout << setw(5) << "G" << setw(23) << "G" << endl;
	cout << setw(5) << "5" << setw(23) << "G#/Ab" << endl;
	cout << setw(5) << "H" << setw(23) << "A (HIGH)" << endl;

	cout << "Enter Q to quit" << endl;

	cout << "\nPress key: \n";

	while (_kbhit)
	{

		_getch();

		if (_getch() == 'A' || _getch() == 'a')
		{
			Beep(220, 1000);
			cout << "A (LOW)" << endl;
		}

		else if (_getch() == 'B' || _getch() == 'b')
		{
			Beep(246.94, 1000);
			cout << "B" << endl;
		}

		else if (_getch() == 'C' || _getch() == 'c')
		{
			Beep(266.63, 1000);
			cout << "C" << endl;
		}

		else if (_getch() == 'D' || _getch() == 'd')
		{
			Beep(293.66, 1000);
			cout << "D" << endl;
		}

		else if (_getch() == 'E' || _getch() == 'e')
		{
			Beep(329.63, 1000);
			cout << "E" << endl;
		}

		else if (_getch() == 'F' || _getch() == 'f')
		{
			Beep(349.23, 1000);
			cout << "F" << endl;
		}

		else if (_getch() == 'G' || _getch() == 'g')
		{
			Beep(392, 1000);
			cout << "G" << endl;
		}

		else if (_getch() == 'H' || _getch() == 'h')
		{
			Beep(440, 1000);
			cout << "A (HIGH)" << endl;
		}

		else if (_getch() == '1')
		{
			Beep(233.08, 1000);
			cout << "A#/Bb" << endl;
		}

		else if (_getch() == '2')
		{
			Beep(277.18, 1000);
			cout << "C#/Db" << endl;
		}

		else if (_getch() == '3')
		{
			Beep(311.13, 1000);
			cout << "D#/Eb" << endl;
		}

		else if (_getch() == '4')
		{
			Beep(369.99, 1000);
			cout << "F#/Gb" << endl;
		}

		else if (_getch() == '5')
		{
			Beep(415.3, 1000);
			cout << "G#/Ab" << endl;
		}

		else if (_getch() == 'Q' || _getch() == 'q')
		{
			break;
		}

		else
		{
			cout << "This is not a correct key. Please try again: \n";
			_getch();
		}


	}



	return 0;
}