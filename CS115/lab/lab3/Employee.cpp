#include "Employee.h"
#include <iostream>

using namespace std;
void printEmployee(const Employee& c)
{
  cout << "The Employee info is: ";
  cout << c.name << ", " << c.id << ", $" << c.salary << endl;
}

Employee readEmployee()
{
  Employee tempEmployee;

  cout << "Employee Name?: ";
  getline (cin, tempEmployee.name);
  cout << "Employee ID?; ";
  cin >> tempEmployee.id;
  cout << "Employee Yearly Salary?: ";
  cin >> tempEmployee.salary;

  return tempEmployee;
}

int findEmployee (const Employee array[], int tId, int num)
{
  for (int i = 0; i < NUM_EMPL; i++)
    {
      if (array[i].id == tId)
	{
	  return i;
	}
    }
  return -1;
}
