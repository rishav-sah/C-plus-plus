#include <iostream>
using namespace std;

int main() {
  float num1 = 0, num2 = 0;

  cout << "Enter two numbers" << endl;
  cin >> num1 >> num2;

  if (num1 > num2) {
    cout << num1 << " is greater than num2" << endl;
  } else {
    cout << num2 << " is greater than num1" << endl;
  }

  return 0;
}