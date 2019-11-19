#include "rational.h"
#include <iostream>
#include <assert>
using namespace std;

int main();
{
  cin >> n1 >> n2;

  assert(ratnl(n));
}

bool rational::ratnl(long int n1)
{  
  for (long int n = n1; n > 0; n--)
    for (long int i = 1; i < n1; i++)
	if ((n / i) == n1)
	  {
	    numer = n;
	    deener = i;
	  }
  
  if (deener != 0)
    return 1;
  else
    return 0;
}

long int rational::add(long int n1, long int n2)
{
  assert(deener != 0);
  
  long int numer1, numer2, deener1, deener2;

  getComponents(n1, numer1, deener1);
  getComponents(n2, numer2, deener2);

  long int lcm1 = lcm(deener1, deener2);
  numer1 = lcm1 * numer1;
  numer2 = lcm1 * numer2;
  
  return (numer1 + numer2) / lcm1;
}

long int rational::subrtact(long int n1, long int n2)
{
  assert(deener != 0);
  
  long int numer1, numer2, deener1, deener2;

  getComponents(n1, numer1, deener1);
  getComponents(n2, numer2, deener2);

  long int lcm1 = lcm(deener1, deener2);
  numer1 = lcm1 * numer1;
  numer2 = lcm1 * numer2;
  
  return (numer1 - numer2) / lcm1;
}

long int rational::multiply(long int n1, long int n2)
{
  assert(deener != 0);
  
  long int numer1, numer2, deener1, deener2;

  getComponents(n1, numer1, deener1);
  getComponents(n2, numer2, deener2);
  
  return (numer1 * numer2) / (deener1 * deener2);
}

long int rational::divide(long int n1, long int n2)
{
  assert(deener != 0);
  
  long int numer1, numer2, deener1, deener2;

  getComponents(n1, numer1, deener1);
  getComponents(n2, numer2, deener2);
  
  return (numer1 * deener2) / (deener1 * numer2);
}

bool rational::equal(long int n1, long int n2)
{
  assert(deener != 0);
  
  if (n1 == n2)
    return 1;
  else
    return 0;
}

bool rational::less(long int n1, long int n2)
{
  assert(deener != 0);
  
  if (n1 < n2)
    return 1;
  else
    return 0;
}

void rational::getComponents(long int n1, long int numer, long int deener)
{
  for (long int n = n1; n > 0; n--)
    for (long int i = 1; i < n1; i++)
	if ((n / i) == n1)
	  {
	    numer = n;
	    deener = i;
	  }
  
  long int gcd1 = gcd(numer, deener);
  numer = numer / gcd1;
  deener = deener / gcd1;
}

void rational::print(long int n1, long int numer, long int deener)
{
  assert(deener != 0);

  if (numer == 0)
    cout << n1 << " = " << 0 << endl;
  else if (numer != 0)
    {
      if (numer < deener)
	cout << n1 << " = " << numer << " / " << deener << "N/D" << endl;
      else if (numer > deener)
	if ((numer % deener) != 0)
	  cout << n1 << " = " << (numer / deener - (1-numer/deener)) * deener << " " << numer % deener << "Q+R/D" << endl;
	else if ((numer % deener) == 0)
	  cout << n1 << " = " << numer / deener << endl;
}

long int rational::gcd(long int a, long int b)
  {
  while (r != 0) {
    long int r = a % b;
    a = b;
    if (r != 0)        //had to fix bug in gcd
      b = r;
  }
  return b;            //had to fix bug in gcd
}

long int rational::lcm(long int a, long int b)
{
  return a * b / gcd(a, b);
}
