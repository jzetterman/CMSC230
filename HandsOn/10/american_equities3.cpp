// This program tests a password for the American Equities
// web page to see if the format is correct

// John Zetterman

#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

// function prototypes
bool testPassWord(char[]);
int countLetters(char *);
int countDigits(char *);
bool isAllLower(char *);

int main() {
  char passWord[20];
  bool validPassword = false;

  while (!validPassword) {
    cout << "Enter a password consisting of exactly 6 "
         << "letters and 4 digits:" << endl;

    cin.getline(passWord, 20);

    if (testPassWord(passWord)) {
      cout << "Please wait - your password is being verified" << endl;
      validPassword = true;
    } else {
      cout << "Invalid password. Please enter a password "
           << "with exactly 6 lowercase letters and 4 digits" << endl;
      cout << "For example, my37run94g is valid" << endl;
    }
  }

  // FILL IN THE CODE THAT WILL CALL countLetters and
  // countDigits and will print to the screen both the number of
  // letters and digits contained in the password.
  int lettersCount = countLetters(passWord);
  int digitsCount = countDigits(passWord);

  cout << "The number of letters in the password is " << lettersCount << endl;
  cout << "The number of digits in the password is " << digitsCount << endl;

  return 0;
}

//**************************************************************
//                       testPassWord
//
// task:			determines if the word contained in the
//				    character array passed to it, contains
//					exactly 5 letters and 3 digits.
// data in:			a word contained in a character array
// data returned:   true if the word contains 5 letters & 3
//					digits, false otherwise
//
//**************************************************************

bool testPassWord(char custPass[]) {
  int numLetters, numDigits, length;
  bool checkLower;

  // Before doing anything else make sure the password is
  // all lowercase letters.
  if (!islower(*custPass))
    return false;

  length = strlen(custPass);
  numLetters = countLetters(custPass);
  numDigits = countDigits(custPass);
  checkLower = isAllLower(custPass);

  if (numLetters == 6 && numDigits == 4 && length == 10 && checkLower == true)
    return true;
  else
    return false;
}

// the next 2 functions are from Sample Program 10.5
//**************************************************************
//                       countLetters
//
// task:			counts the number of letters (both
//                  capital and lower case in the string
// data in:			a string
// data returned:   the number of letters in the string
//
//**************************************************************

int countLetters(char *strPtr) {
  int occurs = 0;

  while (*strPtr != '\0') {
    if (isalpha(*strPtr))
      occurs++;
    strPtr++;
  }

  return occurs;
}

//**************************************************************
//                       countDigits
//
// task:			counts the number of digitts in the string
// data in:			a string
// data returned:   the number of digits in the string
//
//**************************************************************

int countDigits(char *strPtr) // this function counts the
// number of digits
{
  int occurs = 0;

  while (*strPtr != '\0') {
    if (isdigit(*strPtr)) // isdigit determines if
      // the character is a digit
      occurs++;
    strPtr++;
  }

  return occurs;
}

bool isAllLower(char *strPtr) {
  while (*strPtr != '\0') {
    if (isalpha(*strPtr)) {
      if (!islower(*strPtr))
        return false;
    }
    strPtr++;
  }

  return true;
}
