/*
while demo.
*/

#include <iostream>

using namespace std;

int main() {

  int len = 0;

  cout << "Введите длину (от 1 до 79): ";
  cin >> len;

  while (len > 0 && len < 80) {
    cout << '.';
    len--;
  }
  cout << endl;
  return 0;
}