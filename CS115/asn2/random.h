//
// random.h
//
// This module encapsulates a pseudo-random number generator.
//

#ifndef __RANDOM_H__
#define __RANDOM_H__

//
// initializeWithSeed
//
// Purpose: Initialize the encapsulated state of the random
//          number generator by specifying a seed.  The
//          random number generator produces the same numeric
//          sequence when it is initialized with the same seed.
// Argument(s):
//   seed: the seed of the pseudo-random number sequence.
// Precondition: The random number generator has not been 
//               initialized yet.
// Return: N/A
// Side Effect: Initialize the encapsulated state of the random
//              number generator by the seed argument.
//

void initializeWithSeed(unsigned int seed);

//
// initializeWithoutSeed
//
// Purpose: Initialize the encapsulated state of the random
//          number generator.  The process ID of the currently
//          executing process is used as the seed of the
//          random number generator.  Therefore, the generator
//          is guaranteed to be seeded differently every time
//          the program is executed.
// Argument(s): N/A
// Precondition: The random number generator has not been 
//               initialized yet.
// Return: N/A
// Side Effect: Initialize the encapsulated state of the random
//              number generator using the process ID as seed.
//

void initializeWithDefaultSeed();

//
// nextRandom
//
// Purpose: Compute the next number in the random number sequence.
// Argument(s): N/A
// Precondition: The random number generator must have been properly
//               initialized by a call to intializeWithSeed or
//               initializeWithoutSeed.
// Return: the next number in the random number sequence.
// Side Effect: Update the encapsulated state of the random number
//              generator, so that the next time this function is
//              called, a new random number will be returned.
//

unsigned int nextRandom();

//
// nextRandomInRange
//
// Purpose: Compute the next number in the random number sequence,
//          and convert it into a random number in a user-specified
//          range.
// Argument(s):
//   upper: the upper bound of the requested random number
// Precondition: 1/ The random number generator must have been properly
//                  initialized by a call to initializeWithSeed or
//                  initializeWithoutSeed.
//               2/ upper >= 2
// Return: a random number between 0 and upper-1 (inclusive), obtained
//         by a call to nextRandom().
// Side Effect: Same as that of invoking nextRandom().
//          

unsigned int nextRandomInRange(unsigned int upper);

#endif
