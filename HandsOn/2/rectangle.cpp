// This program will output the circumference and area
// of the circle with a given radius.

// John Zetterman

#include <iostream>
using namespace std;

const double LENGTH = 8;
const double WIDTH = 3;

int main()

{
  float area;      // definition of area of rectangle
  float perimeter; // definition of perimeter of rectangle

  perimeter = 2 * (LENGTH + WIDTH); // computes perimeter
  area = LENGTH * WIDTH;            // computes area

  // the area of the rectangle
  cout << "The area of the rectangle is " << area << endl;

  // the perimeter of the rectangle
  cout << "The perimeter of the rectangle is " << perimeter << endl;

  return 0;
}
