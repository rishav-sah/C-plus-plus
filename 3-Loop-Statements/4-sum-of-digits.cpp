#include <iostream>
using namespace std;

int main() {
  int n = 0;
  cout << "Enter a number" << endl;
  cin >> n;

  int sum = 0;
  int i = 0;

  while (i <= n) {
    sum += i;
    i++;
  }
  cout << "sum of the digits of a number is: " << sum << endl;
  return 0;
}