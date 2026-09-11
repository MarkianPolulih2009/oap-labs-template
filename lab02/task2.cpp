// ЛР02. Перший проєкт. Варіант 16
// Полуліх Маркіян, КІ-21, 2026-09-11
#include <iostream>

int main() {
    int days = 0;
    std::cout << "Enter the number of days: ";
    std::cin >> days;

    int weeks = days / 7;
    int remainingDays = days % 7;

    std::cout << weeks << " weeks " << remainingDays << " days\n";
    return 0;
}
