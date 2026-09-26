//  This program will bring in three grades and output
//  the average.to two decimal places.

//  John Zetterman

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  float grade1, grade2, grade3;

  cout << setprecision(2) << fixed << showpoint;
  cout << "Please enter the first grade: " << endl;
  cin >> grade1;
  cout << "Please enter the second grade: " << endl;
  cin >> grade2;
  cout << "Please enter the third grade: " << endl;
  cin >> grade3;

  float avg = (grade1 + grade2 + grade3) / 3;

  cout << "The average of the three grades is: " << avg << endl;
}
