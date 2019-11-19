#include <iostream>
#include <cassert>
#include "container.h"
#include "manmaged_array.h"

using namespace std;

#ifndef priorityQueue_h
#define priorityQueue_h

class priorityQueue : public Container
{
 public:
  priorityQueue();

  void insert(int x) {arry.insert(arry.size(), x);}

  int remove();

  bool empty() const;

  void arraySort();

 private:
  ManagedArray arry, arry2, sary;
};

#endif
