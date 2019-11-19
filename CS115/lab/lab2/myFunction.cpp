#include "myFunction.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void readArray(int mtrx[row][column], string fName)
{

   ifstream inF;
   int i, j;

   inF.open(fName.c_str());

   for ( i = 0; i < row; i++)    
   {
      for ( j = 0; j < column; j++) 
      {
	 inF >> mtrx[i][j];    
      }
   }  

} // end readArray function

void printArray(int fmtrx[row][column])
{
	cout << "The sum is: " << endl;

	for(int i = 0; i < row; i++)
	{
		for(int n = 0; n < column; n++)
		{
		  cout << fmtrx[i][n] << ' ';
		  }
		cout << endl;
	}
}

void sumArray(int mtrx1[row][column], int mtrx2[row][column],int fmtrx[row][column])
{
	for(int i = 0; i < row; i++)
	{
		for (int n = 0; n < column; n++)
		{
			fmtrx[i][n] = mtrx1[i][n] + mtrx2[i][n];
		}
	}
}
