#include <iostream>
#include <string>
#include <cmath>
#include <cassert>
using namespace std;
#include "polynomial.h"

int main()
{
 begin:

  for (int n = 0; n < f; n++)
    {
      cout << "please enter the amount of terms in pollynomial" << n << " : ";
      cin >> T[n];
      cout << endl;
    }

  for (int n = 0; n < f; n++)
    for (int i = 0; i < t[n]; i++)
      {
	cout << endl << "what is the variable of term " << i << " in polynomial " << n + 1 << " ?: ";
											      cin >> nt[i][n].var;
	cout << endl << "what is the coefficient of term " << i << " in polynomial " << n + 1 << " ?: ";
	cin >> nt[i][n].coef;
	cout << endl << "what is the exponent of term " << i << " in polynomial " << n + 1 << " ?: ";
	cin >> nt[i][n].pow;
      }

  polynomial(tn, T);

 opp:
  
  cout << "Available operations: /n" << endl << "Evaluate (A), Simplify/Sort (B), Add (C), Swap (D), Subtract (E), /n Polynomial Multiply (F), Integer Multiply (G), Raise Degree (H), Equal (I), /n Get Degree (J), Get Coefficient (K), Print Polynomial(L) /n" << "NOTE: operation results replace previous polynomials! /n"<< endl;
  cout << "which operation would you like to apply to the polynomials?: ";
  cin >> swt;

  switch(swt)
    {
    case 'A':
      cout << "which polynomial would you like to evaluate (0, 1)?: ";
      cin >> chs;
      cout << endl << "at which value would you like to evaluate polynomial " << chs << " ?:";
      cin >> nmbr;
      cout << "the value of polynomial " << chs << " is " << eval(p, chs) << endl;
    case 'B':
      simpsort();
    case 'C':
      add();
    case 'D':
      swp();
    case 'E':
      cout << "which polynomial would you like to subtract from (0, 1)?: ";
      cin >> chs;
      sub(chs);
    case 'F':
      pmult();
    case 'G':
      cout << "which polynomial would you like to multiply an integer by (0, 1)?: ";
      cin >> chs;
      cout << endl << "which integer would you like to multiply polynomial " << chs << " by?: " << chs << " ?:";
      cin >> nmbr;
      imult(nmbr, chs);
    case 'H':
      cout << "which polynomial would you like to raise the degree of (0, 1)?: ";
      cin >> chs;
      cout << endl << "how much would you like to increasse the degree of the polynomial " << chs << " by?: " << chs << " ?:";
      cin >> nmbr;
      rdeg(nmbr, chs);
    case 'I':
      if (eql())
	cout << "the two polynomials are equal" << endl;
      else
	cout << "the two pollynomials are not equal" << endl;
    case 'J':
      cout << "which polynomial would you like to get the degree of (0, 1)?: ";
      cin >> chs;
      cout << "the degree of polynomial " << chs << " is " << gdeg(chs) << endl;
    case 'K':
      cout << "which polynomial would you like to print (0, 1)?: ";
      cin >> chs;
      printp(chs);
    }

  cout << "would you like to perform another operation to the polynomials (y/n)?: ";
  cin >> chc;
  if (chc == 'y')
    goto opp;
  cout << endl << "would you like to enter new polynomials (y/n)?: ";
  cin >> chc;
  if (chc == 'y')
    goto begin;
  
  return 0;
}
