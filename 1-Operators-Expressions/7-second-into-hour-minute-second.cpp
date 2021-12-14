#include <iostream>
using namespace std;

int main() {
  int inputSecond = 0, hour, minute, second;

  cout << "Enter seconds:" << endl;
  cin >> inputSecond;

  hour = inputSecond / (60 * 60);  // 1 hour = 60 minutes, 1 minute = 60 seconds
  minute = (inputSecond % (60 * 60) / 60);
  second = (inputSecond % (60 * 60)) % 60;

  cout << hour << " hour " << minute << " minute " << second << " second" << endl;

  return 0;
}