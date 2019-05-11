#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
#include <time.h>
#include <Windows.h>
#include <chrono>

using namespace std;
using namespace chrono;
#pragma warning(disable : 4996)
int main()
{

	auto start = system_clock::now();
	auto end = system_clock::now();
	duration <double> elapsed_seconds = end - start;
	time_t end_time = system_clock::to_time_t(end);

	cout << "finished computation at " << std::ctime(&end_time) << "elapsed time: " << elapsed_seconds.count() << "s\n";
	cout << "Elapsed Time: " << elapsed_seconds.count() << "s\n";

	return 0;
}