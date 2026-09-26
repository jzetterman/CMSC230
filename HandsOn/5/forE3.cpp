//  This program has the user input a number n and then finds the
//  mean of the first n positive integers

// John Zetterman

#include <iostream>
using namespace std;

int main() {
  int startValue;
  int endValue;  // value is some positive number n
  int total = 0; // total holds the sum of the first n positive numbers
  int number;    // the amount of numbers
  float mean;    // the average of the first n positive numbers

  cout << "Please enter two positive integers" << endl;
  cin >> startValue >> endValue;

  if (startValue > 0 && endValue > startValue) {
    for (number = startValue; number <= endValue; number++) {
      total = total + number;
    }

    // mean = total / value;
    mean = static_cast<float>(total) / (endValue - startValue + 1);

    cout << "The mean average of " << startValue << " to " << endValue << " is "
         << mean << endl;
  } else
    cout << "Invalid input - integer must be positive and must be >= the first."
         << endl;

  return 0;
}
