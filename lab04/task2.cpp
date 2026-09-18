#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    double x = 0.0;
    const double a = -1.0;
    const double b = 2.0;

    std::cout << "Enter x: ";
    if (!(std::cin >> x)) {
        std::cout << "Error: invalid input\n";
        return 1;
    }

    const double eps = 1e-9;
    double y = 0.0;
    int branch = 0;

    if (x < a) {
        branch = 1;
        y = std::exp(-(x * x));
    } else if (x <= b) {
        branch = 2;
        y = std::pow(x, 3.0) + 1.0;
    } else {
        branch = 3;
        if (x - 2.0 <= eps) {
            std::cout << "Error: x is outside the domain of ln(x - 2)\n";
            return 1;
        }
        y = std::log(x - 2.0);
    }

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "x = " << x << '\n';
    std::cout << "branch = " << branch << '\n';
    std::cout << "y = " << y << '\n';

    return 0;
}
