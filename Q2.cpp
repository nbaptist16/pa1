#include <iostream>
#include <math.h> // for sqrt
using namespace std;

// all (x,y) coordinates of both squares; looks scary, but is not
float xco1;
float yco1;

float xco2;
float yco2;

float xa1;
float ya1;

float xb1;
float yb1;

float xc1;
float yc1;

float xa2;
float ya2;

float xb2;
float yb2;
 
float xc2;
float yc2;

float are1;
float are2;

int i;
float f;

int main ()
{
  cout << "Please enter the information for the first square" << endl << "x-coordinate: ";
  //Error checks to ensure that cin is a valid float input (error quits code)
  if(! (cin>>xco1) ){
    cout << "Invalid value." << endl;
    return 0;
  }
 
  cout << "y-coordinate: ";
   if(! (cin>>yco1) ){
    cout << "Invalid value." << endl;
    return 0;
  }

  cout << "area: ";
   if(! (cin>>are1) ){
    cout << "Invalid value." << endl;
    return 0;
  }

  cout << "Please enter the information for the second square" << endl << "x-coordinate: ";
   if(! (cin>>xco2) ){
    cout << "Invalid value." << endl;
    return 0;
  }

  cout << "y-coordinate: ";
   if(! (cin>>yco2) ){
    cout << "Invalid value." << endl;
    return 0;
  }
 
  cout << "area: ";
   if(! (cin>>are2) ){
    cout << "Invalid value." << endl;
    return 0;
  }

  float side1 = sqrt(are1);
  float side2 = sqrt(are2);

  /*so clockwise from the top, after the upper left coordinates:
    a1, b1, and c1 for the first square and
    a2, b2, and c2 for the second square

    each squre will have an x and y component
  */

  //first square coords
  float xa1 = xco1 + side1;
  float ya1 = yco1;

  float xb1 = xco1 + side1;
  float yb1 = yco1 - side1;

  float xc1 = xco1;
  float yc1 = yco1 - side1;

  //second square coords
  float xa2 = xco2 + side2;
  float ya2 = yco2;

  float xb2 = xco2 + side2;
  float yb2 = yco2 - side2;
 
  float xc2 = xco2;
  float yc2 = yco2 - side1;
  
  if (xa2 >= xco1 && xa2 <= xa1) //if right side lies within x boundaries
    {
      if (yco2 >= yc1 && yco2 <= yco1) //if top side also lies within y boundaries
	{
	  cout << "THE SQUARES INTERSECT :)" << endl;
	  return 0;
	}
      else if (yc2 >= yc1 && yc2 <= yco1) //or if bottom side also lies within y boundaries
	{
	  cout << "THE SQUARES INTERSECT :)" << endl;
	  return 0;
	}
      else //if neither top/bottom intersects
	{
	  cout << "THE SQUARES DO NOT INTERSECT :(" << endl;
	  return 0;
	}
    }
  else if (xco2 >= xc1 && xco2 <= xa1) //if left side lies within x boundaries
    {
      if (yc2 >= yc1 && yc2 <= yco1) //if bottom side also lies within y boundaries
	{
	  cout << "THE SQUARES INTERSECT :)" << endl;
	  return 0;
	}
      else if (yco2 >= yc1 && yco2 <= yco1) //or if top side also lies within y boundaries
	{
	  cout << "THE SQUARES INTERSECT :)" << endl;
	  return 0;
	}
      else //if neither top/bottom intersects
	{
	  cout << "THE SQUARES DO NOT INTERSECT :(" << endl;
	  return 0;
	}
    }
  else //if neither left/right intersect
    {
      cout << "THE SQUARES DO NOT INTERSECT :(" << endl;
      return 0;
    }
}

