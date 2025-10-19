/*
Использование теоремы Пифагора для нахождения
длины гипотенузы прямоугольного треугольника
при заданных длинах двух его катетов.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double x, y, z;

  x = 5.0;
  y = 4.0;

  z = sqrt(x*x + y*y);

  cout << "Гипотенуза равна " << z << endl;


  return 0;
}