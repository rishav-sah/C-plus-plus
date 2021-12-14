#include <iostream>
using namespace std;

int main() {
  float height = 0, base = 0, area;

  cout << "Enter height and base of a triangle:" << endl;
  cin >> height >> base;

  area = 0.5 * base * height;  // 1 / 2 is 0 because (int / int = int) so, Alternatively (1.0 / 2.0)

  cout << "Area of triangle is: " << area << endl;

  return 0;
}