#include <iostream>
using namespace std;

// Función para escribir las unidades básicas (1-9)
void escribirUnidad(int unidad) {
    // Línea esencial: switch para manejar unidades sin repetición
    switch (unidad) {
        case 1: cout << "uno"; break;
        case 2: cout << "dos"; break;
        case 3: cout << "tres"; break;
        case 4: cout << "cuatro"; break;
        case 5: cout << "cinco"; break;
        case 6: cout << "seis"; break;
        case 7: cout << "siete"; break;
        case 8: cout << "ocho"; break;
        case 9: cout << "nueve"; break;
    }
}

// Función para casos especiales de 10-19
void escribirEspeciales(int valor) {
    // Línea esencial: condicionales anidados para casos únicos como quince
    if (valor == 10) cout << "diez";
    else if (valor == 11) cout << "once";
    else if (valor == 12) cout << "doce";
    else if (valor == 13) cout << "trece";
    else if (valor == 14) cout << "catorce";
    else if (valor == 15) cout << "quince";
    else if (valor == 16) cout << "dieciseis";
    else if (valor == 17) cout << "diecisiete";
    else if (valor == 18) cout << "dieciocho";
    else if (valor == 19) cout << "diecinueve";
}

// Función para manejar el conector "y" en decenas >29
void agregarY(int unidad) {
    if (unidad > 0) {
        // Línea esencial: agrega " y " solo si hay unidad
        cout << " y ";
        escribirUnidad(unidad);
    }
}

// Función para decenas y unidades (10-99)
void escribirParteMedia(int resto) 
{
    int decena = resto / 10;
    int unidad = resto % 10;
    if (resto < 10) 
    {
        escribirUnidad(resto);
    } else if (resto < 20) 
    {
        escribirEspeciales(resto);
    } else if (decena == 2) 
    {
        // Línea esencial: maneja veinti- sin " y "
        cout << "veinti";
        escribirUnidad(unidad);
    } else {
        
        switch (decena) // Línea esencial: switch para decenas 30-90
        {
            case 3: cout << "treinta"; break;
            case 4: cout << "cuarenta"; break;
            case 5: cout << "cincuenta"; break;
            case 6: cout << "sesenta"; break;
            case 7: cout << "setenta"; break;
            case 8: cout << "ochenta"; break;
            case 9: cout << "noventa"; break;
        }
        agregarY(unidad);
    }
}

// Función principal para convertir, maneja centenas
void convertirNumero(int num) {
    int centena = num / 100;
    int resto = num % 100;
    if (centena > 0) 
    {
        // Línea esencial: caso especial para cien/ciento
        if (centena == 1) {
            if (resto == 0) cout << "cien";
            else cout << "ciento ";
        } else {
            escribirUnidad(centena);
            cout << "cientos ";
        }
    }
    if (resto > 0) {
        escribirParteMedia(resto);
    }
}

int main() {
    int numero;
    cout << "Ingrese un numero positivo entre 1 y 999: ";
    cin >> numero;
    if (numero < 1 || numero > 999) 
    {
        cout << "Error: numero fuera de rango." << endl;
        return 1;
    }
    convertirNumero(numero);
    cout << endl;
    return 0;   // Indica que el programa terminó correctamente
}