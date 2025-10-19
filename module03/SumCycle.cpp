/*
Тело цикла может быть пустым.
*/

#include <iostream>

using namespace std;

int main() {

  int i;
  int sum;

  for (i = 1; i <= 10; sum += i++);
  
  cout << "Сумма равна "<< sum << endl;

  return 0;
}