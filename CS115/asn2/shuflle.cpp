#include "card.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
  shuffle(deck, upper, shuffdeck);
  printo(shuffdeck, ranknm, suitnm);
}

void shuffle(card deck[52], const unsigned int upper, card shuffdeck[52])
{
  for (int i = 0; i < 52; i++)
    shuffdeck[i] = deck[i];
  
  initializeWithDefaultSeed();

  unsigned int randspt;
  card tempcard;
  
  for (int i = 0; i < 52; i++)
    {
      randspt = nextRandomInRange(upper);
      tempcard = shuffdeck[i];
      shuffdeck[i] = shuffdeck[randspt];
      shuffdeck[randspt] = tempcard;
    }
}

void printo(card deck[52], const string ranknm[ranks], const string suitnm[suits])
{
  string tempsuit;
  string temprank;

  for (int z = 0; z < 52; z++)
    {
      for (int i = 0; i < suits; i++)
	if (deck[z].suit == i)
	  tempsuit = suitnm[i] + " ";
      cout << "Card # " << z << ":" << tempsuit;
      for (int n = 0; n < ranks; n++)
	if (deck[z].rank == n)
	  temprank = ranknm[n];
      cout << temprank << endl;
    }
}
