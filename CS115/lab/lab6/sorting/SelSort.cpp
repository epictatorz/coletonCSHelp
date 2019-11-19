//File name: ~ftp/pub/class/115/ftp/cpp/SelectionSort/SelSort.cpp
// Purpose:  Implementation of Selection Sort

#include "SelSort.h"

using namespace std;


////////////////////////////////////////////////////////////////////
// Function: SelSort(IntArrayType IntArray, int Count)
// Purpose:  Given an integer array with "Count" number of elements,
//           sort the elements in ascending order
// Parameters: IntArray: an integer array to hold MAXINDEX elements
//             Count:    number of elements
// Return:     None
////////////////////////////////////////////////////////////////////
void SelSort(IntArrayType IntArray, int Count)
{
   int search_index, search_max, temp;

   for (int current_index = 0; current_index < Count; current_index++)
   {
      search_max = current_index;

      // Find index of largest element in unsorted section of elements
      for(search_index = current_index + 1; search_index < Count; search_index++)
	 if(IntArray[search_max] > IntArray[search_index])
	    search_max = search_index;

      // Exchange items at position search_max and current_index
      if (search_max > current_index)
      {
	 temp = IntArray[search_max];
	 IntArray[search_max] = IntArray[current_index];
	 IntArray[current_index] = temp;
      }
   }
}

//////////////////////////////////////////////////////////////////////
// Function: void GenerateArray(IntArrayType IntArray, int Count);
// Purpose:  Given "Count", generate "Count" number of random integers
//           and put them in IntArray
// Parameters: IntArray: an integer array to hold MAXINDEX elements
//             Count:    number of elements in the array
// Return:     None
//////////////////////////////////////////////////////////////////////
void GenerateArray(IntArrayType IntArray, int Count)
{
   int k;

   srand((unsigned) time(NULL));  // seed the random number generator

   for (k = 0; k < Count; k++)
      IntArray[k] = rand() % 1000;
}

////////////////////////////////////////////////////////////////////////////
// Function: void PrintArray(IntArrayType IntArray, int Count);
// Purpose:  Print out the content of "IntArray"
// Parameters: IntArray: an integer array to hold MAXINDEX elements
//             Count:    number of elements in the array
// Return:     None
////////////////////////////////////////////////////////////////////////////
void PrintArray(IntArrayType IntArray, int Count)
{
   int k;

   for (k = 0; k < Count; k++)
   {
      cout << setw(5) << IntArray[k];
      if (k % 10 == 9)   // check the remainder after division by 10
         cout << endl;
   }

   cout << endl;
}
