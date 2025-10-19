/*
do-while demo.
*/

#include <iostream>

using namespace std;

int main() {

  int num;

  do {
    cout << "Введите число (100 для завершения): ";
    cin >> num;
  } while (num != 100);

  cout << endl;
  return 0;
}