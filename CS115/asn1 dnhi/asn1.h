#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int row = 10;
const int column = 10;
const int charvaln = 10;

int x;
string mtrxnm = "owmcghweocgmwhecm";
string chs;
string mtrxl[column];
string mtrxcr[row][column];
char mtrxc[row][column];
char charval[charvaln] = {'.', 'o', 'O', '*', '#', '+','/', (','+'0'), '-', '|'};
char dgt[charvaln] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
char charvalt[charvaln] = {'.', 'o', 'O', '*', '#', '+','/', (','+'0'), '|', '-'};
char mtrxct[column][row];
char charvalm[charvaln] = {'.', 'o', 'O', '*', '#', '+', (','+'0'), '/', '-', '|'};
char mtrxc2[row][column];
char mtrxcrt[row][column];

void render(char mtrxc[row][column], char charval[charvaln], char dgt[charvaln]);

void getglyph(string, string mtrxcr[row][column], string mtrxl[column],  char mtrxc[row][column], int);

// void disp(char mtrxc[row][column]);

void transpose(char mtrxc[row][column], char charvalt[charvaln], char dgt[charvaln], char mtrxct[column][row]);

void mirror(char mtrxc[row][column], char mtrxc2[row][column]);

void rotate(char mtrxc[row][column], char mtrxcrt[row][column]);
