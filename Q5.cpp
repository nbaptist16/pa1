#include <iostream>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
using namespace std;

//function headers, to be called later
char chase(char inlet);
char ralph(char inlet);
char encry(char inlet);

int main ()
{
  string inling;
  cout << "Please enter in the form 'character'' operation no.': ";
  cin >> inling;
  
  char inlet = inling[0]; //character modified references first 
  int opno = (int)inling[1]; //then operation number

  if (isalpha(inlet) == 0) //checks if first character of input is a letter
    {
      cout << "Invalid input! Please enter a letter." << endl;
      return -1;
    }
  if (inling.size() != 2) //checks if input length is 2
    {
      cout << "Invalid input! Please enter only one letter and number. (eg: a1)" << endl;
      return -1;
    }
  if (isalpha(inling[1]) != 0 || inling[1] > '3' || inling[1] < '1')
    // checks if operator number is valid (1, 2, or 3)
    {
      cout << "Invalid input! Please enter operation number 1, 2, or 3." <<endl;
      return -1;
    }
  
  char opres;
  if (opno == 49) //checks if operation number is 1
    opres = chase(inlet);
  else if (opno == 50) //if operation number is 2
    opres = ralph(inlet);
  else if (opno == 51) //if operation number is 3
    opres = encry(inlet);
  else //extra error check (for fun)
    {
      cout << "Invalid input." << endl;
      return -1;
    }
  
  cout << "Result: " << opres << endl; //I spent forever not realizing i forgot to add the most important part of the code

}

//additional functions

char chase(char inlet) //change case >> "chase"!
{
  if(isupper(inlet) !=0) //checks if upper case input
    return tolower(inlet); //switches it to lower
  else // if lower case input
    return toupper(inlet); //switches it to upper case
}

char ralph (char inlet) //reverse alphabet >> "ralph!"
{
  if (islower(inlet) != 0) //if input is in caps
    {
      inlet = tolower(inlet); // cuz it switches all to lower 'ere for easy calcs
      int ref = (int)inlet;

      ref += (2 * (109 - ref) + 1); //flips alpha ("center" at 'm' = 109)
      char newin = ref;

      newin = chase(newin); //swaps it back (see what I did there using chase)
      return newin;
    }
  else //if input is lowercase
    {
      inlet = tolower(inlet); //tbh I just copied this from the other option oh well
      int ref = (int)inlet;

      ref += (2 * (109 - ref) + 1); //flips alpha ("center" at 'm' = 109)
      char newin = ref;

      return newin; //returns without flipping back case
    }
}

char encry(char inlet) //sorry I couldn't think of a clever name for encrypt :/
{
  int asciiref = (int)inlet; //gets ascii equivalent of input char
  asciiref += 6; //increases in steps of 6
  
  if (asciiref > 90 && asciiref < 97) //checks if the letter is past Z but not a
    asciiref += 6; //for wrapping! skips over punctuation stuff
  else if (asciiref > 122) //checks if character input is not past z
    asciiref -= 58; //goes back to A
  
  char innew = asciiref; //reoutputs as char, given new ascii val
  return innew;
} 
