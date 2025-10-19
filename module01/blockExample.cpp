/*
программа, иллюстрирующая цикл for.
*/
#include <iostream>

using namespace std;

int main() {

  double result = 0;
  double n = 0;
  double d = 0;

  cout << "Введите значение: ";
  cin >> n;

  cout << "Введите делитель: ";
  cin >> d;

  // целевым объектом предложения if является блок
  if (d != 0) {
    cout << "d не равно нулю, поэтому делить можно" << endl;
    result = n / d;
    cout << n << " / " << d << " равно " << result << endl;
  } else {
        cout << "d равно нулю, поэтому делить нельзя" << endl;
  }

  return 0;
}