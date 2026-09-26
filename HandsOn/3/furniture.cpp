//  This program will calculate the cost of each piece of chairs
//  and also the total cost of all chairs sold.

//  John Zetterman

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  float accCost = 85;
  float modernCost = 57.50;
  float classicalCost = 127.75;
  int colonial, modern, classical;

  cout << setprecision(2) << fixed << showpoint;
  cout << "Please input the number of American Colonial Chairs sold: " << endl;
  cin >> colonial;
  cout << endl;
  cout << "Please includeput the number of Modern Chairs sold: " << endl;
  cin >> modern;
  cout << endl;
  cout << "Please input the number of French Classical Chairs sold: " << endl;
  cin >> classical;
  cout << endl;

  float accTotal = accCost * colonial;
  float modernTotal = modernCost * modern;
  float classicalTotal = classicalCost * classical;

  cout << "The total sales of American Colonial chairs: " << accTotal << "\n\n";
  cout << "The total sales of Modern chairs: " << modernTotal << "\n\n";
  cout << "The total sales of French Classical chairs: " << classicalTotal
       << "\n\n";
  cout << "The total sales of all chairs: "
       << accTotal + modernTotal + classicalTotal << endl;
}
