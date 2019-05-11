# include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	int num = 5;
	int what;

	what = ++num;

	cout << "num = " << num << endl;
	cout << "++num = " << endl;

	cout << "8 seconds to answer!" << endl;
	cout << "\n" << endl;

	for (int j = 0; j < 8; j++)
	{
		cout << "*";
		Beep(1000, 100);
		Sleep(900);
	}
	cout << "\n" << endl;
	cout << what << endl;
	return 0;
}