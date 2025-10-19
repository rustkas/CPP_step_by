/*
switch без предложений break.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

  int i;

  for (i=0; i<5;i++) {
    switch(i) {
        case 0: cout << "меньше 1 ";
        case 1: cout << "меньше 2 ";
        case 2: cout << "меньше 3 ";
        case 3: cout << "меньше 4 ";
        case 4: cout << "меньше 5 ";
    }
    cout<< endl;
  }

  return 0;
}