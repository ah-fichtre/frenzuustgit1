#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Hello world from Rena!" << std::endl;

    int a, b;
    std::cout << "������� ��� �����: ";
    std::cin >> a >> b;

    std::cout << "������� �����: " << ((a > b) ? a : b) << std::endl;
    return 0;
}