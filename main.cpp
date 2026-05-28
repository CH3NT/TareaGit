#include <iostream>

void mostrarMenu() {
    std::cout << "\n=== Menú Principal ===" << std::endl;
    std::cout << "1. Sumar" << std::endl;
    std::cout << "2. Restar" << std::endl;
    std::cout << "0. Salir" << std::endl;
}

int main() {
    mostrarMenu();
    std::cout << "Menú cargado correctamente." << std::endl;
    return 0;
}
