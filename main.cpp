#include <iostream>

int sumar(int a, int b) { return a + b; }
int restar(int a, int b) { return a - b; }

int main() {
    std::cout << "=== Calculadora Simple ===" << std::endl;
    std::cout << "2 + 3 = " << sumar(2, 3) << std::endl;
    std::cout << "5 - 2 = " << restar(5, 2) << std::endl;
    return 0;
}
