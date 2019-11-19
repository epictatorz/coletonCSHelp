#include <iostream>
#include "queue.h"
using namespace std;

priorityQueue::priorityQueue():ManagedArray();
{
}

int priorityQueue::remove()
{
  arraySort();
  return sary.read(i);
}

bool priorityQueue::empty() const
{
  if (arry.size() == 0)
    {
      return true;
    }
  else
    return false;
}

void priorityQueue::arraySort()
{
  for(int z = 0; z < arry.size(); z++)
    arry2.write(z, arry.read(z));
  
  for(int z = 0; z < arry.size(); z++)
    for(int n = 0; n < arry.size(); n++)
      {
	if (arry2.read(z) <= arry.read(n))
	  {
	    sary.write(z, arry.read(z));
	  }
	else if (arry2.read(z) >= arry.read(n))
	  {
	    arry2.write(z, arry.read(n));
	    sary.write(z, arry.read(n));
	  }
      }
}
