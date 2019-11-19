//LinkedList.cpp

// Note: This implementation of LinkedList is based on 
// Chapter 4 of Bruno R. Preiss's Textbook: 
// "Data Structures and Algorithms with Object-Oriented Design Patterns
//    in C++"

#include <cstdlib>
#include <cassert>
#include "LinkedList.h"
using namespace std;

//---------------------------------------------------
//List Element Members
//---------------------------------------------------
ListElement::ListElement(int _datum, ListElement * _next):
   datum (_datum), next (_next)
{}


int ListElement::getDatum () const
{ 
   return datum; 
}


ListElement const* ListElement::getNext () const
{ 
   return next; 
}



//---------------------------------------------------
//LinkedList Members
//---------------------------------------------------
LinkedList::LinkedList () :
    head (0)
{}

void LinkedList::insertItem(int item)
{
   ListElement *currPtr = head;
   ListElement *prevPtr = NULL;
   ListElement *newNodePtr;      //points to a new node
   
   while(currPtr != NULL && item > currPtr->datum)
   {
      prevPtr = currPtr;
      currPtr = currPtr->next;
   } 

   newNodePtr = new ListElement(item, currPtr);
    
   if (prevPtr == NULL) // insert at the beginning
      head=newNodePtr;
   else
      prevPtr->next = newNodePtr;
}

void LinkedList::makeList()
{
   int InValue;
   ListElement *currPtr;
   ListElement *newNodePtr;   
   
   cout << "Enter values for a linked list, one per line." << endl
	<< "Enter 999 to end the list." << endl;

   cin >> InValue;
   //Adding elements to end so that "next" will be NULL
   newNodePtr=new ListElement(InValue, NULL);
   head=newNodePtr;  //assign head to the first Node
   currPtr=head; 
   cin >> InValue;

   while ( InValue != 999)
   {
      newNodePtr=new ListElement(InValue, NULL);
      currPtr->next=newNodePtr;     //link the new node to list
      currPtr=newNodePtr;           //move the currPtr so it is at end of list
      cin >> InValue;
   }
              
}

void LinkedList::appendItem (int item)
{
   //REPLACE THE LINE BELOW WITH YOUR OWN CODE
   cout << "You must implement this function" <<endl;
}

void LinkedList::deleteItem (int item)
{
   //REPLACE THE LINE BELOW WITH YOUR OWN CODE
   cout << "You must implement this function" <<endl;
}


void LinkedList::printList () 
{
   //REPLACE THE LINE BELOW WITH YOUR OWN CODE
   cout << "You must implement this function" <<endl;
}



