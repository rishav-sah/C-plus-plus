// WAP to find centrigrade for a given Farhenheit temeperture

#include <iostream>
using namespace std;

int main() {
  float f = 0;
  float c;

  cout << "Input the temperature in Farenheit temperature: " << endl;
  cin >> f;

  c = ((f - 32) * 5) / 9;
  cout << f << "F = " << c << " Celsius" << endl;

  return 0;
}