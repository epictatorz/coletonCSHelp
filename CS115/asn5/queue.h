#include <iostream>
#include <cassert>
#include "container.h"
#include "managed_array.h"

using namespace std;

#ifndef queue_h
#define queue_h

class queue : public Container
{
 public:
  queue();
  
  void insert(int x) {arry.insert(arry.size(), x);}

  int remove(unsigned i) {return arry.read(i);}

  bool empty() const;

 private:
  ManagedArray arry;
};

#endif
