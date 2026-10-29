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

  SavingsAccount(int, int);
  SavingsAccount();
  ~SavingsAccount();

private:
  int dollars;
  int cents;
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

  SavingsAccount bank1(dollars, cents);

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

  cout << endl;
  cout << "Creating bank2" << endl;
  SavingsAccount bank2;
  cout << "Adding $1475.99 to bank2" << endl;
  bank2.deposit(1475, 99);
  cout << "Adding $12.87 to bank2" << endl;
  bank2.deposit(12, 87);
  bank2.balance();

  cout << "Withdrawing $100.50 from bank2" << endl;
  bank2.withdrawal(100, 50);
  cout << "Attempting to withdraw $1400 from bank2" << endl;
  bank2.withdrawal(1400, 0);
  bank2.balance();

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
  if (dollars - d > 0) {
    dollars -= d;
    cents -= c;
    normalize(dollars, cents);
  } else
    cout << "You have insufficient funds." << endl;
}

void SavingsAccount::balance() {
  cout << "Dollars = " << dollars << ", " << "Cents = " << cents << endl;
}

// Custom constructor
SavingsAccount::SavingsAccount(int d, int c) {
  dollars = d;
  cents = c;
  normalize(dollars, cents);
}

// Default constructor
SavingsAccount::SavingsAccount() {
  dollars = 0;
  cents = 0;
}

SavingsAccount::~SavingsAccount() {}
