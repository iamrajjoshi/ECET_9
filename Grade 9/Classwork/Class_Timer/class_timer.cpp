#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <ctime>
#include <iomanip>
#include <mmsystem.h>
#pragma warning(disable : 4996)
using namespace std;

int main()
{
	int targeth = 0, targetm = 0;
	cout << "12 - Hour Format           24 - Hour Format" << endl;
	cout << setw(10) << "12 A.M." << setw(30) << "0:00 midnight" << endl;
	cout << setw(10) << "1 A.M." << setw(26) << "01:00" << endl;
	cout << setw(10) << "2 A.M." << setw(26) << "02:00" << endl;
	cout << setw(10) << "3 A.M." << setw(26) << "03:00" << endl;
	cout << setw(10) << "4 A.M." << setw(26) << "04:00" << endl;
	cout << setw(10) << "5 A.M." << setw(26) << "05:00" << endl;
	cout << setw(10) << "6 A.M." << setw(26) << "06:00" << endl;
	cout << setw(10) << "7 A.M." << setw(26) << "07:00" << endl;
	cout << setw(10) << "8 A.M." << setw(26) << "08:00" << endl;
	cout << setw(10) << "9 A.M." << setw(26) << "09:00" << endl;
	cout << setw(10) << "10 A.M." << setw(26) << "10:00" << endl;
	cout << setw(10) << "11 A.M." << setw(26) << "11:00" << endl;
	cout << setw(10) << "12 P.M." << setw(26) << "12:00" << endl;
	cout << setw(10) << "1 P.M." << setw(26) << "13:00" << endl;
	cout << setw(10) << "2 P.M." << setw(26) << "14:00" << endl;
	cout << setw(10) << "3 P.M." << setw(26) << "15:00" << endl;
	cout << setw(10) << "4 P.M." << setw(26) << "16:00" << endl;
	cout << setw(10) << "5 P.M." << setw(26) << "17:00" << endl;
	cout << setw(10) << "6 P.M." << setw(26) << "18:00" << endl;
	cout << setw(10) << "7 P.M." << setw(26) << "19:00" << endl;
	cout << setw(10) << "8 P.M." << setw(26) << "20:00" << endl;
	cout << setw(10) << "9 P.M." << setw(26) << "21:00" << endl;
	cout << setw(10) << "10 P.M." << setw(26) << "22:00" << endl;
	cout << setw(10) << "11 P.M." << setw(26) << "23:00" << endl;
	cout << setw(10) << "12 A.M." << setw(30) << "24:00 midnight" << endl;

	do
	{
		cout << "\n    (Please Enter in 24-hour format)\n\tWhen does class end?\n\tHour: ";
		cin >> targeth;
		cout << "\tMinute: ";
		cin >> targetm;
		if (targeth < 0 || targeth > 24 || targetm < 0 || targetm > 59)
		{
			cout << "\n\n\tIvalid Input... Please try Again!!!\n";
		}
	} while (targeth < 0 || targeth > 24 || targetm < 0 || targetm > 59);


	time_t t = time(0);   // get time now
	struct tm * now = localtime(&t);
	int sectarget = 0;
	int hours_left = ((targeth)-now->tm_hour);
	sectarget += hours_left * 3600;
	int minutes_left = ((targetm)-now->tm_min);
	sectarget += minutes_left * 60;
	int sec_left = (0 - now->tm_sec);
	sectarget += sec_left;

	int hr = 0, min = 0, sec = 0;
	//sectarget = 1;//DELETE THIS STATEMENT
	if (sectarget > 3600)
	{
		min = sectarget / 60;
		sec = sectarget % 60;
		hr = min / 60;
		min = min % 60;
	}
	else {
		min = sectarget / 60;
		sec = sectarget % 60;
	}
	PlaySound(TEXT("sound.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
	for (; hr >= 0; hr--)
	{
		for (; min >= 0; min--)
		{
			if (min == 0 && hr > 0)
				min = 59;
			for (; sec >= 0; sec--)
			{
				if (sec == 0 && min > 0)
				{
					sec = 59;
					if (min == 0)
					{
						sec = 59;
						hr--;
					}
					min--;
				}

				Sleep(990);
				system("cls");
				cout << "\n\t\t\t\t      How long until the end of the class.. ";
				cout << "\n\n\t\t\t====================================================== \n" << endl;
				cout << "\n\t\t\t\tHours: " << hr << " - Minutes: " << min << " - Seconds: " << sec << endl;
				cout << "\n\n\t\t\t====================================================== \n" << endl;
			}
		}
	}
	system("cls");
	cout << "\n\n\n\a\a\a\a\a\a\a\a\a\t\t\t\t\t    Class Ends!!!\a\a\a\a\a\a\a\a\a\a" << endl;
	return 0;
}