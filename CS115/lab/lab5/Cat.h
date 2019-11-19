#ifndef __Cat_h__
#define __Cat_h__
#include <string>
using namespace std;

class Cat
{
   double length;
   double height;
   double tailLength;
   string eyeColour;
   string furClassification; //long, medium, short, none
   string furColours[5];

 public:
   Cat();
   Cat (double, double, double, string, string, const string[]);
   void readCat ();
   string getEyeColour();
   void printCat () const;
   bool isCalico () const;
   bool isSame (const Cat&) const;


};
#endif
