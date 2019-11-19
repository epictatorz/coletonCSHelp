#include <iostream>
#include <iomanip>
using namespace std;

const int NUM=5;

int main()
{
  //This is for printing money in the proper format
  cout << setprecision(2) << fixed;

  //1. Declare two arrays one for cost and one for tax
  double costArray[NUM];
  double taxArray[NUM]={0};

  //2. Declare additional variables such as letter input, totals for cost and tax.
  char taxApplied;
  double totalCost=0.0, totalTax=0.0;

  //3. Loop five times
  for (int i=0;  i<NUM; i++)
  {
        //i. prompt for cost
    cout << "cost? " << endl;

        //ii. input the cost into the array
        cin >> costArray[i];

        //iii. prompt for y and n
        cout << "tax? (y/n) " << endl;

        //iv. input the y and n
        cin >> taxApplied;

        //v. if the letter is y, then store the tax into the tax array 
        if (taxApplied == 'y')
		taxArray[i] = costArray[i] * .10;
  }
  //4. Print some headers for the columns of Cost and Tax
  cout << "     cost     tax" << endl;
  //5. Loop five times
         //i. print the cost and the tax nicely in columns (Hint: try setw(10))
         //ii. add the current element in the cost array to the "totalCost"
         //iii. add the current element in the tax array to the "totalTax"
  for(int i = 0; i <= NUM;
    cout << setw(10);
  
  

  //6. Print the "totalCost" and "totalTax" nicely in columns

  //7. Print a message "Your total bill is:" and the total bill amount
  
}
