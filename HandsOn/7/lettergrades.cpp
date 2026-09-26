// This program takes letter grades as input and
// outputs the total number of each letter grade.

// John Zetterman

#include <iostream>
using namespace std;

typedef char GradesType[50];

void recordGrade(GradesType &, int &);
int gradeCount(GradesType, int, char);

int main() {
  int numOfGrades;
  GradesType grades;

  cout << "Please the number of grades to be read in. No more than 50" << endl;
  cin >> numOfGrades;

  recordGrade(grades, numOfGrades);

  int A = gradeCount(grades, numOfGrades, 'A');
  cout << "Number of A = " << A << endl;
  int B = gradeCount(grades, numOfGrades, 'B');
  cout << "Number of B = " << B << endl;
  int C = gradeCount(grades, numOfGrades, 'C');
  cout << "Number of C = " << C << endl;
  int D = gradeCount(grades, numOfGrades, 'D');
  cout << "Number of D = " << D << endl;
  int F = gradeCount(grades, numOfGrades, 'F');
  cout << "Number of F = " << F << endl;

  return 0;
}

void recordGrade(GradesType &grades, int &numOfGrades) {
  cout << "All grades must be upper case A B C D or F" << endl;
  for (int i = 0; i < numOfGrades; i++) {
    cout << "Input a grade" << endl;
    cin >> grades[i];
  }
}

int gradeCount(GradesType grades, int numOfGrades, char grade) {
  int count = 0;

  for (int i = 0; i < numOfGrades; i++) {
    if (grades[i] == grade)
      count++;
  }

  return count;
}
