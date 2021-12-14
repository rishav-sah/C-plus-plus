// WAP to perform the addition of two integers and display the result.
#include <iostream>
using namespace std;

int main() {
  int num1 = 0;
  int num2 = 0;
  int sum;

  cout << "Input the two integers" << endl;
  cin >> num1 >> num2;

  sum = num1 + num2;

  cout << "The addition of " << num1 << " and " << num2 << " is " << sum << endl;
  return 0;
}