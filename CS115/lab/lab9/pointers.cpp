// Filename: pointers.cpp

#include <string.h>
#include <iostream>
using namespace std;


struct Student
{
    string name;
  int id;              //int* mark = new int
    int *mark;
  
  ~Student()
  {
    delete [] mark;
    mark = NULL;
  }
};

void inputStudent(Student* ptr, int num);   // function prototype for inputting
void printStudent(Student* ptr, int num);   // function prototype for printing

//*********************** Main Function ************************//
int main ()
{
    Student stu;		  // instantiating an STUDENT object
    Student*  stuPtr = &stu;  // defining a pointer for the object
    int num;

    cout << "Enter the number of marks: ";
    cin >> num;
    
    inputStudent(&stu, num);	  // inputting from the keyboard into the instance
    printStudent(stuPtr, num); // printing the object




} // end main

//-----------------Start of functions----------------------------//

void inputStudent(Student* ptr, int num)
{
  ptr -> mark =  new int [num];
  cout << "\nEnter the name of the student:";
  cin >> ptr -> name;
  cout << "\nEnter the ID of the student:";
  cin >> ptr -> id;
  cout << "\nEnter the marks of the student:";

  for (int i  = 0; i < num; i++)
    {
      cin >> ptr -> mark[i];
    }
}

void printStudent(Student* ptr, int num)
{
  cout << "\nThe name of the student is: " << ptr -> name;
  cout << "\nThe id of the student is: " << ptr -> id;
  cout << "\nThe mark of the student is: ";

  for (int i = 0; i < num; i++)
    cout << ptr -> mark[i] << endl;
}
