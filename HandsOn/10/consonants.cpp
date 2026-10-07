// This program counts the number of consonants and
// outputs the value to the screen.
//
// John Zetterman

#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char userInput[50];
  char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

  cout << "Please input a string of no more than 50 characters" << endl << endl;
  cin.get(userInput, 50);
  cin.ignore();

  // Set consonants to the length of characters that were input by
  // the user. Then check each character and determine if it is a
  // vowel. If it is a vowel, decrement the total consonants by 1
  size_t consonants = strlen(userInput);
  for (int i = 0; i < static_cast<int>(strlen(userInput)); i++) {
    for (int j = 0; j < 5; j++) {
      if (tolower(userInput[i]) == tolower(vowels[j]))
        consonants--;
    }
  }

  cout << "The number of consonants is " << consonants << endl;

  return 0;
}
