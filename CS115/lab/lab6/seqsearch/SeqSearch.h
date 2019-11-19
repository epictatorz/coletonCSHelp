// File name: ~ftp/pub/class/170/ftp/cpp/BinarySearch/SeqSearch.h
// Purpose:   Interface for SeqSearch.cpp

#include <iostream>
#include <iomanip>  // needed by setw
#include <cstdlib>  // needed for random number generator
#include <ctime>    // used to seed random numbers

using namespace std;

const int MAXINDEX = 100;  

 // define a type with the name IntArrayType
 // when we need to declare an int array with MAXINDEX elements,
 // we could simple write: IntArrayType IntArray;
 // IntArray is big enough to hold MAXINDEX integers.
typedef int IntArrayType[MAXINDEX];

////////////////////////
// Function prototypes:
////////////////////////

int SeqSearch(IntArrayType IntArray, int Count, int Target);

void GenerateArray(IntArrayType IntArray, int Count);

void PrintArray(IntArrayType IntArray, int Count);



