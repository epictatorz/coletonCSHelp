//File name: ~ftp/pub/class/170/ftp/cpp/BinarySearch/SeqSearch.cpp
// Purpose:  Implementation of SeqSearch.h

#include "SeqSearch.h"

using namespace std;

////////////////////////////////////////////////////////////////////
// Function: SeqSearch(IntArrayType IntArray, int Count, int Target) 
// Purpose:  Given an integer array with "Count" number of elements,
//           try to find "Target".  
// Parameters: IntArray: an integer array to hold MAXINDEX elements
//             Count:    number of elements
//             Target:   the integer you are searching for
// Return:     The position of the Target in the array
//             -1 if not found
////////////////////////////////////////////////////////////////////
int SeqSearch(IntArrayType IntArray, int Count, int Target)
{
   int k;

   for (k = 0; k < Count; k++)
      if (IntArray[k] == Target)
         return k;

   return -1;   // If reach here, Target was not found.
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
      IntArray[k] = rand()%1000;
   // Note that rand() returns a random integer between 0 and
   // RAND_MAX.  We use modulo - % - to limit the integer value to a
   // smaller range
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

   //Print header
   cout << "Ones ->";
   for (k = 0; k < 10; k++)
   {
      cout << setw(4) << k << " |";
   }
   cout << endl;
   cout << "Tens ||" << setw(60) << setfill('=') << '|' << endl << setfill(' ');
   
   for (k = 0; k < Count; k++)
   {
      //Label new rows
      if (k % 10 == 0)
         cout << setw(4) << k/10 << " ||";
      
      //Print the array value
      cout << setw(4) << IntArray[k] << " |";

      //End rows
      if (k % 10 == 9)
         cout << endl;   
   }

   cout << endl;
}

