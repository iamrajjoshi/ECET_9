#include <iostream>

using namespace std;

int main()
{
	int n;
	int wer = 0;
	cin >> wer;
	for (int i = 0; i < wer; i++)
	{
		cin >> n;
		cout << n << " ";
		int copy = n;
		for (int w = copy; w > 0; w--)
		{
			if (n % w == 0)
				cout << w << " ";
		}
		cout << endl;
	}
	return 0;
}