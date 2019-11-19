#ifndef _MATRIX_H_
#define _MATRIX_H_

const int MAXROWS=2;
const int MAXCOLS=3;

template <typename T>
class Matrix
{
  private:
   T doubleArray[MAXROWS][MAXCOLS];
   int rows;
   int cols;

  public:
   //Constructor
   Matrix();  //Set rows to MAXROWS and cols to MAXCOLS
	      //Initialize all the values of doubleArray to zero
    
   //Getter Functions
   void printMatrix(); 

   //Setter Functions
   void setMatrix(T [][MAXCOLS]); //set the doubleArray to what is sent
   void addMatrix(T [][MAXCOLS]); //add an array to doubleArray
   void addMatrix(Matrix otherMatrix);

   //No destructor needed
};

#endif
#include "matrix.cpp"
