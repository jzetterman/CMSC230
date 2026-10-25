// This program accepts the number of landings per day, departures
// per day, greatest number of landings in a single day, and least
// number of landings in a single day for each month of the year.
// It then calculates and outputs this data to the console.
//
// John Zetterman

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

const int TOTAL_MONTHS = 12;
const string monthNames[TOTAL_MONTHS] = {
    "January", "February", "March",     "April",   "May",      "June",
    "July",    "August",   "September", "October", "November", "December"};

struct airport {
  int landed;
  int departed;
  int bestDay;
  int worstDay;
};

float averagePlanesPerMonth(airport[], string);
int totalPlanesPerYear(airport[], string);
void planesInADay(airport[], bool);

int main() {
  airport months[TOTAL_MONTHS];
  int monthCount = 0;

  while (monthCount < TOTAL_MONTHS) {
    cout << "Please enter the number of planes that landed in "
         << monthNames[monthCount] << ": ";
    cin >> months[monthCount].landed;

    cout << "Please enter the number of planes that departed in "
         << monthNames[monthCount] << ": ";
    cin >> months[monthCount].departed;

    cout << "Please enter the greatest number of planes that landed in a "
            "single day in "
         << monthNames[monthCount] << ": ";
    cin >> months[monthCount].bestDay;

    cout << "Please enter the least number of planes that landed in a single "
            "day in "
         << monthNames[monthCount] << ": ";
    cin >> months[monthCount].worstDay;

    cout << endl;

    monthCount++;
  }

  cout << setprecision(2) << fixed;
  cout << "The average monthly landings for the year is "
       << averagePlanesPerMonth(months, "landed") << endl;
  cout << "The average monthly departures for the year is "
       << averagePlanesPerMonth(months, "departed") << endl;
  cout << "The total landings for the year is "
       << totalPlanesPerYear(months, "landed") << endl;
  cout << "The total departures for the year is "
       << totalPlanesPerYear(months, "departed") << endl;
  planesInADay(months, true);
  planesInADay(months, false);
}

// ****************************************
// Function name: averagePlanesPerMonth
//
// This function calculates the average planes that have
// either landed or departed and returns that value.
//
// Inputs: airport object, string value
//
// Outputs: float
// ****************************************

float averagePlanesPerMonth(airport planes[], string type) {
  int total = 0;

  if (type == "landed") {
    for (int i = 0; i < TOTAL_MONTHS; i++)
      total += planes[i].landed;
  } else {
    for (int i = 0; i < TOTAL_MONTHS; i++)
      total += planes[i].departed;
  }

  return static_cast<float>(total) / TOTAL_MONTHS;
}

// ****************************************
// Function name: totalPlanesPerYear
//
// This function calculates the total planes per year
// that have either landed or departed from the airport
//
// Inputs: airport object, string value
//
// Outputs: int
// ****************************************

int totalPlanesPerYear(airport planes[], string type) {
  int total = 0;

  if (type == "landed") {
    for (int i = 0; i < TOTAL_MONTHS; i++)
      total += planes[i].landed;
  } else {
    for (int i = 0; i < TOTAL_MONTHS; i++)
      total += planes[i].departed;
  }

  return total;
}

// ****************************************
// Function name: planesInADay
//
// This function calculates determines which day represents
// either the greatest or least planes landing per day and
// returns that value plus the month it occurred in.
//
// Inputs: rectangle object, bool value
//
// Outputs: N/A
// ****************************************

void planesInADay(airport planes[], bool greatest) {
  int number;
  int month = 0;

  if (greatest) {
    number = 0;
    for (int i = 0; i < TOTAL_MONTHS; i++) {
      if (planes[i].bestDay > number) {
        number = planes[i].bestDay;
        month = i;
      }
    }
    cout << "The greatest number of planes that landed in a single day is "
         << number << " which occurred in the month of " << monthNames[month]
         << endl;
  } else {
    number = planes[0].worstDay;
    for (int i = 0; i < TOTAL_MONTHS; i++) {
      if (planes[i].worstDay < number) {
        number = planes[i].worstDay;
        month = i;
      }
    }
    cout << "The least number of planes that landed in a single day is "
         << number << " which occurred in the month of " << monthNames[month]
         << endl;
  }
}
