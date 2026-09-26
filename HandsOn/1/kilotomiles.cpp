// This program takes kilometers and converts to miles.
// John Zetterman

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  float kilometers;
  float miles;

  // Prompt the user to enter a number of kilometers.
  cout << "Enter the amount of kilometers travelled: ";
  cin >> kilometers;

  // Convert kilometers to miles
  miles = kilometers * 1 / 1.609344;

  // Display the number of miles travelled
  cout << "Amount of miles travelled: " << setprecision(4) << miles << endl;
}
