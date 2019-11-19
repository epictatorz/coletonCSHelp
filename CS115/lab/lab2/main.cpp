#include "myFunction.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	int mtrx1[row][column];
	int mtrx2[row][column];
	int fmtrx[row][column];
	string arry1i, arry2i;

	cout << "Please enter the name of the file containing data for Array 1: " << endl;
	cin >> arry1i;
	
	readArray(mtrx1, arry1i);

	cout << "Please enter the name of the file containing data for Array 2: " << endl;
	cin >> arry2i;
	
	readArray(mtrx2, arry2i);

	sumArray(mtrx1, mtrx2, fmtrx);

	printArray(fmtrx);
	
	return 0;
}
