#include "Date.h"
#include <iostream>
using namespace std;

int main()
{
  Date date1;
  int month, day, year;

  cout << "Testing the default constructor ant the getters" << endl;
  cout << "The intialized date is (M-D-Y):"
       << date1.getMonth() << "-"
       << date1.getDay() << "-"
       << date1.getYear()
       << endl << endl;

  cout << "Please enter a date:(Month Day Year): ";
    cin >> month >> day >> year;

  date1.setMonth(month);
  date1.setDay(day);
  date1.setYear(year);

  cout << "Please enter a second date:(Month Day Year): ";
  cin >> month >> day >> year;

  Date date2 (month, day, year);

  cout << endl << "Printing the two days: " << endl;
  date1.printDate();
  date2.printDate();

  if (date1.sameMonth(date2))
    {
      cout << "The months are the same" << endl;
    }
  else
    {
      cout << "The months are different" << endl;
    }
}
