#include <iostream>
#include <cassert>
#include "container.h"
#include "managed_array.h"

using namespace std;

#ifndef stack_h
#define stack_h

class stack : public Container
{
 public:
  stack();

  void insert(int x) {arry.insert(arry.size(), x);}

  int remove() {return arry.read(arry.size() - i);}

  bool empty() const;

 private:
  ManagedArray arry;
};

#endif
