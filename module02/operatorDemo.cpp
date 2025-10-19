/*
Демонстрация операторов отношения и логических.
*/

#include <iostream>

using namespace std;

int main() {

  int i, j;
  bool b1, b2;

  i = 10;
  j = 11;

  cout << boolalpha; // включаем вывод "true"/"false"

  if (i < j)
    cout << "i < j" << endl;
  if (i <= j)
    cout << "i <= j" << endl;
  if (i != j)
    cout << "i != j" << endl;
  if (i == j)
    cout << " это не будет выполняться" << endl;
  if (i >= j)
    cout << " это не будет выполняться" << endl;
  if (i > j)
    cout << " это не будет выполняться" << endl;

  b1 = true;
  b2 = false;
  if (b1 && b2)
    cout << "это не будет выполняться" << endl;
  if (!(b1 && b2))
    cout << "не (" << b1 << " && " << b2 << ")" << " есть истина" << endl;

  return 0;
}