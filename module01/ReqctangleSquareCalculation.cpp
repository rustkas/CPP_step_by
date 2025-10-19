/*
Интерактивная программа, вычисляющая площадь прямоугольника.
*/

#include <iostream>
using namespace std;

int main() {
    int length; // объявление переменной
    int width;  // объявление другой переменной

    cout << "Введите длинну: ";
    cin >> length;  // ввод длинны

    cout << "Введите ширину: ";
    cin >> width;  // ввод ширины

    cout << "Площадь равна ";
    cout << length * width << endl;  // ввод площади

    return 0;
}