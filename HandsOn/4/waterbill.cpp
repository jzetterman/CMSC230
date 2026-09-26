// This program calculates your average water bill.

// John Zetterman

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  float wb1, wb2, wb3, wb4;

  cout << "Please enter the amount of your last four quarterly water bills "
          "(separate with a space):"
       << endl;
  cin >> wb1 >> wb2 >> wb3 >> wb4;

  cout << endl;

  float avgBill = (wb1 + wb2 + wb3 + wb4) / 12;
  if (avgBill > 75) {
    cout << fixed << setprecision(2) << "Average Monthly Bill: $" << avgBill
         << ". You are using too much water!" << endl;
  } else {
    cout << fixed << setprecision(2) << "Average Monthly Bill: $" << avgBill
         << endl;
  }

  return 0;
}
