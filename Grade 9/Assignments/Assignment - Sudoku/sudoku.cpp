/*

Raj Joshi
Sudoku Solver


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

using namespace std;

int main()
{

	return 0;
}*/
#include <iostream>
#include <string>


using namespace std;
int answers = 4;
int cells[4][4][5];
void storeNumbers()
{
	cout << "Enter the numbers starting at the top left and going right" << endl;
	//for (int count = 0, row = 0, column = 0; count < 16; count++)
	//{		
	//	cin >> cells[row][column][0];
	//	column++;
	//	if (column % 4 == 0)
	//	{
	//		row++;
	//		column = 0;			
	//	}
	//}
	for (int row = 0; row < 4; row++)
		for (int col = 0; col < 4; col++)
			cin >> cells[row][col][0];
}
void boxElimination(int row, int column, int value)
{
	//int tempRow = row //used to change location of cell being modified
	//int tempColumn = column; // used to change location of cell being modified
	//for (;tempRow < row + 1)
	if (cells[row][column][0] == 0)
	{
		cells[row][column][value] = NULL;
	}
	column++;

	if (cells[row][column][0] == 0)
	{
		cells[row][column][value] = NULL;
	}
	row++;

	if (cells[row][column][0] == 0)
	{
		cells[row][column][value] = NULL;

	}
	column--;

	if (cells[row][column][0] == 0)
	{
		cells[row][column][value] = NULL;
	}
}
void fillPossible()
{
	for (int row = 0; row < 4; row++)
		for (int column = 0; column < 4; column++)
			for (int possible = 1; possible < 5; possible++)
				if (cells[row][column][0] == 0)
					cells[row][column][possible] = possible;
}
void boxCheck(int cornerR, int cornerC)
{
	int acornerR = cornerR; //modifiable box value (row)
	int acornerC = cornerC; //modifiable box value (column)
	int temp;

	if (!(cells[acornerR][acornerC][0] == 0)) //checks if top left
	{
		temp = cells[acornerR][acornerC][0]; //stores that value that has been provided
		boxElimination(cornerR, cornerC, temp); //eliminates that possibility
	}

	acornerC++; //move to the right
	if (!(cells[acornerR][acornerC][0] == 0)) //checks top right
	{
		temp = cells[acornerR][acornerC][0]; //stores that value that has been provided
		boxElimination(cornerR, cornerC, temp); //eliminates that possibility
	}
	acornerR++; //move down
	if (!(cells[acornerR][acornerC][0] == 0)) //checks bottom right
	{
		temp = cells[acornerR][acornerC][0]; //stores that value that has been provided
		boxElimination(cornerR, cornerC, temp); //eliminates that possibility
	}
	acornerC--;//move left
	if (!(cells[acornerR][acornerC][0] == 0)) //checks bottom left
	{
		temp = cells[acornerR][acornerC][0]; //stores that value that has been provided
		boxElimination(cornerR, cornerC, temp); //eliminates that possibility
	}

}
void columnElimination(int row, int column, int value)
{
	for (int row = 0; row < 4; row++)
	{
		if (cells[row][column][0] == 0)
		{
			cells[row][column][value] = NULL;
		}
	}
}
void columnCheck(int row, int column)
{
	int temp;
	for (int count = 0, row = 0; count < 4; count++, row++)
	{
		if (!(cells[row][column][0] == 0))
		{
			temp = cells[row][column][0];
			columnElimination(row, column, temp);
		}
	}
}
void rowElimination(int row, int column, int value)
{
	for (int column = 0; column < 4; column++)
	{
		if (cells[row][column][0] == 0)
		{
			cells[row][column][value] = NULL;
		}
	}
}
void rowCheck(int row, int column)
{
	int temp;
	for (int count = 0, column = 0; count < 4; count++, column++)
	{
		if (!(cells[row][column][0] == 0))
		{
			temp = cells[row][column][0];
			rowElimination(row, column, temp);
		}
	}
}
void debugPrint()
{
	for (int count = 0, column = 0, row = 0, depth = 0; count < 4; count++)
	{
		for (int counter = 0; counter < 4; counter++)
		{
			cout << cells[row][column][depth] << "\t";
			column++;
		}
		cout << endl;
		column = 0;
		depth++;
		for (int counter = 0; counter < 4; counter++)
		{
			cout << cells[row][column][depth] << "\t";
			column++;
		}
		cout << endl;
		column = 0;
		depth++;
		for (int counter = 0; counter < 4; counter++)
		{
			cout << cells[row][column][depth] << "\t";
			column++;
		}
		cout << endl;

		column = 0;
		depth++;
		for (int counter = 0; counter < 4; counter++)
		{
			cout << cells[row][column][depth] << "\t";
			column++;
		}
		depth++;

		column = 0;
		cout << endl;
		for (int counter = 0; counter < 4; counter++)
		{
			cout << cells[row][column][depth] << "\t";
			column++;
		}
		cout << endl << endl;
		column = 0;
		depth = 0;
		row++;
	}
}
void check()
{
	boxCheck(0, 0); //will eliminate possibilites based on box location
	boxCheck(0, 2);
	boxCheck(2, 0);
	boxCheck(2, 2);
	columnCheck(0, 0); // will eliminate possibilites based on column location
	columnCheck(0, 1);
	columnCheck(0, 2);
	columnCheck(0, 3);
	rowCheck(0, 0);
	rowCheck(1, 0);
	rowCheck(2, 0);
	rowCheck(3, 0);
}
void checkAnswer()
{
	int counter = 0;
	int depth;
	for (int count = 0, temp = 0, row = 0, column = 0; count < 16; count++)
	{
		if (cells[row][column][0] == 0)
		{
			counter = 0;
			depth = 0;
			for (int counting = 0; counting < 5; counting++)
			{
				if (!(cells[row][column][counting] == 0))
				{
					counter++;
					depth = counting;
				}
			}
			if (counter == 1)
			{
				cells[row][column][0] = depth;
				answers++;
			}
		}
		column++;
		if (column % 4 == 0)
		{
			row++;
			column = 0;
		}
	}
}
void printAnswer()
{

	for (int count = 0, row = 0, column = 0; count < 16; count++)
	{
		cout << cells[row][column][0] << " ";
		column++;
		if (column % 4 == 0)
		{
			row++;
			column = 0;
			cout << endl;
		}
	}

}
int main()
{
	storeNumbers(); //all numbers have been stored
	cout << endl << endl;
	cout << "Answer is:" << endl;
	fillPossible(); //possiblities filled in
	check();
	checkAnswer();
	while (1)
	{
		check();
		checkAnswer();
		if (answers == 16)
			break;
	}
	printAnswer();

}