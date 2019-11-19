#include <iostream>
#include "queue.h"
using namespace std;

stack::stack():ManagedArray();
{
}

bool stack::empty() const
{if (arry.size() == 0)
    {
      return true;
    }
  else
    return false;
}
