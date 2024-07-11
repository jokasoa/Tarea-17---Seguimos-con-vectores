#include <iostream>
#include <vector>
#include <algorithm> // Para usar std::reverse

// Definición de la función que convierte un entero en binario y guarda el resultado en un vector
std::vector<int> convertirABinario(int numero) {
    std::vector<int> binario;
    
    // Caso especial para el número 0
    if (numero == 0) {
        binario.push_back(0);
        return binario;
    }

    // Convertir el número a binario
    while (numero > 0) {
        binario.push_back(numero % 2);
        numero /= 2;
    }

    // Invertir el vector para obtener la representación correcta
    std::reverse(binario.begin(), binario.end());
    
    return binario;
}

int main() {
    int numero;

    // Ejemplo de uso
    std::cout << "Ingrese un número entero: ";
    std::cin >> numero;

    std::vector<int> binario = convertirABinario(numero);
    
    std::cout << "El número " << numero << " en binario es: ";
    for (int bit : binario) {
        std::cout << bit;
    }
    std::cout << std::endl;

    return 0;
}
