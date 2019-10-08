#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string palindrome; //number entered as string
  bool wellisit; //is true or false
  cout << "Please enter a number containing 0-9 digits: ";
  cin >> palindrome;
  int palength = palindrome.length(); //get length of palindrome
  for (int i = 0; i < (palength/2); i++) //goes until middle of input
    {
      if (palindrome[i] == palindrome[palength-(i+1)]) //compares both ends of input
	wellisit = 1; //true
      else
	wellisit = 0; //false
    }
  
  if (wellisit == 1)
    cout << "The number " << palindrome << " is a palindrome." << endl;
  else if (wellisit == 0)
    cout << "The number " << palindrome << " is not a palindrome." << endl;
  return 0;
}
