#include <iostream>
#include "queue.h"
using namespace std;

queue::queue():ManagedArray();
{
}

bool queue::empty() const
{if (arry.size() == 0)
    {
      return true;
    }
  else
    return false;
}
