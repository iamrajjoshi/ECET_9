#include <iostream>
using namespace std;

int main()
{
	int n;
	int m;
	cin >> n;

	for (int x = 0; x < n; x++)
	{
		cin >> m;

		if (m == 1)
			cout << m << " January" << endl;

		else if (m == 2)
			cout << m << " February" << endl;

		else if (m == 3)
			cout << m << " March" << endl;

		else if (m == 4)
			cout << m << " April" << endl;

		else if (m == 5)
			cout << m << " May" << endl;

		else if (m == 6)
			cout << m << " June" << endl;

		else if (m == 7)
			cout << m << " July" << endl;

		else if (m == 8)
			cout << m << " August" << endl;

		else if (m == 9)
			cout << m << " September" << endl;

		else if (m == 10)
			cout << m << " October" << endl;

		else if (m == 11)
			cout << m << " November" << endl;

		else if (m == 12)
			cout << m << " December" << endl;

		else if (m < 1)
			cout << m << " Invalid" << endl;

		else if (m > 12)
			cout << m << " Invalid" << endl;
	}
	return 0;
}