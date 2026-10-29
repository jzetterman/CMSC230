// Rectangle.cpp
// Implementation file for the Rectangle class.

#include "Rectangle.h" // Needed for the Rectangle class
#include <cstdlib>     // Needed for the exit function
#include <iostream>    // Needed for cout
using namespace std;

//***********************************************************
// Constructors and destructor                              *
//***********************************************************

Rectangle::Rectangle() {
  setWidth(0);
  setLength(0);
}

Rectangle::Rectangle(double w, double l) {
  setWidth(w);
  setLength(l);
}

Rectangle::~Rectangle() { cout << "The destructor is now running" << endl; }

//***********************************************************
// setWidth sets the value of the member variable width.    *
//***********************************************************

void Rectangle::setWidth(double w) {
  if (w >= 0)
    width = w;
  else {
    cout << "Invalid width\n";
    exit(EXIT_FAILURE);
  }
}

//***********************************************************
// setLength sets the value of the member variable length.  *
//***********************************************************

void Rectangle::setLength(double len) {
  if (len >= 0)
    length = len;
  else {
    cout << "Invalid length\n";
    exit(EXIT_FAILURE);
  }
}

//***********************************************************
// getWidth returns the value in the member variable width. *
//***********************************************************

double Rectangle::getWidth() const { return width; }

//*************************************************************
// getLength returns the value in the member variable length. *
//*************************************************************

double Rectangle::getLength() const { return length; }

//************************************************************
// getArea returns the product of width times length.        *
//************************************************************

double Rectangle::getArea() const { return width * length; }
