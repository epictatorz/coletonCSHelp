#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*rank (in assending order) is 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12
  = ace, 2, 3, 4, 5, 6, 7, 8, 9, 10, jack, queen, king*/

const int suits = 4;
const int ranks = 13;

const string ranknm[ranks] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
const string suitnm[suits] = {"Spade", "Heart", "Diamond", "Club"};

struct card
{
  int suit;
  int rank;
};

int cmp;
card deck[52];
card shuffdeck[52];
string indecks[52];
card indeck[52];
const unsigned int upper = 52;

void convsti(card cds[suits][ranks], const string ranknm[ranks], const string suitnm[suits], string&, string&, string card);

string srep(card cds[suits][ranks], const string ranknm[ranks], const string suitnm[suits], int, int);

int compareval(card cds[suits][ranks], string, string, const string ranknm[ranks], const string suitnm[suits]);

void mkdk(card cds[suits][ranks], card deck[52]);

void shuffle(card deck[52], const unsigned int upper,card shuffdeck[52]);

void printo(card deck[52], const string ranknm[ranks], const string suitnm[suits]);

void read(card indecks[52], card indeck[52]);

int same(string card1, string card2, const string ranknm[ranks], const string suitnm[suits]);
