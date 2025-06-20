#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Hello world from Rena!" << std::endl;

    int a, b;
    std::cout << "Введите два числа: ";
    std::cin >> a >> b;

    std::cout << "Большее число: " << ((a > b) ? a : b) << std::endl;
    return 0;
}