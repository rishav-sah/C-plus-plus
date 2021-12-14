#include <iostream>
using namespace std;

int main() {
  int paisa = 0, rupee, rupeePaisa;

  cout << "Enter paisa:" << endl;
  cin >> paisa;

  rupee = paisa / 100;
  rupeePaisa = paisa % 100;

  cout << paisa << " Paisa = " << rupee << " Rupee and " << rupeePaisa << " paisa" << endl;

  return 0;
}