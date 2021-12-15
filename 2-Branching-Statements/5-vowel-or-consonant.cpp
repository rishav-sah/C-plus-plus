#include <iostream>
using namespace std;

int main() {
  char ch = ' ';

  cout << "Enter a character" << endl;
  cin >> ch;

  if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
    cout << ch << " is vowel" << endl;

  } else if (ch >= 'A' && ch <= 'z') {
    cout << ch << " is consonant" << endl;
  } else {
    cout << "Please enter an valid character" << endl;
  }

  return 0;
}