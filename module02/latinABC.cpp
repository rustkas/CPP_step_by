/*
эта программа выводит латинский алфавит
*/

#include <iostream>


using namespace std;

int main() {
  char letter;
  for (letter = 'A'; letter <= 'z'; letter++) {
    cout << letter << " ";
  }
  cout << endl;
  return 0;
}