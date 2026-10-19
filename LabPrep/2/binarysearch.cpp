#include <iostream>
using namespace std;

int binarySearch(int[], int, int);
void selectionSort(int[], int);
void bubbleSort(int[], int);

int main() {
  int size = 7;
  int arr[] = {5, 9, 1, 4, 2, 8, 3};
  int target;

  cout << "Original array: ";
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;

  //  selectionSort(arr, size);
  //  cout << "Sorted array (selectionSort): ";
  //  for (int i = 0; i < size; i++)
  //    cout << arr[i] << " ";
  //  cout << endl;

  bubbleSort(arr, size);
  cout << "Sorted array (bubbleSort): ";
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;

  cout << "What number are you looking for?" << endl;
  cin >> target;

  cout << target << " is at index " << binarySearch(arr, size, target) << "."
       << endl;

  return 0;
}

int binarySearch(int arr[], int size, int target) {
  int first = 0;
  int last = size - 1;

  while (first <= last) {
    int middle = (first + last) / 2;

    if (arr[middle] == target) {
      return middle;
    } else if (arr[middle] > target) { // drop right half
      last = middle - 1;
    } else { // drop left half
      first = middle + 1;
    }
  }
  return -1;
}

void selectionSort(int arr[], int size) {
  for (int start = 0; start < size - 1; start++) {
    int minIndex = start;
    int minValue = arr[start];

    // Find the minimum
    for (int i = start + 1; i < size; i++) {
      if (arr[i] < minValue) {
        minValue = arr[i];
        minIndex = i;
      }
    }
    arr[minIndex] = arr[start]; // swaps the larger value to the original index
                                // of the smaller value
    arr[start] =
        minValue; // moves the smaller value to the next smallest positon
  }
}

void bubbleSort(int arr[], int size) {
  int temp;

  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}
