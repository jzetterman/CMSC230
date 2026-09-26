#include <iomanip>
#include <iostream>
using namespace std;

typedef int TempType[50];

float avgTemp(TempType, int);
float highTemp(TempType, int);
float lowTemp(TempType, int);

int main() {
  int numOfTemps;
  TempType temps;

  cout << "Please input the number of temperatures to be read" << endl;
  cin >> numOfTemps;

  for (int i = 0; i < numOfTemps; i++) {
    cout << "Input temperature " << (i + 1) << endl;
    cin >> temps[i];
  }

  float averageTemp = avgTemp(temps, numOfTemps);
  float highestTemp = highTemp(temps, numOfTemps);
  float lowestTemp = lowTemp(temps, numOfTemps);
  cout << fixed << showpoint << setprecision(2);
  cout << "The average temperature is " << averageTemp << endl;
  cout << "The highest temperature is " << highestTemp << endl;
  cout << "The lowest temperature is " << lowestTemp << endl;

  return 0;
}

float avgTemp(TempType temps, int numOfTemps) {
  int total = 0;

  for (int i = 0; i < numOfTemps; i++) {
    total += temps[i];
  }

  return static_cast<float>(total) / numOfTemps;
}

float highTemp(TempType temps, int numOfTemps) {
  float high;

  for (int i = 0; i < numOfTemps; i++) {
    if (high < temps[i])
      high = temps[i];
  }

  return high;
}

float lowTemp(TempType temps, int numOfTemps) {
  float low;

  for (int i = 0; i < numOfTemps; i++) {
    if (low > temps[i])
      low = temps[i];
  }

  return low;
}
