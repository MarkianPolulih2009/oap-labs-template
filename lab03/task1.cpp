#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;

    std::cin >> a >> b >> c;

    const double p = (a + b + c) / 2.0;
    const double s = std::sqrt(p * (p - a) * (p - b) * (p - c));
    const double r = s / p;
    const double R = (a * b * c) / (4.0 * s);
    const double h = (2.0 * s) / a;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "p = " << p << '\n';
    std::cout << "S = " << s << '\n';
    std::cout << "r = " << r << '\n';
    std::cout << "R = " << R << '\n';
    std::cout << "h = " << h << '\n';

    return 0;
}
