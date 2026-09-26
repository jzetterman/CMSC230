#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  float sales, commission;
  cout << "Enter the amount of sales: " << endl;
  cin >> sales;

  cout << fixed << setprecision(0);

  if (sales > 15000) {
    commission = sales * 0.2;
    cout << "Commission is " << commission << endl;
  } else if (sales > 10000) {
    commission = sales * 0.15;
    cout << "Commission is " << commission << endl;
  } else {
    commission = sales * 0.1;
    cout << "Commission is " << commission << endl;
  }
  return 0;
}
