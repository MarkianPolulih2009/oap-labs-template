#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;

    std::cin >> x >> y >> z;

    const double sqrtTerm = std::sqrt(x);
    const double cbrtTerm = std::cbrt(y);
    const double s = (sqrtTerm + cbrtTerm) / (1.0 + std::fabs(z));

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "x = " << x << '\n';
    std::cout << "y = " << y << '\n';
    std::cout << "z = " << z << '\n';
    std::cout << "s = " << s << '\n';

    return 0;
}
