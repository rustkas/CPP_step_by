/*
Расчитываем корни чисело от 1 до 99.
*/

#include <iostream>

using namespace std;

int main() {

  int i;

  for (i = 50; i >= -50; i = i - 10) {
    cout << i << ' ';
  }
  cout << endl;
  return 0;
}