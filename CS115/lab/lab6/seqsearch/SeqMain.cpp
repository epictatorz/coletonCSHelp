// File name: ~ftp/pub/class/170/ftp/cpp/BinarySearch/SeqMain.cpp
// Purpose:   Driver program for sequential search
#include "SeqSearch.h"

using namespace std;

int main(void)
{
   IntArrayType IntArray;
   int Num, Position;

   GenerateArray(IntArray, MAXINDEX); // gengerate 100 random integers

   cout << "Here is the content of the array: " << endl;
   PrintArray(IntArray, MAXINDEX);

   cout << "Enter the number to search for: ";
   cin >> Num;

   // Search the IntArray for Num and return its position
   Position = SeqSearch(IntArray, MAXINDEX, Num);

   if (Position == -1)  // not found
      cout << "Cannot find " << Num << "." << endl;
   else
      cout << "Found " << Num << " in position " << Position << ".\n";

   return 0;
}




