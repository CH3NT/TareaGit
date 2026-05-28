#include <iostream>

void mostrarMenu() {
    std::cout << "\n=== Menú Principal ===" << std::endl;
    std::cout << "1. Sumar dos números" << std::endl;
    std::cout << "2. Restar dos números" << std::endl;
    std::cout << "0. Salir" << std::endl;
    std::cout << "Seleccione una opción: ";
}

int main() {
    mostrarMenu();
    std::cout << "\nMenú mejorado y listo para usar." << std::endl;
    return 0;
}
