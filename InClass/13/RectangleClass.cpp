#include <iostream>
using namespace std;

class Rectangle {
private:
  double width;
  double length;

public:
  void setWidth(double);
  void setLength(double);
  double getWidth() const;
  double getLength() const;
  double getArea() const;
};

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

void Rectangle::setWidth(double w) { width = w; }

void Rectangle::setLength(double l) { length = l; }

double Rectangle::getWidth() const { return width; }

double Rectangle::getLength() const { return length; }

double Rectangle::getArea() const { return length * width; }
