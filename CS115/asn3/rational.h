#include <iostream>
#include <assert>
using namespace std;

// must call getComponents first, then ratnl before any other functions

class rational
{
  long int n1, n2, numer;

  

  int deener = 0;
  
  
  
 public:
  long int ratnl(long int, long int);
  long int add(long int, long int);
  long int subtract(long int, long int);
  long int multiply(long int, long int);
  long int divide(long int, long int);
  bool equal(long int, long int);
  bool less(long int, long int);
  void getComponents(long int, long int&, long int&);
  void print(long int, long int, long int);

  long int gcd(long int a, long int b);
  long int lcm(long int a, long int b);  
}


