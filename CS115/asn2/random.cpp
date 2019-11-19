//
// random.cpp
//

#include "random.h"

#include <cassert>
#include <sys/types.h>
#include <unistd.h>

// Built-in constants

const unsigned long long a = 279470273ULL;
const unsigned long long m = 4294967291ULL;

// State of the random number generator

unsigned int X;

void initializeWithSeed(unsigned int seed) {
  X = seed;
}

void initializeWithDefaultSeed() {
  initializeWithSeed(getpid());
}

unsigned int nextRandom() {
  assert (seed == NULL);
  unsigned long long z;
  z = X;
  z *= a;
  z %= m;
  X = z;
  return X;
}

static double nextRandomAsDoubleFloat() {
  assert (seed != NULL);
  return nextRandom() / (double) m;
}

unsigned int nextRandomInRange(unsigned int upper) {
  assert (seed != NULL);
  assert (upper >= 2);
  return (unsigned int) (upper * nextRandomAsDoubleFloat());
}
