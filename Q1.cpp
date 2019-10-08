#include <iostream>
#include <string>
using namespace std;

int main()
{
  string grades; //input strings to include +/- signs
  float GPA; //GPA starts at 0, accepts decimals

  for (int i = 0; i < 5; i++) //accepts 5 inputs (for 5 classes)
    {
      cout << "Class " << i + 1 << " ";
      cin >> grades;
      if (grades == "A")
	GPA = GPA + 4;
      else if (grades == "A-")
	GPA = GPA + 3.7;
      else if (grades == "B+")
	GPA = GPA + 3.3;
      else if (grades == "B")
	GPA = GPA + 3;
      else if (grades == "B-")
	GPA = GPA + 2.7;
      else if (grades == "C+")
	GPA  = GPA + 2.3;
      else if (grades == "C")
	GPA = GPA + 2;
      else if (grades == "C-")
	GPA = GPA + 1.7;
      else if (grades == "D")
	GPA = GPA + 1;
      else if (grades == "F")
	GPA = GPA + 0;
      else
	{
	  cout << "Incorrect input!" << endl; //ERROR CHECKING
	  return 0;
	}
    }
  
  GPA = GPA/5;
  cout << "GPA: " << GPA << "." << endl; //outputs GPA calculation

  return 0;

}
