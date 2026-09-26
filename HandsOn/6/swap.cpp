// This program reads two floating point numbers and swaps
// them before returning them.
//
// John Zetterman

#include <iostream>
using namespace std;

void swap(float &, float &);

int main() {
  float number1, number2;

  cout << "Enter the first number" << endl;
  cout << "Then press enter" << endl;
  cin >> number1;

  cout << "Enter the second number" << endl;
  cout << "Then press enter" << endl;
  cin >> number2;

  cout << "\nYou input the numbers as " << number1 << " and " << number2
       << endl;

  swap(number1, number2);

  cout << "After swapping, the first number has the value of " << number1
       << " which was the value of the second number." << endl;
  cout << "The second number has the value of " << number2
       << " which was the value of the first number." << endl;

  return 0;
}

void swap(float &number1, float &number2) {
  float temp;
  temp = number1;
  number1 = number2;
  number2 = temp;
}
