/*
Расчитываем корни чисело от 1 до 99.
*/

#include <cmath>
#include <iostream>

using namespace std;

int main() {

  int num;

  double sq_root;
  for(num=1; num < 100;num++) {
    sq_root = sqrt((double)num);
    cout << num << " " << sq_root << endl;
  }

  return 0;
}