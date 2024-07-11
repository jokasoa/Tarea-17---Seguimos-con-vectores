#include <iostream>
#include <vector>

// Definición de la función que busca un número en un vector y devuelve la cantidad de veces que existe
int contarOcurrencias(const std::vector<int>& vec, int numero) {
    int contador = 0;
    for (int elemento : vec) {
        if (elemento == numero) {
            contador++;
        }
    }
    return contador;
}

int main() {
    // Ejemplo de uso
    std::vector<int> vec = {1, 2, 3, 4, 5, 3, 3, 7, 8, 3};
    int numero = 3;

    int ocurrencias = contarOcurrencias(vec, numero);
    std::cout << "El número " << numero << " aparece " << ocurrencias << " veces en el vector." << std::endl;

    return 0;
}
