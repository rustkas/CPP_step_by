/*
Объявление переменной управления циклом внутри предложения for.
*/

#include <iostream>

using namespace std;

int main() {

  
  int sum = 0;
  int fact = 1;

  for (int i = 1; i <= 5; i++) {
    sum += i;
    fact *= i;
  }
  
  cout << "Сумма равна "<< sum << endl;
  cout << "Факториал равен "<< fact << endl;

  return 0;
}