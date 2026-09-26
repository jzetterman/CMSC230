#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

void parseFile(string &);

int main() {
  string fileName = "file.txt";
  cout << "Hello, CMSC 230!" << endl;

  parseFile(fileName);
  return 0;
}

void parseFile(string &file) {
  ifstream f(file);
  if (!f)
    cout << "Error: Unable to open file!" << endl;

  int count = 0;
  string firstname;
  string lastname;
  string line;

  cout << left << setw(15) << "Line Number" << setw(20) << "First Name"
       << setw(25) << "Last Name" << endl;

  while (getline(f, line)) {
    count++;
    size_t pos = line.find(' ');
    if (pos == string::npos) {
      firstname = line;
      lastname = "";
    } else {
      firstname = line.substr(0, pos);
      lastname = line.substr(pos + 1);
    }

    cout << setw(15) << "Line " + to_string(count) << setw(20) << firstname
         << setw(25) << lastname << endl;
  }

  f.close();
}
