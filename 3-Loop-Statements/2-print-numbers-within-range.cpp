#include <iostream>
using namespace std;

int main() {
  int min = 0, max = 0;
  cout << "Enter the minimum and maximum range" << endl;
  cin >> min >> max;

  int i = min;
  cout << "The minimum to maximum numbers for the given range are:" << endl;

  while (i <= max) {
    cout << i << endl;
    i++;
  }

  return 0;
}
