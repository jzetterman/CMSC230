#include <iostream>
using namespace std;

void reverseArray(int *, int);

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int size = 5;

  cout << "Original Array: ";
  for (int i = 0; i < size; i++)
    cout << arr[i];
  cout << endl << endl;
  reverseArray(arr, size);
  cout << "Reversed Array: ";
  for (int i = 0; i < size; i++)
    cout << arr[i];
  cout << endl << endl;

  return 0;
}

void reverseArray(int *arr, int size) {
  int *left = arr;
  int *right = arr + size - 1;

  while (right > left) {
    int temp = *right;
    *right = *left;
    *left = temp;

    left++;
    right--;
  }
}
