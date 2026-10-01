// This program calculates the average of the scores provided
// and sorts them in ascending order using bubble sort.

// John Zetterman

#include <iostream>
using namespace std;

void sortScores(int *, int);

int main() {
  int *scores;
  int numScores;
  int scoresTotal = 0;
  float average;

  cout << "How many scores will be entered? ";
  cin >> numScores;

  scores = new int[numScores];
  for (int i = 0; i < numScores; i++) {
    cout << "Enter Score " << i + 1 << ": ";
    cin >> *(scores + i);
    scoresTotal += scores[i];
  }

  average = static_cast<float>(scoresTotal) / numScores;
  cout << "The average of the scores is " << average << endl << endl;

  cout << "Here are the scores in ascending order" << endl;
  sortScores(scores, numScores);
  for (int i = 0; i < numScores; i++) {
    cout << scores[i] << endl;
  }

  return 0;
}

//***************************************************************************
//                                 sortScores
//
// task:          This function receives a pointer containing an integer list
//                and it's size and performs bubble sort in ascending order.
//
// data in:       pointer of integers, number of scores
// data returned: nothing
//
//***************************************************************************
void sortScores(int *scores, int count) {
  for (int i = 0; i < count - 1; i++) {
    for (int j = 0; j < count - i - 1; j++) {
      if (scores[j] > scores[j + 1]) {
        int temp = scores[j];
        scores[j] = scores[j + 1];
        scores[j + 1] = temp;
      }
    }
  }
}
