#include <iomanip>
#include <iostream>
using namespace std;

// This program uses a structure to hold data about a rectangle

// John Zetterman

// FILL IN CODE TO define a structure named rectangle which has
// members length, width, area, and perimeter all of which are floats
struct rectangle {
  float length;
  float width;
  float area;
  float perimeter;
};

int main() {
  // Fill IN CODE to declare a rectangle variable named box
  rectangle box;

  cout << "Enter the length of a rectangle: ";

  // FILL IN CODE to read in the length member of box
  cin >> box.length;

  cout << "Enter the width of a rectangle: ";

  // FILL IN CODE to read in the width member of box
  cin >> box.width;

  cout << endl << endl;

  // FILL IN CODE to compute the area member of box
  box.area = box.length * box.width;
  // FILL IN CODE to compute the perimeter member of box
  box.perimeter = (box.length + box.width) * 2;

  cout << fixed << showpoint << setprecision(2);

  // FILL IN CODE to output the area with an appropriate message
  cout << "The area of the rectangle is " << box.area << endl;
  // FILL IN CODE to output the perimeter with an appropriate message
  cout << "The perimeter of the rectangle is " << box.perimeter << endl;

  if (box.length == box.width)
    cout << "The rectangle is square" << endl;

  return 0;
}
