#include <iostream>
#include <string>
#include <cmath>
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

int T[tms];
const int f = 1;
term tn[tms][f];
  
class polynomial
{
 public:
  polynomial();
  polynomial(term[tms][f], int);
  void getpol(term[tms][f]);
  int eval();
  void simpsort();             //must be called before other functions
  void add();
  void swp();
  void sub(char);
  void pmult();
  void imult(int, int); /*
  void rdeg();
  void eql();
  void gdeg();
  void gcoef();
  void printp(); */

  ~polynomial();

 private:
  term t[tms][f], xt[tms][f];
};

#endif
