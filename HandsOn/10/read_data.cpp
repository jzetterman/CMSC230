// Reads out the last name entered by the user
//
// John Zetterman

#include <iostream>
using namespace std;

int main() {
  char lastname[10];

  cout << "Please enter your last name (no more than 9 characters): ";
  cin >> lastname;

  cout << "The name entered is " << lastname << endl;
}
