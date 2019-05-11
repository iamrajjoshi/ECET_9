/*

Raj Joshi
is_num_prime

*/

#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
#include <time.h>
#include <Windows.h>

using namespace std;

int main()
{
	unsigned long long int n;
	cin >> n;
	int prime = 1;
	int result;
	if (n % 2 == 0) //check if even
		prime = 0; //makes it composite
	int y = sqrt(n);
	for (int count = 3; count < (y); count += 2)// Increments by odd numbers
	{
		result = n % count; // check if divisible by count increasing odd numbers
		if (result == 0) //if it is divisible, make it composite
		{
			prime = 0;
			break;
		}
	}
	if (n == 2) //if the number was 2, it is prime
		cout << "The number is prime" << endl;
	if (prime == 1 && !(n == 2)) //if it is prime, and not two (so it doesn't display prime twice)
		cout << "The number is prime" << endl;
	if (prime == 0 && !(n == 2))
		cout << "The number is composite" << endl;
	return 0;
}