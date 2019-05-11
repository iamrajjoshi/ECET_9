/*

Student Name
Program Purpose

*/

#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
#include <time.h>
#include <Windows.h>
#include <iostream>       
#include <thread>     
#include <chrono> 
#include<stdlib.h>

using namespace std;

int main()
{
	int n;
	int rem;
	int dec = 0;
	int i = 1;
	cin >> n;
	while (n != 0)
	{
		rem = n % 10;
		dec += (rem * i);
		i = i * 2;
		n = n / 10;
	}
	cout << dec << endl;

	return 0;
}