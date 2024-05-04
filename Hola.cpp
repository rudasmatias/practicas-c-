#include <iostream>
#include <vector>
#include <limits> // Incluir la cabecera de <limits> para utilizar std::numeric_limits

int main() {
    std::vector<int> datos;

    std::cout << "Ingrese 5 datos enteros:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        int dato;
        std::cout << "Dato " << i + 1 << ": ";
        std::cin >> dato;

        // Verificar si la entrada es válida
        while (std::cin.fail()) {
            std::cin.clear(); // Limpiar el estado de error
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Descartar entrada incorrecta
            std::cout << "Entrada inválida. Por favor, ingrese un número entero: ";
            std::cin >> dato;
        }

        datos.push_back(dato);
    }

    std::cout << "Los datos ingresados son: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << datos[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
