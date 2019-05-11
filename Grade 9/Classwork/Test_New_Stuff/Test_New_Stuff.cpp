/*

Student Name
Program Purpose

*/

#include <vector>
#include <Windows.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
/*#include <string.h>
#include <time.h>
#include <Windows.h>
#include <iostream>       
#include <thread>     
#include <chrono> 
#include<stdlib.h>
#include <fstream>
#include <mmsystem.h>s
#include<graphics.h>

using namespace std;
int main()
{
	int b, c, gd = DETECT, gm;
	initgraph(&gd, &gm, "c:\\tc\\bgi");


	for (b = 1; b <= 300; b++)
	{

		outtextxy(10, 10, "program loading ....................");


		rectangle(100, 80, 99 + b, 100);


		setcolor(BLUE);
		delay(10);


	}

	closegraph();

	return 0;

}*/
int main()
{

	CURL *curl;
	FILE *fp;
	CURLcode res;
	std::string readBuffer;
	curl = curl_easy_init();
	char outfilename[FILENAME_MAX] = "C:\\Users\\admin\\desktop\\test.txt";
	if (curl) {
		fp = fopen(outfilename, "wb");

		curl_easy_setopt(curl, CURLOPT_URL, "http://www.example.com");
		curl_easy_setopt(curl, CURLOPT_POSTFIELDS, "user=123&pass=123");
		curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1);
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);

		res = curl_easy_perform(curl);
		Sleep(1000);
		curl_easy_cleanup(curl);
		fclose(fp);
	}

	return EXIT_SUCCESS;
}