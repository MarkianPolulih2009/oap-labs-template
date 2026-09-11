// ЛР01. Налаштування середовища розробки. Варіант 16
// Полуліх Маркіян, група КІ-21, 11.09.2026

#include <iostream>

int main() {
    std::cout << "Student: Polulih Markian\n";
    std::cout << "Group:   KI-21\n";
    std::cout << "Variant: 16\n";

#if defined(_MSC_VER)
    std::cout << "Compiler: MSVC " << _MSC_VER
              << ", standard " << _MSVC_LANG << '\n';
#elif defined(__clang__)
    std::cout << "Compiler: clang " << __clang_major__
              << ", standard " << __cplusplus << '\n';
#elif defined(__GNUC__)
    std::cout << "Compiler: g++ " << __GNUC__ << '.' << __GNUC_MINOR__
              << ", standard " << __cplusplus << '\n';
#endif

    return 0;
}
