#include <string>
#include <fstream>
#include <iostream>

using namespace std;

const int row = 4;
const int column = 5;

void sumArray(int mtrx1[row][column], int mtrx2[row][column], int fmtrx[row][column]);

void readArray(int mtrx[row][column], string);

void printArray(int fmtrx[row][column]);
