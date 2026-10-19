#include "Rectangle.h"
// #include <cstdlib>
// #include <iostream>
// using namespace std;

void Rectangle::setWidth(double w) { width = w; }

void Rectangle::setLength(double l) { length = l; }

double Rectangle::getWidth() const { return width; }

double Rectangle::getLength() const { return length; }

double Rectangle::getArea() const { return length * width; }
