// ЛР02. Пошук помилок. Варіант 16
// Полуліх Маркіян, КІ-21, 2026-09-11
#include <iostream>

int square(int number);

int main() {
    int first = 0;
    int second = 0;
    std::cout << "Enter two integers: ";
    std::cin >> first >> second;

    int sum = first + second;
    std::cout << "Sum = " << sum << '\n';
    std::cout << "Square of sum = " << square(sum) << '\n';
    std::cout << "Average = " << static_cast<double>(sum) / 2 << '\n';
    return 0;
}

int square(int number) {
    return number * number;
}
