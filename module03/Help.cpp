/*
Проект 3-1
Простая справочная система.
*/

#include <iostream>

using namespace std;

int main() {

  char choice;

  cout << "Справка по: " << endl;
  cout << "    1. if\n" << endl;
  cout << "    2. switch\n" << endl;
  cout << "Выбирите один из пунктов: " << endl;
  cin >> choice;

  cout << endl;

  switch (choice) {
  case '1':
    cout << "Предложение if:\n\n";
    cout << "if(условие) предложение;\n";
    cout << "else предложение;\n";
    break;
  case '2':
    cout << "Предложение switch: \n\n ";
    cout << "switch(выражение) {\n";
    cout << "    case константа:\n";
    cout << "        последовательность предложений\n";
    cout << "        break;\n";
    cout << " // ... \n";
    cout << "}\n";
    break;
  default:
    cout << "Этот пункт отсутствует. \n";
  }

  return 0;
}