// File name: ~ftp/pub/class/170/ftp/cpp/BinarySearch/BinSearch.cpp
// Purpose    implementatin of BinSearch.h

#include "BinSearch.h"
using namespace std;


////////////////////////////////////////////////////////////////////////////
// Function: void GenerateArray(IntArrayType IntArray, int Count)
// Purpose:    Generate an array of random integers in ascending order
// Parameters: IntArray: Array of integers in acending order
//             Count :   The number of integers in the array 
// Return:     None
////////////////////////////////////////////////////////////////////////////
void GenerateArray(IntArrayType IntArray, int Count)
{
   int k;

   srand((unsigned) time(NULL)); // seed the rand() function

   IntArray[0] = rand()%10; // pick a random number as the first value
   for (k = 1; k < Count; k++)
      // make sure the array is in ascending order
      IntArray[k] = IntArray[k - 1] + rand()%10 + 2;
}

////////////////////////////////////////////////////////////////////////////
// Function: void PrintArray(IntArrayType IntArray, int Count)
// Purpose:    printing the array 
// Parameters: IntArray: Array of integers in acending order
//             Count :   The number of integers in the array 
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
   cout << "Tens ||" << setw(60) << setfill('=')<< '|' << endl << setfill(' ');
   
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



////////////////////////////////////////////////////////////////////////////
// Function: 
//     int BinarySearch(IntArrayType IntArray, int Low, int High, int Target)
// Purpose:    search "Target" in an ordered integer array
// Parameters: IntArray: Array of integers in acending order
//             Low:      The starting index
//             High:     The ending index
//             Target:   The integer value to search
// Return:     The index of the value if found
//             -1 if not found
////////////////////////////////////////////////////////////////////////////
int BinarySearch(IntArrayType IntArray, int Low, int High, int Target)
{
   int Mid, Difference;

   while (Low <= High)
   {
      Mid = (Low + High) / 2;
      Difference = IntArray[Mid] - Target;

      if (Difference == 0)         // IntArray[Mid] == Target
         return Mid;
      else if (Difference < 0)     // IntArray[Mid] < Target
         Low = Mid + 1;
      else
         High = Mid - 1;
   }

   return -1;   // If reach here, Target was not found.
}



