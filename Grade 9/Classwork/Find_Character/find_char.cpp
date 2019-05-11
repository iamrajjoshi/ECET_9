#include <iostream>
using namespace std;
int main()
{
	char word[80], test;
	cout << "Enter a string: "; 
	cin.getline(word, 80);
	cout << "Enter character to be found: ";
	cin >> test;
	for (int count = 0; word[count] != '\0'; count++)
		if (word[count] == test)
			cout << "Found " << test << " at position " << count + 1 << endl;
	return 0;
}