/*
эта программа демонстрирует различие между целыми числами со знаком и без знака
*/

#include <iostream>


using namespace std;

int main() {
  short int i;  // короткое целое со знаком
  short unsigned int j; // короткое целое без знака

  j = 60000;
  i = j;
  cout << i << " " << j << endl;

  return 0;
}