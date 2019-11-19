#include "card.h"
#include "random.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
  card cds[suits][ranks];

  mkdk(cds, deck);
  
  string card1, card2;

  for (int i = 0; i < suits; i++)
    for (int n = 0; n < ranks; n++)
      {
	cds[i][n].suit = i;
	cds[i][n].rank = n;
      }
  
  int suit, rank;

  cin >> suit, rank;
  
  cout << srep(cds, ranknm, suitnm, suit, rank);

  cin >> card1 >> card2;

  cmp = compareval(cds, card1, card2, ranknm, suitnm);
  if (cmp == 1)
    cout << card1 << endl;
  else
    cout << card2 << endl;

  int sm = same(card1, card2, ranknm, suitnm);
    if (sm == 0)
      cout << "Both entered cards are the same" << endl;
    else
      cout << "Entered cards are not the same" << endl;

    shuffle(deck, upper, shuffdeck);

    printo(shuffdeck, ranknm, suitnm);
    
    read(indecks, indeck);
    
  return 0;
}

string srep(card cds[suits][ranks], const string ranknm[ranks], const string suitnm[suits], int i, int n)
{
  string tempsuit;
  string temprank;

  for (int z = 0; z < suits; z++)
    if (cds[i][n].suit == z)
      tempsuit = suitnm[z] + " ";
  
  
  for (int z = 0; z < ranks; z++)
    if (cds[i][n].rank == z)
      temprank = ranknm[z];

  return tempsuit + temprank;
}

int compareval(card cds[suits][ranks], string card1, string card2, string ranknm[ranks], string suitnm[suits])
{
  int rank;
  int suit;
  
  convsti(ranknm, suitnm, rank, suit, card1);
  int rank1 = rank;
  int suit1 = suit;

  convsti(ranknm, suitnm, rank, suit, card2);
  int rank2 = rank;
  int suit2 = suit;

  if (rank1 > rank2)
    return 1;
  else if (rank1 < rank2)
    return 2;
  else
    if (suit1 > suit2)
      return 1;
    else
      return 2;
}

int same(string card1, string card2, string ranknm[ranks], string suitnm[suits])
{
  int rank;
  int suit;
  
  convsti(ranknm, suitnm, rank, suit, card1);
  int rank1 = rank;
  int suit1 = suit;

  convsti(ranknm, suitnm, rank, suit, card2);
  int rank2 = rank;
  int suit2 = suit;

  if (rank1 == rank2)
    if (suit1 == suit2)
      return 0;
    else
      return 1;
  else
    return 1;
}

void convsti(const string ranknm[ranks], const string suitnm[suits], int& rank, int& suit, string card)
{
  int spcpos = card.find(' ');
  int len = card.length();
  string suitS = card.substr(0, spcpos);
  string rankS = card.substr((spcpos + 1), (len - (spcpos + 1)));

  for (int i = 0; i < ranks; i++)
    if (rankS == ranknm)
      rank = i;
  for (int i = 0; i < suits; i++)
    if (suitS == suitnm)
      suit = i;
}

void mkdk(card cds[suits][ranks], card deck[52])
{
  
  int cnt = 0;
  
  for (int i = 0; i < suits; i++)
    for (int n = 0; n < ranks; n++)
      {
	cnt++;
        deck[cnt] = cds[i][n];      
      }
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

void read(string indecks[52], card indeck[52])
{
  string deckey, asdf;
  int suit, rank; 
  
  ifstream deckee;

  cout << "which file contains the deck?" << endl;
  getline(cin, deckey);
  
  deckee.open(deckey);

  for (int i = 0; i < 52; i++)
    getline(deckee, indecks[i]);
  
  for (int i = 0; i < 52; i++)
    {
      asdf = indecks[i];
      convsti(ranknm, suitnm, rank, suit, asdf);
      indeck[i].suit = suit;
      indeck[i].rank = rank;
    }
  
  deckee.close();
}
/*  for (int i = 0; i < suits; i++)
    for (int n = 0; n < ranks; n++)
      for (int z = 0; z < suits; z++)
	  if (cds[i][n].suit == z)
	    cout << suitnm[z] << " ";
  
  for (int i = 0; i < suits; i++)
    for (int n = 0; n < ranks; n++)
      for (int z = 0; z < ranks; z++)
	if (cds[i][n].rank == z)
	  cout << ranknm[z] << endl;
*/

  /*
  int spcpos1 = card1.find(' ');
  int spcpos2 = card2.find(' ');

  int len1 = card1.length();
  int len2 = card2.length();

  string suit1s = card1.substr(0, spcpos1);
  string rank1s = card1.substr((spcpos1 + 1), (len1 - (spcpos1 + 1)));
  string suit2s = card2.substr(0, spcpos2);
  string rank2s = card2.substr((spcpos2 + 1), (len2 - (spcpos2 + 1)));
  */
