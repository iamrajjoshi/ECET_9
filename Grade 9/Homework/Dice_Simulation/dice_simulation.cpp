#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
#include <time.h>
#include <Windows.h>
#include <chrono>
//this is a comment
using namespace std;
using namespace chrono;
#define ROLL 2000000000
int main()
{

	auto start = system_clock::now();
	
	srand(time(NULL));
	int value[6] = { 0 };
	int num = 0;
	for (int count = 0; count < ROLL; count++)
	{
		num = rand() % 6 + 1;
		//cout << num;
		switch (num)
		{
		case 1:
		{
			value[0]++;
			break;
		}
		case 2:
		{
			value[1]++;
			break;
		}
		case 3:
		{
			value[2]++;
			break;
		}
		case 4:
		{
			value[3]++;
			break;
		}
		case 5:
		{
			value[4]++;
			break;
		}
		case 6:
		{
			value[5]++;
			break;
		}
		default:
		{
			cout << "Error" << endl;
			break;
		}
		}

	}
	cout << " One: " << value[0] << endl;
	cout << " Two: " << value[1] << endl;
	cout << " Three: " << value[2] << endl;
	cout << " Four: " << value[3] << endl;
	cout << " Five: " << value[4] << endl;
	cout << " Six: " << value[5] << endl;
	auto end = system_clock::now();
	duration <double> elapsed_seconds = end - start;
	//time_t end_time = std::chrono::system_clock::to_time_t(end);

	//cout << "finished computation at " << std::ctime(&end_time) << "elapsed time: " << elapsed_seconds.count() << "s\n";
	cout << "Elapsed Time: " << elapsed_seconds.count() << "s\n";
	
	return 0;
}