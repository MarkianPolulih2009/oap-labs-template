#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;

    std::cout << "Enter a, b, c: ";
    if (!(std::cin >> a >> b >> c)) {
        std::cout << "Error: invalid input\n";
        return 1;
    }

    const double eps = 1e-9;

    if (std::fabs(a) < eps && std::fabs(b) < eps) {
        if (std::fabs(c) < eps) {
            std::cout << "Any x\n";
        } else {
            std::cout << "No roots\n";
        }
        return 0;
    }

    if (std::fabs(a) < eps) {
        const double x = -c / b;
        std::cout << std::fixed << std::setprecision(4);
        std::cout << "x = " << x << '\n';
        return 0;
    }

    const double discriminant = b * b - 4.0 * a * c;

    if (discriminant < -eps) {
        std::cout << "No roots\n";
        return 0;
    }

    std::cout << std::fixed << std::setprecision(4);

    if (std::fabs(discriminant) < eps) {
        const double x = -b / (2.0 * a);
        std::cout << "x = " << x << '\n';
        return 0;
    }

    double x1 = (-b + std::sqrt(discriminant)) / (2.0 * a);
    double x2 = (-b - std::sqrt(discriminant)) / (2.0 * a);

    if (x1 > x2) {
        const double temp = x1;
        x1 = x2;
        x2 = temp;
    }

    std::cout << "x1 = " << x1 << '\n';
    std::cout << "x2 = " << x2 << '\n';

    return 0;
}
