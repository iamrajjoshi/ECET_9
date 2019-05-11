/*

	Raj Joshi
	Reimann_Sum Algorithm

*/


#include <iostream>
using namespace std;

int main()
{

	float lower_lim, upper_lim;
	int n;
	double area = 0, width, x;

	cout << "What is the lower limit" << endl;
	cin >> lower_lim;
	cout << "What is the upper limit" << endl;
	cin >> upper_lim;
	cout << "How many sub-rectangles do you want?" << endl;
	cin >> n;
	
	width = (upper_lim - lower_lim) / n;
	for (x = lower_lim; x <= (upper_lim - width); x += width)
		area += (x * x * width);

	cout << "Your area is: " << area << endl;
}