#include "Cat.h"
#include <iostream>
using namespace std;

int main()
{
   Cat averageCat, myCat;

   string colours[5];
   colours[0] = "brown";
   colours[1] = "";
   initCat (averageCat, 46, 24, 30, "green", "medium", colours);

   readCat (myCat);

   cout << "The average cat has " << averageCat.eyeColour << " eyes" << endl;  

   cout << "-------------------------------------------------------"<< endl;
   cout << "This is myCat:" << endl;
   printCat (myCat);
   if (isTaller (myCat, averageCat))
   {
	cout << "My cat is taller than the average cat\n";
   }
   else
   {
	cout << "My cat is shorter than the average cat\n";
   }
   if (isCalico (myCat))
   {
	cout << "My cat is a calico\n";
   }
  
   return 0;
}
