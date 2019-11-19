/****************************************************
 *
 *  FileName:    /net/data/ftp/pub/class/170/ftp/cpp/maxTemplate.cpp
 *  Purpose:     Demonstrate the use of function templates
 *
 ********************************************************/
#include <iostream>
#include <string>
using namespace std;

//Make a template out of the prototype

template <typename T>
T myMax(T one, T two);

int main()
{
   int i_one = 3, i_two = 5;

   cout << "The max of " << i_one << " and " << i_two << " is "
	<< myMax(i_one, i_two) << endl;

   //Test your template on float and string types

   float f_one = 5.6, f_two = 7.3;

   cout << "The max of " << f_one << " and " << f_two << " is "
	<< myMax(f_one, f_two) << endl;

   string s_one = "donkey", s_two = "apple";
   
   return 0;
}


//Make a template out of this function. Don't forget the return type.
template <typename T>
T myMax(T one, T two)
{
   T bigger;
   if (one < two)
   {
      bigger = two;
   }
   else
   {
      bigger = one;
   }
   return bigger;
}
