#include "Cat.h"
#include <iostream>
using namespace std;

int main()
{
   Cat myCat;

   string colours[5];
   colours[0] = "brown";
   colours[1] = "";
   Cat averageCat (46, 24, 30, "green", "medium", colours);

   myCat.readCat();

   cout << "The average cat has " << averageCat.getEyeColour() << " eyes" << endl;  

   cout << "-------------------------------------------------------"<< endl;
   cout << "This is myCat:" << endl;
   
   myCat.printCat();
   
   if (myCat.isSame (averageCat))
   {
	cout << "The cat has same eye colour\n";
   }
   else
   {
	cout << "the cat has different eye colour\n";
   }
   if (myCat.isCalico())
   {
	cout << "My cat is a calico\n";
   }
  
   return 0;
}
