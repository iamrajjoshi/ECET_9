#include <iostream>
using namespace std;

bool checkpal(char[], int);
int checklength(char[]);
int main()
{
	char input[100];
	bool test = true;
	int l;
	cout << "Enter a string: ";
	cin.getline(input, 100);
	l = checklength(input);
	//cout << l;
	test = checkpal(input, l);
	if (test == true)
		cout << "Palindrome" << endl;
	else
		cout << "Not Palindrome" << endl;
	return 0;
}

int checklength(char input[])
{
	int r;
	for (r = 0; input[r] != '\0'; r++);
	return r -1;
}

bool checkpal(char input[], int len)
{
	int j = 0;
	char copy[100];
	for (int i = len; i >= 0; i--)
	{
		copy[j] = input[i];
		//cout << copy[j] << endl;
		j++;
	}
	for (int i = 0; i < len; i++)
		//cout << copy[i] << " " << input[i] << endl;
		if (copy[i] != input[i])
			return false;
	return true;
}