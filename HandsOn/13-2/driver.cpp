// This program calls the Rectangle class constructors and destructor.

#include "Rectangle.h"
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  // Default constructor
  Rectangle box; // Define an instance of the Rectangle class

  // Display the rectangle's data.
  cout << "Test using the default constructor.\n";
  cout << "Here is the rectangle's data:\n";
  cout << "Width: " << box.getWidth() << endl;
  cout << "Length: " << box.getLength() << endl;
  cout << "Area: " << box.getArea() << endl;
  cout << endl << endl;

  // Overloading constructor
  double houseWidth, // To hold the room width
      houseLength;   // To hold the room length

  cout << "Test using the overloaded constructor.\n";

  // Get the width of the house.
  cout << "In feet, how wide is your house? ";
  cin >> houseWidth;

  // Get the length of the house.
  cout << "In feet, how long is your house? ";
  cin >> houseLength;

  // Create a Rectangle object.
  Rectangle house(houseWidth, houseLength);

  // Display the house's width, length, and area.
  cout << setprecision(2) << fixed;
  cout << "The house is " << house.getWidth() << " feet wide.\n";
  cout << "The house is " << house.getLength() << " feet long.\n";
  cout << "The house has " << house.getArea() << " square feet of area.\n";

  return 0;
}
