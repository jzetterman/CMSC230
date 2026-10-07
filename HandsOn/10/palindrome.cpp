// Checks to see if the characters entered are a
// palindrome or not
//
// John Zetterman

#include <cstring>
#include <iostream>
using namespace std;

bool checkPalindrome(char[]);

const int MAX_SIZE = 50;

int main() {
  char inputStr[MAX_SIZE];
  cout << "Enter a string of no more than 50 characters" << endl;
  cin >> inputStr;

  if (checkPalindrome(inputStr))
    cout << "You entered a palindrome" << endl;
  else
    cout << "You did not enter a palindrome" << endl;

  return 0;
}

//************************************************************
//
// Function: checkPalindrome
//
// Description: Compares the first and last element of a char
//              array to see if they match
//
// Inputs: Up to a 50 character char array
//
// Outputs: bool
//
//************************************************************

bool checkPalindrome(char input[]) {
  int size = strlen(input);

  for (int i = 0; i < size / 2; i++) {
    if (input[i] != input[size - i - 1])
      return false;
  }

  return true;
}
