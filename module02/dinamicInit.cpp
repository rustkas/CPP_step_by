/*
Демонстрация динамической инициализации
*/

#include <iostream>

using namespace std;

int main() {

  double radius = 4.0, height = 5.0;

  // динамически инициализируем переменную volume
  double volume = 3.1416 * radius * radius * height;
  cout << "Объем равен " << volume << endl;
  cout << endl;

  return 0;
}