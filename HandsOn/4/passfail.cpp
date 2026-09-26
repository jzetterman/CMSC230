// This program prints “Your Pass” if a student’s average is
// 60 or higher and prints “You fail” otherwise

// John Zetterman

#include <iostream>
using namespace std;

int main() {

  float average; // holds the grade average

  cout << "Input your average:" << endl;
  cin >> average;

  if (average > 100 || average < 0)
    cout << "Invalid data" << endl;
  else if (average >= 90)
    cout << "A" << endl;
  else if (average >= 80)
    cout << "B" << endl;
  else if (average >= 60)
    cout << "You pass" << endl;
  else
    cout << "You fail" << endl;

  return 0;
}
