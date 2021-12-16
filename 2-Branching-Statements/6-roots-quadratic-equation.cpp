#include <cmath>
#include <iostream>
using namespace std;

int main() {
  float a = 0, b = 0, c = 0, real, imag, dis, r1, r2;

  cout << "Enter the known values of a, b and c" << endl;
  cin >> a >> b >> c;

  dis = b * b - 4 * a * c;

  if (a == 0) {
    cout << "The quadratic equation doesn't exists" << endl;
  }

  else if (dis == 0) {
    cout << "The roots are equal" << endl;
    r1 = r2 = -b / 2 * a;
    cout << "roots are : " << r1 << " and " << r2 << endl;
  }

  else if (dis > 0) {
    cout << "The roots are real and unequal" << endl;
    r1 = (-b + sqrt(dis)) / (2 * a);
    r2 = (-b - sqrt(dis)) / (2 * a);
    cout << "The roots are : " << r1 << " and " << r2 << endl;
  }

  else {
    cout << "The roots are imaginary" << endl;
    real = -b / (2 * a);
    imag = sqrt(-dis) / (2 * a);
    cout << "The roots are : " << real << " + " << imag << "i"
         << " and " << real << " - " << imag << "i" << endl;
  }

  return 0;
}