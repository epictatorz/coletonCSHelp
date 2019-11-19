// File name: ~ftp/pub/class/170/ftp/cpp/BinarySearch/BinSearch.h
// Purpose:   interface for BinSearch.cpp

#include <iostream>
#include <iomanip>   // needed for setw
#include <cstdlib>   // needed for random number generator
#include <ctime>     // used to seed random numbers

using namespace std;


const int MAXINDEX = 100;

typedef int IntArrayType[MAXINDEX];


// Function prototypes:

int BinarySearch(IntArrayType IntArray, int Low, int High, int Target);

void GenerateArray(IntArrayType IntArray, int Count);

void PrintArray(IntArrayType IntArray, int Count);


