// This program compares two names and tells the user if they
// are the same or not.
//
// John Zetterman

#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char name1[50], name2[50];

  cout << "Please input the first name" << endl;
  cin.get(name1, 50);
  cin.ignore();
  cout << "Please input the second name" << endl;
  cin.get(name2, 50);
  cin.ignore();

  cout << "\n" << "The names are as follows" << endl;

  if (strcmp(name1, name2) < 0) {
    cout << name1 << endl << name2 << endl;
    cout << "The names are not the same" << endl;
  } else if (strcmp(name1, name2) == 0) {
    cout << name1 << endl << name2 << endl;
    cout << "The names are the same" << endl;
  } else {
    cout << name2 << endl << name1 << endl;
    cout << "The names are not the same" << endl;
  }

  return 0;
}
