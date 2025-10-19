// Использование оператора

#include <iostream>
using namespace std;

int main() {
    int length, width, area; //  все переменные объявляются в одном предложении
    
    length = 7; //  здесь length присваивается значение 7
    width = 5;  //  здесь width присваивается значение 5
    area = length * width;

    cout << "Площадь равна ";
    cout << area << endl;   // здесь выводится 35

    return 0;
}