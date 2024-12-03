// main.cpp
#include <iostream>
#include "CDoubleVector.h"  // Підключаємо заголовок класу

int main() {
    // Створення об'єкта класу CDoubleVector і його ініціалізація
    CDoubleVector vec;
    vec.Init(5);

    // Встановлення значень елементів вектора
    vec.setElement(0, 10.5);
    vec.setElement(1, 20.0);
    vec.setElement(2, 30.25);
    vec.setElement(3, 40.75);
    vec.setElement(4, 50.1);

    // Виведення мінімального і максимального значень
    std::cout << "The minimum value of the vector: " << vec.getMin() << std::endl;
    std::cout << "The maximum value of the vector: " << vec.getMax() << std::endl;

    // Обчислення виразу з параметрами x, y, z
    double x = 2.0, y = 3.0, z = 1.0;
    std::cout << "The result of calculating the expression: " << vec.calculate(x, y, z) << std::endl;

    return 0;
}
