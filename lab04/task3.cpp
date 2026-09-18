#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    int carCode = 0;
    int days = 0;

    std::cout << "Enter car code and days: ";
    if (!(std::cin >> carCode >> days)) {
        std::cout << "Error\n";
        return 1;
    }

    double pricePerDay = 0.0;
    const char* carName = "";

    switch (carCode) {
        case 1:
            pricePerDay = 800.0;
            carName = "economy";
            break;
        case 2:
            pricePerDay = 1200.0;
            carName = "comfort";
            break;
        case 3:
            pricePerDay = 2000.0;
            carName = "business";
            break;
        case 4:
            pricePerDay = 1600.0;
            carName = "van";
            break;
        default:
            std::cout << "Error\n";
            return 1;
    }

    if (days < 1 || days > 365) {
        std::cout << "Error\n";
        return 1;
    }

    double discount = 0.0;
    if (days >= 30) {
        discount = 20.0;
    } else if (days >= 7) {
        discount = 10.0;
    }

    const double total = pricePerDay * days * (1.0 - discount / 100.0);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << carName << ", " << total << " UAH\n";

    return 0;
}
