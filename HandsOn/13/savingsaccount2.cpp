// This program allows the user to open a savings account.
// It allows them to deposit and withdraw funds from the account.
// It normalizes cents to dollars where more than 100 cennts are
// deposited.

// John Zetterman

#include <iostream>
using namespace std;

class SavingsAccount {
public:
  void deposit(int, int);
  void withdrawal(int, int);
  void balance();

private:
  int dollars = 0;
  int cents = 0;
};

void normalize(int &, int &);

int main() {
  char choice;
  int dollars;
  int cents;

  cout << "Please input the initial dollars: ";
  cin >> dollars;
  cout << "Please input the initial cents: ";
  cin >> cents;

  SavingsAccount bank1;
  bank1.deposit(dollars, cents);
  normalize(dollars, cents);

  do {
    cout << "Would you like to make a deposit? Y or y for yes" << endl;
    cin >> choice;

    if (choice == 'Y' || choice == 'y') {
      cout << "Please input the dollars to be deposited: ";
      cin >> dollars;
      cout << "Please input the cents to be deposited: ";
      cin >> cents;
      normalize(dollars, cents);
      bank1.deposit(dollars, cents);
    }
  } while (choice == 'Y' || choice == 'y');
  bank1.balance();

  do {
    cout << "Would you like to make a withdrawal? Y or y for yes" << endl;
    cin >> choice;

    if (choice == 'Y' || choice == 'y') {
      cout << "Please input the dollars to be withdrawn: ";
      cin >> dollars;
      cout << "Please input the cents to be withdrawn: ";
      cin >> cents;
      normalize(dollars, cents);
      bank1.withdrawal(dollars, cents);
    }
  } while (choice == 'Y' || choice == 'y');

  bank1.balance();

  return 0;
}

void normalize(int &dollars, int &cents) {
  dollars += cents / 100;
  cents = cents % 100;
  if (cents < 0) {
    cents += 100;
    dollars--;
  }
}

void SavingsAccount::deposit(int d, int c) {
  dollars += d;
  cents += c;
  normalize(dollars, cents);
}

void SavingsAccount::withdrawal(int d, int c) {
  dollars -= d;
  cents -= c;
  normalize(dollars, cents);
}

void SavingsAccount::balance() {
  cout << "Dollars = " << dollars << ", " << "Cents = " << cents << endl;
}
