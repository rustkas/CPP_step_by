/*
"Магическое число"
*/

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits> 

using namespace std;

int main() {
  srand(static_cast<unsigned int>(time(nullptr))); // инициализация генератора
  int magic;                                       // магическое число
  int guess;                                       // догадка пользователя

  magic = rand() % 100; // получим случайное число

  do {
    cout << "Вводите вашу догадку: " << endl;
    guess = 0;
    // Проверяем, успешен ли ввод
    if (!(cin >> guess)) {
      cout << "Ошибка ввода! Введите целое число." << endl;
      cin.clear(); // сбрасываем флаг ошибки
      cin.ignore(numeric_limits<streamsize>::max(), '\n'); // очищаем ввод
      continue; // пропускаем итерацию
    }

    if (guess == magic) {
      cout << "** Правильно **" << endl;
      cout << magic << " и есть магическое число." << endl;
    } else {
      cout << "** ...Жаль, но вы ошиблись. **" << endl;
      if (guess > magic) {
        cout << "** Ваше число слишком велико." << endl;
      } else {
        cout << "** Ваше число слишком мало." << endl;
      }
    }
  } while (guess != magic);

  cout << "Maгическое чило: " << magic << endl;

  return 0;
}