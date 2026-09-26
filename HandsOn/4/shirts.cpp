// This program calculates the discount based on the number of t-shirts
// purchases.

// John Zetterman

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  const int fixedPrice = 12;
  int numShirts;
  float totalPrice;
  float discount;

  cout << "Enter the number of shirts you want to purchase: " << endl;
  cin >> numShirts;

  cout << fixed << setprecision(2) << endl;

  if (numShirts < 1) {
    cout << "Enter a number greater than 0" << endl;
  } else if (numShirts > 30) {
    discount = numShirts * fixedPrice * 0.25;
    totalPrice = numShirts * fixedPrice - discount;
    cout << "Total Price: $" << totalPrice << endl;
    cout << "Discount Savings: $" << discount << "\tDiscount Percentage: 25%"
         << endl;
  } else if (numShirts > 20) {
    discount = numShirts * fixedPrice * 0.2;
    totalPrice = numShirts * fixedPrice - discount;
    cout << "Total Price: $" << totalPrice << endl;
    cout << "Discount Savings: $" << discount << "\tDiscount Percentage: 20%"
         << endl;
  } else if (numShirts > 10) {
    discount = numShirts * fixedPrice * 0.15;
    totalPrice = numShirts * fixedPrice - discount;
    cout << "Total Price: $" << totalPrice << endl;
    cout << "Discount Savings: $" << discount << "\tDiscount Percentage: 15%"
         << endl;
  } else if (numShirts >= 5) {
    discount = numShirts * fixedPrice * 0.1;
    totalPrice = numShirts * fixedPrice - discount;
    cout << "Total Price: $" << totalPrice << endl;
    cout << "Discount Savings: $" << discount << "\tDiscount Percentage: 10%"
         << endl;
  } else {
    cout << "Total Price: $" << numShirts * fixedPrice << endl;
    cout << "Discount Savings: $0" << endl;
  }

  return 0;
}
