#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    double voltage = 0.0;
    double current = 0.0;
    double timeHours = 0.0;
    double tariff = 0.0;

    std::cin >> voltage >> current >> timeHours >> tariff;

    const double power = voltage * current;
    const double energy = (power * timeHours) / 1000.0;
    const double cost = energy * tariff;

    std::cout << std::fixed << std::setprecision(0);
    std::cout << "Power = " << power << " W\n";

    std::cout << std::fixed << std::setprecision(3);
    std::cout << "Energy = " << energy << " kWh\n";

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Cost = " << cost << " UAH\n";

    return 0;
}
