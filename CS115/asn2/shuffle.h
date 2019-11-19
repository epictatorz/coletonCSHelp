#include <iostream>
#include <string>
using namespace std;

const int suits = 4;
const int ranks = 13;

const string ranknm[ranks] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
const string suitnm[suits] = {"Spade", "Heart", "Diamond", "Club"};

struct card
{
  int suit;
  int rank;
};

card deck[52];
card shuffdeck[52];
string indecks[52];
card indeck[52];
const unsigned int upper = 52;

void shuffle(card deck[52], const unsigned int upper,card shuffdeck[52]);

void printo(card deck[52], const string ranknm[ranks], const string suitnm[suits]);
