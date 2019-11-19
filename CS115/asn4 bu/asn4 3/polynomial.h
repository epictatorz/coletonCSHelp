#include <iostream>
#include <string>
#include <cmath>
#include <cassert>
using namespace std;

#ifndef polynomial_h
#define polynomial_h

const int tms = 65535;

struct term
{
  int coef;
  string var;
  int pow;
};

int T[tms], chs, nmbr;
const int f = 1;
term tn[tms][f];
char swt, chc;
  
class polynomial
{
 public:

  /*
    Default Constructor

    Purpose: initializes all arrays to their NULL states
    Arguments: n/a
    Side Effects: arrays are initialized to their NULL states
    Return: n/a  
  */
  
  polynomial();

  /*
    Constructor

    Purpose: initializes array to specified values (for input polynomials)
    Arguments: 
     T[tms]: size of polynomials
     tn[tms][f]: polynomials (maximum polynomials: 2)
    Preconditions: x < tms (the mximum size of the array
    Side Effects: Arrays are initialized  their specified values (for input polynomials)
    Return: n/a
  */
  polynomial(term tn[tms][f], int T[tms]);

  /*
    Get Polynomial

    Purpose: sets an array (supplied as argument) to the value of the member array
    Arguments:
     tn[tms][f]: array to be filled with the new values from the member array
    Preconditions: polynomials have been entered
    Side effects: external array is reassigned the value of the internal (member) array
    Return: n/a
  */
  void getpol(term[tms][f]);

  /*
    Evaluate

    Purpose: solve the polynomial at a specified value
    Arguments:
     nmbr: the value to be input into the polynomial for solving
     chc: choice of polynomial to evaluate
    Preconditions: polynomials have been entered
    Side Effects: n/a
    Return: value of polynomial at specified point
  */
  int eval(int, int) const;

  /*
    Simplify / Sort (simpsort())

    Purpose: to simplify (combine like terms), rearange (the terms) in decending order, and to place adequite blank spaces in the arrays betweenthe terms so that they are indexed according to their respective powers and aligned with each other (the two polynomials), this allows for far simpler functions in the rest of the program
    Arguments: n/a
    Preconditions: polynomials have been entered
    Side Effects: like terms are combined, terms are arranged in decending order, terms are spaced out to leave room for "0" coefficients
    Return: n/a
  */
  void simpsort();

  /*
    Add

    Purpose: to add 2 polynomials together
    Arguments: n/a
    Preconditions: polynomials have been entered
    Side Effects: adds 2 polynomials together, first dimension of t[tms][f] array is replaced by the sum of the 2 previos polynomials stored in this 2D array, xt[tms][f] is also now equal to t[tms][f]
    Return: n/a
  */
  void add();

  /*
    Swap

    Purpose: swaps the 2 pollynomials in the t[tms][f] array
    Arguments: n/a
    Preconditions: Polynomials have been entered
    Side effects: the 2 value sets in the t[tms][f] array (from the second f dimension) are swapped
    Return: n/a
  */
  void swp();

  /*
    Subtract

    Puprose: subtracts one polynomial from another (which one is specified)
    Arguments:
     chs: specifies which polynomial will be subtracted from the other
    Preconditions: polynomials have been entered, choice has been entered
    Side Effects: subtracts one polynomial from the other, first dimension of t[tms][f] array is replaced by the result
    Return: n/a
  */
  void sub(int);

  /*
    Polynomial Multiply

    Purpose: multiplies 2 polynomials with eath other
    Arguments: n/a
    Preconditions: polynomials have been entered
    Side Effects: first dimension of t[tms][f]  is replaced by the product of the previous 2 polynomials that were stored in the 2 dimensions
    Return: n/a
  */
  void pmult();

  /*
    Integer Multiply

    Purpose: multiplies a chosen polynomial with a specified integer
    Arguments:
     nmbr: the integer to be multiplied with the chosen polynomial
     chs: the choice of polynomial
    Preconditions: polynomials have been entered, choice has been entered
    Side effects: chosen polynomial from t[tms][f] is replaced with the product of it with the specified integer
    Return: n/a
  */  
  void imult(int, int);

  /*
    Raise Degree

    Purpose: to raise the degree of a polynomial
    Arguments:
     nmbr: the specified amount that the degree of the polynomial will be raised by
     chs: the choice of polynomial to apply the function to
    Preconditions: polynomials have been entered, choice has been entered
    Side Effects: chosen polynomial from t[tms][f] is replaced by its self with the increased degree
    Return: n/a
  */
  void rdeg(int, int);

  /*
    Equal

    Purpose: to determine if two polynomials are equal to each other
    Arguments: n/a
    Preconditions: polynomials have been entered
    Side effects: n/a
    Return: true/false (whether or not the polynomials are equal)
  */
  bool eql();

  /*
    Get Degree
    
    Purpose: returns the degree of the polynomial
    Arguments:
     chs: choice of polynomial to find the degree of
     Preconditions: polynomials have been entered, choice has been entered
    Side Effects: n/a
    return: integer value of degree (of polynomial)
  */
  int gdeg(int);

  /*
    Get Coefficient

    Purpose: returns the coefficient of the specified term (by exponent)
    Arguments:
     nmbr: specifes which term the coefficient is to be foun for
     chs: specifies which polynomial will be used
    Preconditions: polynomials have been entered, choice has been entered
    Side Effects: n/a
    Return: requested coefficent of specified term (as int value)
  */
  int gcoef(int, int);

  /*
    Print Polynomial

    Purpose: prints the specified polynomial in a user friendly format
    Arguments:
     chs: specifies which polynomial is to be used
    Preconditions: polynomials have been entered, choice has been entered
    Side Effects: n/a
    Return: n/a
  */
  void printp(int);

  ~polynomial();

 private:
  term t[tms][f], xt[tms][f];
};

#endif
