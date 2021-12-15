#include <iostream>
using namespace std;

int main() {
  char ch = ' ';
  cout << "Enter a character" << endl;
  cin >> ch;

  if (ch >= 'A' && ch <= 'Z') {
    cout << ch << " is an uppercase letter" << endl;
  } else {
    cout << "please check your entered character" << endl;
  }

  return 0;
}