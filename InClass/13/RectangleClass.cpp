#include "Rectangle.h"
#include <iostream>
using namespace std;

int main() {
  Rectangle box;
  double size1 = 2.0, size2 = 3.0;
  box.setWidth(size1);
  box.setLength(size2);

  cout << "Width: " << box.getWidth() << endl;
  cout << "Length: " << box.getLength() << endl;
  cout << "Area: " << box.getArea() << endl;

  return 0;
}
