// File name:  ~ftp/pub/class/170/ftp/cpp/BinarySearch/BinMain.cpp
// Purpose:    Driver program for binary search program

#include "BinSearch.h"
using namespace std;

int main(void)
{
   IntArrayType IntArray;
   int Num, Pos;

   GenerateArray(IntArray, MAXINDEX); // generate sorted integer array

   cout << "The contents of the array are: " << endl;
   PrintArray(IntArray, MAXINDEX);

   cout << "Enter the integer to search for: " << endl;
   cin >> Num;

   Pos = BinarySearch(IntArray, 0, MAXINDEX - 1, Num);

   if(Pos == -1)
	cout << "Not found" << endl;

   else
	cout << "Number " << Num << " found in Position " << Pos << endl;

   return 0;
}


