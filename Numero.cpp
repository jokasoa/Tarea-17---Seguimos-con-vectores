#include <iostream>
#include <string>

// Función para convertir números de 0 a 19 en palabras
std::string convertirUnidades(int numero) {
    static const std::string unidades[] = {"cero", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve",
                                           "diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
    return unidades[numero];
}

// Función para convertir decenas de 20 a 99 en palabras
std::string convertirDecenas(int numero) {
    static const std::string decenas[] = {"", "", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    if (numero < 20) {
        return convertirUnidades(numero);
    } else {
        int unidad = numero % 10;
        if (unidad == 0) {
            return decenas[numero / 10];
        } else {
            return decenas[numero / 10] + " y " + convertirUnidades(unidad);
        }
    }
}

// Función para convertir centenas de 100 a 999 en palabras
std::string convertirCentenas(int numero) {
    static const std::string centenas[] = {"", "cien", "doscientos", "trescientos", "cuatrocientos", "quinientos",
                                           "seiscientos", "setecientos", "ochocientos", "novecientos"};
    if (numero == 100) {
        return "cien";
    } else if (numero < 100) {
        return convertirDecenas(numero);
    } else {
        int resto = numero % 100;
        return centenas[numero / 100] + (resto == 0 ? "" : " " + convertirDecenas(resto));
    }
}

// Función para convertir miles de 1000 a 9999 en palabras
std::string convertirMiles(int numero) {
    if (numero < 1000) {
        return convertirCentenas(numero);
    } else {
        int resto = numero % 1000;
        int miles = numero / 1000;
        if (miles == 1) {
            return "mil" + (resto == 0 ? "" : " " + convertirCentenas(resto));
        } else {
            return convertirUnidades(miles) + " mil" + (resto == 0 ? "" : " " + convertirCentenas(resto));
        }
    }
}

// Función principal para convertir un número en palabras
std::string convertirNumeroEnPalabras(int numero) {
    if (numero < 0 || numero > 9999) {
        return "Número fuera de rango";
    }
    return convertirMiles(numero);
}

int main() {
    int numero;
    
    std::cout << "Ingrese un número entre 0 y 9999: ";
    std::cin >> numero;

    std::string resultado = convertirNumeroEnPalabras(numero);
    std::cout << "El número " << numero << " en palabras es: " << resultado << std::endl;

    return 0;
}
