/*
Raj Joshi
Odd Even
*/

#include <iostream>
using namespace std;

int main()
{
	int n, num;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
			cin >> num;
		if (num % 2 == 0)
			cout << num << " even" << endl;
		else
			cout << num << " odd" << endl;
	}
	return 0;
}