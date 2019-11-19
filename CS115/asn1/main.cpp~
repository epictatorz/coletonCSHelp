#include "asn1.h"

int main()
{
      cout << "what is the name of the file containing the matrix?" << endl;
      getline(cin, mtrxnm);
      cout << endl;
  
  getglyph(mtrxnm, mtrxcr, mtrxl, mtrxc, x);

 choice:
  
  cout << "would you like to render(1), transpose(2), mirror(3), rotate(4) the matrix? (1, 2, 3, 4): ";
  getline(cin, chs);

  cout << endl << endl;

  if (chs == "1")
    {
      getglyph(mtrxnm, mtrxcr, mtrxl, mtrxc, x);
      render(mtrxc, charval, dgt);
    }
  else if (chs == "2")
    {
       getglyph(mtrxnm, mtrxcr, mtrxl, mtrxc, x);
       transpose(mtrxc, charvalt, dgt, mtrxct);
    }
  else if (chs == "3")
    {
       getglyph(mtrxnm, mtrxcr, mtrxl, mtrxc, x);
       mirror(mtrxc, mtrxc2);
    }
  else if (chs == "4")
    {
       getglyph(mtrxnm, mtrxcr, mtrxl, mtrxc, x);
       rotate(mtrxc, mtrxcrt);
    }
  else
    {
      cout << "please enter a valid choice" << endl << endl;
      goto choice;
    }

  cout << "would you like to do another operation to the matrix? (y/n):";
  getline(cin, chs);

  if(chs == "y")
    goto choice;
  else  
    return 0;
}

/*
void disp(char mtrxc[row][column])
{
	for (int i = 0; i < row; i++)
	{
	  for (int n = 0; n < column; n++)
	    {
	      cout << mtrxc[i][n] << ' ';
	    }
	  cout << endl;
	}
	cout << endl << endl;
}
*/

void render(char mtrxc[row][column], char charval[charvaln], char dgt[charvaln])
{
      for (int i = 0; i < row; i++)
	{
	  for (int n = 0; n < column; n++)
	    {
	      for (int z = 0; z <= 9; z++)
		{
		  if (mtrxc[i][n] == dgt[z])
		    mtrxc[i][n] = charval[z];
		}
	    }
	}

	for (int i = 0; i < row; i++)
	{
	  for (int n = 0; n < column; n++)
	    {
	      cout << mtrxc[i][n];
	    }
	  cout << endl;
	}
	
	cout << endl << endl;
}

void getglyph(string mtrxnm, string mtrxcr[row][column], string mtrxl[column], char mtrxc[row][column], int x)
{  	
	ifstream mtrx;
	mtrx.open(mtrxnm);

	for (int z = 0; z < row; z++)
	  {
	    getline(mtrx, mtrxl[z]);
	  }

	for (int i = 0; i < row; i++)
	{
	  for (int n = 0; n < column; n++)
	    {
	      if (n == 0)
	        x = 0;
	      else
		x = 2 * n;
	      
	      mtrxc[i][n] = (mtrxl[i].at(x));
	    }
	}

	mtrx.close();
}

void transpose(char mtrxc[row][column], char charvalt[charvaln], char dgt[charvaln], char mtrxct[column][row])
{
      for (int i = 0; i < row; i++)
	{
	  for (int n = 0; n < column; n++)
	    {
	      for (int z = 0; z <= 9; z++)
		{
		  if (mtrxc[i][n] == dgt[z])
		    {
		      /*
		      if (z == 9)
			mtrxc[i][n] = '8';
		      else if (z == 8)
			mtrxc[i][n] = '9';
		      */
		      
		      mtrxc[i][n] = charvalt[z];
		    }
		}
	    }
	}
      /*
      for (int i = 0; i < row; i++)
	for (int n= 0; n < column; n++)
	  mtrxct[n][i] = mtrxc[i][n];
      */
      
	for (int i = 0; i < row; i++)
	{
	  for (int n = 0; n < column; n++)
	    {
	      cout << mtrxc[n][i];
	    }
	  cout << endl;
	}
	
	cout << endl << endl;
}

void mirror(char mtrxc[row][column], char mtrxc2[row][column])
{
  for (int i = 0; i < row; i++)
    for (int n = 0; n < column; n++)
      for (int z = 0; z <= 9; z++)
	  if (mtrxc[i][n] == dgt[z])
	    mtrxc[i][n] = charvalm[z];
  
  for (int i = 0; i < row; i++)
    for (int n = 0; n < column; n++)
      {
	if (n >=5)
	  {
	    mtrxc2[i][n] = mtrxc[i][n - 5];
	    mtrxc2[i][n - 5] = mtrxc[i][n];
	  }
      }

  for (int i = 0; i < row; i++)
    {
      for (int n = 0; n < column; n++)
	{
	  cout << mtrxc2[i][n];
	}
      cout << endl;
    }
  cout << endl << endl;
}

void rotate(char mtrxc[row][column], char mtrxcrt[row][column])
{
  for (int i = 0; i < row; i++)
    for (int n = 0; n < column; n++)
	mtrxcrt[i][n] = mtrxc[i][n];

  for (int i = 0; i < row; i++)
    for (int n = 0; n < column; n++)
      {
	if (i != 9)
	  mtrxcrt[i][n] = mtrxc[i + 1][n];
	else
	  mtrxcrt[i][n] = mtrxc[0][n];
      }

  for (int i = 0; i < row; i++)
    {
      for (int n = 0; n < column; n++)
	{
	  for (int z = 0; z <= 9; z++)
	    {
	      if (mtrxcrt[i][n] == dgt[z])
		mtrxcrt[i][n] = charval[z];
	    }
	}
    }

  for (int i = 0; i < row; i++)
    {
      for (int n = 0; n < column; n++)
	{
	  cout << mtrxcrt[i][n];
	}
      cout << endl;
    }
  cout << endl << endl;
}
