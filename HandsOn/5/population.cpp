// This program reads the population figures from people.txt and
// outputs a bar chart by year.

// John Zetterman

#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream dataIn;
  int year = 1900;
  string line;

  dataIn.open("people.txt");
  if (!dataIn)
    cout << "Failed to open the file!" << endl;

  cout << "PRARIEVILLE POPULATION GROWTH" << endl;
  cout << "(each * represents 1000 people)\n" << endl;

  while (getline(dataIn, line)) {
    string stars;
    for (int i = 0; i < stoi(line); i += 1000) {
      stars = stars + '*';
    }
    cout << year << "  " << stars << endl;
    year += 20;
  }
  dataIn.close();
  return 0;
}
