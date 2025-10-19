/*
Демонстрация булевых значений
*/

#include <iostream>


using namespace std;

int main() {
  bool b;

  b = false;
  cout << "b равно " << b << endl;

  b = true;

  cout << "b равно " << b << endl;

  // булево значение может управлять предложением if

  if(b) cout << "Это выполняется." << endl;

  b = false;

  if(b) cout << "Это не выполняется." << endl;

  // результат действия оператора отношения является значение true/false
  cout << "10 > 9 есть " << (10 > 9) << endl;
  
  return 0;
}