// This program uses hours, pay rate, state tax and fed tax to determine gross
// and net pay.

#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  // Fill in the code to define payFile as an input file
  float gross;
  float net;
  float hours;
  float payRate;
  float stateTax;
  float fedTax;
  ifstream payFile;
  ofstream payOut;

  payOut << fixed << setprecision(2) << showpoint;

  // FILL IN THE CODE TO OPEN payFile AND ATTACH IT TO THE PHYSICAL FILE
  // NAMED payroll.dat
  payFile.open("payroll.dat", ios::in);
  payOut.open("pay.out", ios::out);

  // FILL IN CODE TO WRITE A CONDITIONAL STATEMENT TO CHECK IF payfile
  // DOES NOT EXIST.
  if (!payFile) {
    cout << "Error opening file. \n";
    cout << "It may not exist where indicated" << endl;
    return 1;
  }

  payOut << "Payrate      Hours    Gross Pay       Net Pay" << endl << endl;
  // FILL IN CODE TO get "hours" from THE payfile FILE.
  payFile >> hours;

  // FILL IN CODE TO WRITE A LOOP CONDITION TO RUN WHILE payfile HAS MORE
  // DATA TO PROCESS.
  while (payFile) {
    payFile >> payRate >> stateTax >> fedTax;
    gross = payRate * hours;
    net = gross - (gross * stateTax) - (gross * fedTax);

    payOut << setw(8) << payRate << setw(15) << hours << setw(12) << gross
           << setw(12) << net << endl;

    payFile >> hours; // FILL IN THE CODE TO FINISH THIS WITH THE APPROPRIATE
                      // VARIABLE TO BE INPUT
  }
  payFile.close();
  payOut.close();

  return 0;
}
