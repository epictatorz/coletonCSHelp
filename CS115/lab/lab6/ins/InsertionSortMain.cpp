// File name: ~ftp/pub/class/170/ftp/cpp/SelectionSort/SelMain.cpp
// Purpose:   Driver program for selection sort
#include "SelSort.h"

using namespace std;

int main(void)
{
   IntArrayType IntArray;

   GenerateArray(IntArray, MAXINDEX); // generate 100 random integers

   cout << "Here is the content of the array: " << endl;
   PrintArray(IntArray, MAXINDEX);

   // Sort IntArray in descending order using selection sort algorithm
   SelSort(IntArray, MAXINDEX);

   cout << "Here is the content of the array sorted in "
	<< "descending order using the\nselection sort algorithm: " << endl;
   PrintArray(IntArray, MAXINDEX);

   return 0;
}

