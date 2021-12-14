#include <iostream>
using namespace std;
#define PI 3.14

int main() {
  float radius, area;

  cout << "Enter the radius: " << endl;
  cin >> radius;

  area = PI * radius * radius;

  cout << "Area = " << area << endl;
  return 0;
}