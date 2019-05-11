# include <iostream>

using namespace std;

int main()
{
	cout << "Integer: " << sizeof(int) << endl; //4
	cout << "Unsigned Integer: " << sizeof(unsigned int) << endl; //4
	cout << "Character: " << sizeof(char) << endl; //1
	cout << "Float: " << sizeof(float) << endl; //4
	cout << "Double: " << sizeof(double) << endl; //8
	cout << "Long: " << sizeof(long) << endl; //4
	cout << "Short: " << sizeof(short) << endl; //2
	cout << "Unsigned Short: " << sizeof(unsigned short) << endl; //2
	cout << "Bool: " << sizeof(bool) << endl; //1
}