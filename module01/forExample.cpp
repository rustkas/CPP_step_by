/*
программа, иллюстрирующая цикл for.
*/
#include <iostream>

using namespace std;

int main() {

  int count;

  for (count=1; count <= 100; count=count+1) {
    cout << count << " ";
  }
  cout << endl;
  return 0;
}