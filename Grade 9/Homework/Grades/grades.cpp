#include <iostream>
using namespace std;

float average(float[], int);
float highest(float[], int);
float lowest(float[], int);
int pass(float[], int);
void Histogram(float[], int);

int main()
{
	
	float grades[30];
	float grade;
	int num;
	do
	{
		cout << endl << "Enter number of the students: ";
		cin >> num;
	} while (num <= 0 || num > 30);
	for (int i = 0; i < num; i++)
	{
		do
		{
			cout << endl << "Enter a grade within 0 and 100: ";
			cin >> grade;
		} while (grade < 0 || grade > 100);
		grades[i] = grade;
	}
	float mean;
	float Highest;
	float Lowest;
	int Pass;
	int Fail;
	mean = average(&grades[0], num);
	cout << "The average grade is: " << mean << endl;
	Highest = highest(&grades[0], num);
	cout << "The highest grade is: " << Highest << endl;
	Lowest = lowest(&grades[0], num);
	cout << "The lowest grade is: " << Lowest << endl;
	Pass = pass(&grades[0], num);
	Fail = num - Pass;
	cout << "Number of Students Passed: " << Pass << endl << "Number of Student Failed: " << Fail << endl;
	Histogram(&grades[0], num);
}

float average(float data[], int students)
{
	float sum = 0;
	for (int i = 0; i < students; i++)
	{
		sum += data[i];
	}
	return sum / students;
}
float highest(float data[], int students)
{
	float highest = data[0];
	for (int i = 1; i < students; i++)
	{
		if (data[i] > highest)
		{
			highest = data[i];
		}
	}
	return highest;
}
float lowest(float data[], int students)
{
	float lowest = data[0];
	for (int i = 1; i < students; i++)
	{
		if (data[i] < lowest)
		{
			lowest = data[i];
		}
	}
	return lowest;
}
int pass(float data[], int students)
{
	int pass = 0;
	for (int i = 0; i < students; i++)
	{
		if (data[i] > 65)
		{
			pass = pass + 1;
		}
	}
	return pass;
}
void Histogram(float data[], int students)
{
	cout << "0-10: ";
	for (int i = 0; i < students; i++)
	{
		if (data[i] > -1 && data[i] < 11)
		{
			cout << "*";
		}
	}
	cout << endl;
	cout << "11-20: ";
	for (int i = 0; i < students; i++)
	{
		if (data[i] > 10 && data[i] < 21)
		{
			cout << "*";
		}
	}
	cout << endl;
	cout << "21-30: ";
	for (int i = 0; i < students; i++)
	{
		if (data[i] > 20 && data[i] < 31)
		{
			cout << "*";
		}
	}
	cout << endl;
	cout << "31-40: ";
	for (int i = 0; i < students; i++)
	{
		if (data[i] > 30 && data[i] < 41)
		{
			cout << "*";
		}
	}
	cout << endl;
	cout << "41-50: ";
	for (int i = 0; i < students; i++)
	{
		if (data[i] > 40 && data[i] < 51)
		{
			cout << "*";
		}
	}
	cout << endl;
	cout << "51-60: ";
	for (int i = 0; i < students; i++)
	{
		if (data[i] > 50 && data[i] < 61)
		{
			cout << "*";
		}
	}
	cout << endl;
	cout << "61-70: ";
	for (int i = 0; i < students; i++)
	{
		if (data[i] > 60 && data[i] < 71)
		{
			cout << "*";
		}
	}
	cout << endl;
	cout << "71-80: ";
	for (int i = 0; i < students; i++)
	{
		if (data[i] > 70 && data[i] < 81)
		{
			cout << "*";
		}
	}
	cout << endl;
	cout << "81-90: ";
	for (int i = 0; i < students; i++)
	{
		if (data[i] > 80 && data[i] < 91)
		{
			cout << "*";
		}
	}
	cout << endl;
	cout << "91-100: ";
	for (int i = 0; i < students; i++)
	{
		if (data[i] > 90)
		{
			cout << "*";
		}
	}
	cout << endl;
}