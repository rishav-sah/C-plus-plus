#include <iostream>
using namespace std;

int main() {
  int a = 0, b = 0, swapHelper;

  cout << "Enter two integers: " << endl;
  cin >> a >> b;

  cout << "Before Swapping : " << a << " " << b << endl;

  // swapping logic using third variable
  swapHelper = a;
  a = b;
  b = swapHelper;

  cout << "After swapping : " << a << " " << b << endl;

  return 0;
}