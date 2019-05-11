# include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	int time = 100;
	for (int frequency = 0; frequency <1000000 ; frequency++)
	{
		Beep(frequency, 50);
		//cout << frequency << " ";
		cout << "*";
	}
	cout << "\n";
	for (int frequency = 1000000; frequency >0; frequency--)
	{
		Beep(frequency, 100);
		//cout << frequency << " ";
		cout << "*";
	}
	return 0;
}