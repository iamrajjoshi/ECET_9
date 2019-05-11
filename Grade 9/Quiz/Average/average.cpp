/*

Raj Joshi
Average

*/

#include <iostream>

using namespace std;

int main()
{
	int N;
	int M;
	float sum = 0;
	float average = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> M;
		sum = sum + M;
	}
	average = sum / N;
	cout << "The average is: " << average << endl;
	cin >> N;// Just so that you can see what the output is (I a rushing so I did this but this isn't how you should actually do it)
	return 0;
}