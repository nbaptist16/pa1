#include <iostream>
using namespace std;

/*
ints only
account for leading zeros
*/

int main ()
{
  int ina; //og input 1
  int inb; //og input 2
  int tracka; //copy of input 1 (change in loops)
  int trackb; //copy of input 2 (change in loops)
  int hammd; //hamming distance

  int ternarray[5]; //haha, get it?
  int ternarrby[5]; //only size 5 since integers between 0, 100

  cout << "Please enter two integers between 0 - 100: ";
  cin >> ina;
  cin >> inb;
  
  tracka = ina;
  trackb = inb;
  
  for (int i = 3; i >= 0; i --) //ternary is base 3
    {
      ternarray[i + 1] = tracka % 3; //finds remainder at index when dividing by 3
      ternarrby[i + 1] = trackb % 3; 
      ternarray[i] = tracka / 3; //finds quotient at index  when dividing by 3
      ternarrby[i] = trackb / 3;
      tracka /= 3; //divids og value by 3
      trackb /= 3;
    }
  
  for (int i = 0; i <= 4; i++)
    if (ternarray[i] != ternarrby[i]) //compares corresponding values to obtain hamm
      hammd ++;

  cout << "Hamming distance between " << ina << " and " << inb << " when numbers are in ternary format is: " << hammd << "." << endl;
  return 0;
}
