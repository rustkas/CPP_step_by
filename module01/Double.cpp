/*
Эта программа иллюстрирует различия типов int и double.
*/

#include <iostream>

using namespace std;

int main() {
    int ivar;   // объявление переменной типа int
    double dvar;    // объвление переменной с плавающей точкой

    ivar = 100;   // присвоить ivar значение 100
    dvar = 100.0;   // присвоить dvar значение 100.0

    cout << "Исходное значение ivar: " << ivar << endl;
    cout << "Исходное значение dvar: " << dvar << endl;

    cout << "\n";

    // разделим переменные на 3
    ivar /= 3;
    dvar /= 3;
    
    cout << "ivar после деления: " << ivar << endl;
    cout << "dvar  после деления: " << dvar << endl;

    return 0;

}