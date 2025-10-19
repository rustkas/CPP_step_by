/*
Простой "Генератор поговорок"
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

  int num;

  cout << "Введите число от 1 до 3: ";
  cin >> num;

  switch (num) {
    case 1:
        cout << "Под лежачий камень вода не течёт." << endl;
        break;
    case 2:
        cout << "Лучше синица в руках, чем журавль в небе." << endl;
        break;
    case 3:
        cout << "У дурака деньги долго не держатся." << endl;
        break;
    default:
        cout << "Вы можите вводить только 1, 2 или 3." << endl;
        
  }

  return 0;
}