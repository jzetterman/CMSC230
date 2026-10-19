#include <iostream>
using namespace std;

int linearSearch(int[], int);

const int SIZE = 7;

int main() {
  int arr[] = {5, 9, 1, 4, 2, 8, 3};
  int target;

  cout << "Unsorted Array: ";
  for (int i = 0; i < SIZE; i++)
    cout << arr[i] << " ";
  cout << endl;

  cout << "What value are you searching for?" << endl;
  cin >> target;

  int result = linearSearch(arr, target);

  if (result != -1)
    cout << target << " was found at " << result << endl;
  else
    cout << target << " was not found." << endl;

  return 0;
}

int linearSearch(int arr[], int target) {
  for (int i = 0; i < SIZE; i++) {
    if (arr[i] == target)
      return i;
  }
  return -1;
}
