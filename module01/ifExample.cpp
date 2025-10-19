#include <iostream>

using namespace std;

int main() {

  int a, b, c;

  a = 2;
  b = 3;

  if (a < b)
    cout << "a меньше b" << endl;

  // это предложение ничего не не выведет на экран
  if (a == b)
    cout << "это вы не увидите" << endl;

  cout << endl;

  c = a - b; // c содержит -1
  cout << "c содержит -1" << endl;
  if (c >= 0)
    cout << "c неотрицательно" << endl;
  if (c < 0)
    cout << "c отрицательно" << endl;

  cout << endl;

  c = b - a; // c содержит 1
  cout << "c содержит 1" << endl;
  if (c >= 0)
    cout << "c неотрицательно" << endl;
  if (c < 0)
    cout << "c отрицательно" << endl;

  return 0;
}