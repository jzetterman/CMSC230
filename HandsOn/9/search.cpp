// This program accepts id numbers as input. It will then
// allow the user to search for an id and return it as output.
//
// John Zetterman

#include <iostream>
using namespace std;

bool findId(int *, int, int);

int main() {
  int numIdNumbers;
  int *idNumbers;
  int searchId;
  bool found;

  cout << "Please input the number of id numbers to be read" << endl;
  cin >> numIdNumbers;

  idNumbers = new int[numIdNumbers];
  for (int i = 0; i < numIdNumbers; i++) {
    cout << "Please enter an id number" << endl;
    cin >> *(idNumbers + i);
  }

  cout << endl << endl;

  cout << "Please input an id number to be searched" << endl;
  cin >> searchId;

  found = findId(idNumbers, numIdNumbers, searchId);
  if (found) {
    cout << searchId << " was found in the array!" << endl;
  } else {
    cout << searchId << " was not found in the array." << endl;
  }

  delete[] idNumbers;

  return 0;
}

//*******************************************************************
//                                 findId
//
// task:          This function receives a pointer containing a list of
//                integers, it's size, and the id to find. It then performs
//                a linear search on the list looking for the search id.
//
// data in:       pointer of integers, number of id's, search id
// data returned: true/false
//
//*******************************************************************

bool findId(int *idNumbers, int numIdNumbers, int searchId) {
  for (int i = 0; i < numIdNumbers; i++) {
    if (searchId == *(idNumbers + i)) {
      return true;
    }
  }

  return false;
}
