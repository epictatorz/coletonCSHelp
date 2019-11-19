#include "polynomial.h"

polynomial::polynomial()
{
  for (int n = 0; n <= f; n++)
    for (int i = 0; i < tms; i++)
      {
	t[i][n].coef = 0;
	t[i][n].var = "";
	t[i][n].pow = 0;

	xt[i][n].coef = 0;
	xt[i][n].var = "";
	xt[i][n].pow = 0;
      }
}

polynomial::polynomial(term tn[tms][f], int x)
{
  for (int n = 0; n <= f; n++)
    for (int i = 0; i < x; i++)
      {
	t[i][n].coef = tn[i][n].coef;
	t[i][n].var = tn[i][n].var;
	t[i][n].pow = tn[i][n].pow;
	T[n]++;
      }
}

void polynomial::getpol(term tn[tms][f])
{
  for (int n = 0; n <= f; n++)
    for (int i = 0; i < T[n]; i++)
      {
	tn[i][n].coef = t[i][n].coef;
	tn[i][n].var = t[i][n].var;
	tn[i][n].pow = t[i][n].pow;
      }
}

polynomial::~polynomial()
{
  
}

// eval() only works with first of 2 polynomials

int polynomial::eval()
{
  int d;
  double fval = 0;
  
  cout << "At which value would you like to evaluate the polynomial?"<< endl;
  cin >> d;
  //for (int n = 0; n <= f; n++)
    for (int i = 0; i < T[0] ; i++)
        fval += ((pow(d, t[i][0].pow)) * t[i][0].coef);
  
  return fval;
}

void polynomial::simpsort()
{
  int d = 0;
  int e1, e0;
  
  for (int n = 0; n <= f; n++)             //combines like terms
    for (int z = 0; z < T[n]; z++)
      for (int i = 0; i < T[n]; i++)
	if (t[z][n].pow = t[i][n].pow)
	  t[z][n].coef += t[i][n].coef;

  for (int n = 0; n <= f; n++)             //rearanges in decending order
    for (int z = 0; z < T[n]; z++)
      for (int i = 0; i < T[n]; i++)
	{
	  if (t[d][n].pow > t[i][n].pow)
	    {
	      d = z;
	      xt[z][n] = t[d][n];
	    }
	  else
	    {
	      d = i;
	      xt[z][n] = t[d][n];
	    }
	}

  for (int n = 0; n <= f; n++)           //equates polynomial set
    for (int z = 0; z < T[n]; z++)
      t[z][n] = xt[z][n];

  if (t[0][0].pow > t[0][1].pow)
    {
      e1 = t[0][0].pow - t[0][1].pow;
      e0 = 0;
    }
  else if (t[0][0].pow < t[0][1].pow)
    {
      e0 = t[0][1].pow - t[0][0].pow;
      e1 = 0;
    }
  else
    {
      e0 = 0;
      e1 = 0;
    }
       
  
  for (int n = 0; n <= f; n++)           //gives appropriate spacing
    for (int z = 0; z < T[n]; z++)
      {
	e1 += ((t[z][n].pow) - (t[z + 1][n].pow));
	e0 += ((t[z][n].pow) - (t[z + 1][n].pow));

	if (n == 0)
	  {
	    xt[z + e0][n].pow = t[z][n].pow;
	    xt[z][n].pow = 0;
	    xt[z + e0][n].coef= t[z][n].coef;
	    xt[z][n].coef = 0;
	    xt[z + e0][n].var = t[z][n].var;
	    xt[z][n].var = "";
	    T[n] = e0 +z;
	  }
	else
	  {
	    xt[z + e1][n].pow = t[z][n].pow;
	    xt[z][n].pow = 0;
	    xt[z + e1][n].coef = t[z][n].coef;
	    xt[z][n].coef = 0;
	    xt[z + e1][n].var = t[z][n].var;
	    xt[z][n].var = "";
	    T[n] = e1 +z;
	  }
      }
  
  for (int n = 0; n <= f; n++)           //equates polynomial set
    for (int z = 0; z < T[n]; z++)
      t[z][n] = xt[z][n];
}
	      

void polynomial::add()
{
  /*
  if (t[0] >= t[1])
    int n = 0;
  else
  int n = 1; */

  simpsort();
  
  
  for (int n = 0; n < f; n++)            //adds the two polynomials
    for (int i = 0; i < T[n]; i++)
      {
	xt[i][0].coef = t[i][0].coef + t[i][1].coef;
	xt[i][0].pow = t[i][0].pow;
      }

  for (int n = 0; n <= f; n++)           //equates polynomial set
    for (int z = 0; z < T[n]; z++)
      t[z][n] = xt[z][n];
}

void polynomial::swp()
{
  for (int i = 0; i < T[0]; i++)
    {
      xt[i][1] = t[i][0];
      xt [i][0] = t[i][1];
    }

  for (int n = 0; n <= f; n++)           //equates polynomial set
    for (int z = 0; z < T[n]; z++)
      t[z][n] = xt[z][n];
}

void polynomial::sub(char chs)
{
  simpsort();

  if (chs == 'y')
    swp();  
  
  for (int n = 0; n < f; n++)            //subtracts the two polynomials
    for (int i = 0; i < T[n]; i++)
      {
	xt[i][0].coef = t[i][0].coef - t[i][1].coef;
	xt[i][0].pow = t[i][0].pow;
      }

  for (int n = 0; n <= f; n++)           //equates polynomial set
    for (int z = 0; z < T[n]; z++)
      t[z][n] = xt[z][n];
}

void polynomial::pmult()
{
  
  for (int n = 0; n < f; n++)            //multiplies two polynomials
    for ( int z = 0; z < T[n]; z++)
      {
	xt[z][0] = t[z][0];
	for (int i = 0; i < T[n]; i++)
	  {
	    xt[z][0].coef = t[z][0].coef * t[i][1].coef;
	    xt[z][0].pow += t[i][1].pow;
	  }
      }

  for (int n = 0; n <= f; n++)           //equates polynomial set
    for (int z = 0; z < T[n]; z++)
      t[z][n] = xt[z][n];

  simpsort();
}

void polynomial::imult(int nmbr, int  chs)
{
  if(chs == 0)
    {  
      for (int n = 0; n < f; n++)            //multiplies polynomial by constant
	for (int i = 0; i < T[n]; i++)
	  {
	    xt[i][0].coef = t[i][0].coef * nmbr;
	    xt[i][0].pow = t[i][0].pow;
	  }
    }
  else if (chs == 1)
     for (int n = 0; n < f; n++)            //multiplies polynomial by constant
	for (int i = 0; i < T[n]; i++)
	  {
	    xt[i][1].coef = t[i][1].coef * nmbr;
	    xt[i][1].pow = t[i][1].pow;
	  }

    for (int n = 0; n <= f; n++)           //equates polynomial set
    for (int z = 0; z < T[n]; z++)
      t[z][n] = xt[z][n];

  simpsort();
}


void polynomial::rdeg(int x, int chs)
{
  assert(0 <= chs && chs <= f);
  
  for (int i = 0; i < T[chs]; i++)
    {
      xt[i][chs].pow += x;
    }
  
  for (int n = 0; n <= f; n++)           //equates polynomial set
    for (int z = 0; z < T[n]; z++)
      t[z][n] = xt[z][n];

  simpsort();
}

bool polynomial::eql()
{
  for (int i = 0; i <= T[0]; i++)
    if ((t[i][0].pow != t[i][1].pow) || (t[i][0].coef != t[i][1].coef) || (t[i][0].var != t[i][1].var))
      return false;
  return true;
}

int polynomial::gdeg(int chs)
{
  assert(0 <= chs && chs <= f);
  return t[0][chs].pow;
}

int polynomial::gcoef(int pwr, int chs)
{
  assert(0 <= chs && chs <= f);
  return t[t[0][chs].pow - pwr][chs].coef;
}

void polynomial::printp(int chs)
{
  for (int i = 0; i < T[chs]; i++)
    cout << ' ' << t[i][chs].coef << t[i][chs].var << '^' << t[i][chs].pow;
  cout << endl;
}
