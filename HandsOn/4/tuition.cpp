// This program calculates the cost of tuition plus room and board for both
// in-state and out of state students

// John Zetterman

#include <iostream>
#include <limits>
using namespace std;

int main() {
  const int INSTATET = 2000;
  const int OUTSTATET = 4500;
  const int INSTATERB = 2500;
  const int OUTSTATERB = 3500;

  char resident;
  char roomAndBoard;
  int tuition = 0;
  int housing = 0;

  while (true) {
    cout << "Are you an in-state resident? (Y or N)" << endl;
    cin >> resident;
    cin.ignore(numeric_limits<streamsize>::max(),
               '\n'); // Limit the evaluation to the first character entered
    if (resident == 'Y' || resident == 'N') {
      break;
    } else {
      cout << "\033[31m" << "Enter 'Y' or 'N'!" << "\033[0m"
           << endl; // Make error text red
    }
  }

  while (true) {
    cout << "Do you require room and board? (Y or N)" << endl;
    cin >> roomAndBoard;
    cin.ignore(numeric_limits<streamsize>::max(),
               '\n'); // Limit the evaluation to the first character entered
    if (roomAndBoard == 'Y' || roomAndBoard == 'N') {
      break;
    } else {
      cout << "\033[31m" << "Enter 'Y' or 'N'!" << "\033[0m"
           << endl; // Make error text red
    }
  }

  if (resident == 'Y') {
    tuition += INSTATET;
    if (roomAndBoard == 'Y') {
      housing += INSTATERB;
    }
  } else {
    tuition += OUTSTATET;
    if (roomAndBoard == 'Y') {
      housing += OUTSTATERB;
    }
  }

  cout << "Your Bill:" << endl;
  cout << "--------------------" << endl;
  cout << "Tuition\tRoom and Board" << endl;
  cout << "$" << tuition << "\t$" << housing << endl;
  cout << "--------------------" << endl;
  cout << "Total Cost: $" << tuition + housing << endl;

  return 0;
}
