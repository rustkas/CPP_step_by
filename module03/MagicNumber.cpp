/*
"Магическое число"
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

  int magic; // магическое число
  int guess; // догадка пользователя

  magic = rand(); // получим случайное число

  cout << "Вводите вашу догадку: " << endl;
  cin >> guess;

  if (guess == magic) {
    cout << "** Правильно **" << endl;
  }

  cout << "Maгическое чило: " << magic << endl;

  return 0;
}