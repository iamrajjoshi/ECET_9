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
		int copy = n;
		int prime = 1;
		float result;
		if (n % 2 == 0) //check if even
			prime = 0; //makes it composite
		for (int count = 3; count < n; count += 2)//start at 3, go up every odd number
		{
			result = n % count;  //check if divisible by count(increasing odd numbers
			if (result == 0) //if it is divisible, make it composite
			{
				prime = 0;
				break;

			}
		}
		if (n == 2)// if the number was 2, it is prime
			cout << copy << " The number is prime" << endl;
		else if (prime == 1)// if it is prime, and not two(so it doesn't display prime twice)
			cout << copy << " The number is prime" << endl;
		else if (prime == 0)
			cout << copy << " The number is not prime" << endl;
	}
	return 0;
}