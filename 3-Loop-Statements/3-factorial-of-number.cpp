#include <iostream>
using namespace std;

int main() {
  int n = 0;
  cout << "Enter a number" << endl;
  cin >> n;
  int factorial = 1;

  if (n < 0) {
    cout << "Can't find the factorial for negative number" << endl;
  }

  else {
    for (int i = 2; i <= n; i++) {
      factorial *= i;
    }
    cout << "Factorial of " << n << " is: " << factorial;
  }

  return 0;
}