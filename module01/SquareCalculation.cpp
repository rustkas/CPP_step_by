// Использование оператора

#include <iostream>
using namespace std;

int main() {
    int length; //  объявление переменной
    int width;  // объявление другой переменной
    int area;   //  объявление третьей переменой

    length = 7; //  здесь length присваивается значение 7
    width = 5;  //  здесь width присваивается значение 5
    area = length * width;

    cout << "Площадь равна ";
    cout << area << endl;   // здесь выводится 35

    return 0;
}