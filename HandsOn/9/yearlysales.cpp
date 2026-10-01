// This program takes in the yearly sales figures by month
// and finds the sum and average of sales for the year.
//
// John Zetterman

#include <iostream>
using namespace std;

float sum(float *, int);
float average(float, int);

int main() {
  int numMonths;
  float *salesPerMonth;

  cout << "Please input the number of monthly sales figures" << endl;
  cin >> numMonths;

  salesPerMonth = new float[numMonths];
  for (int i = 0; i < numMonths; i++) {
    cout << "Please input the sales for month " << i + 1 << endl;
    cin >> *(salesPerMonth + i);
  }

  float totalSales = sum(salesPerMonth, numMonths);
  float avgSales = average(totalSales, numMonths);

  cout << "The total sales for the year is $" << totalSales << endl;
  cout << "The average sales for the year is $" << avgSales << endl;

  delete[] salesPerMonth;

  return 0;
}

//*******************************************************************
//                                 sum
//
// task:          This function receives a pointer containing a list of
//                integers and it's size. It then performs sums them
//                and returns the sum as a float.
//
// data in:       pointer of integers, number of id's
// data returned: float
//
//*******************************************************************

float sum(float *values, int count) {
  float total = 0;
  for (int i = 0; i < count; i++) {
    total += *(values + i);
  }
  return total;
}

//*******************************************************************
//                                 average
//
// task:          This function receives a total and a count and
//                returns the average.
//
// data in:       floating point total, integer count
// data returned: float
//
//*******************************************************************

float average(float total, int count) { return total / count; }
