#include <iostream>
using namespace std;

// Sobrecarga para promedio de enteros (array de int)
double calcular_promedio(int notas[], int tam) {
    int suma = 0;
    for(int i = 0; i < tam; i++) {
        suma += notas[i];  // suma las notas enteras
    }
    return (double)suma / tam;
}

// Sobrecarga para flotantes (array de double)
double calcular_promedio(double notas[], int tam) {
    double suma = 0.0;
    for(int i = 0; i < tam; i++) {
        suma += notas[i];  // suma las notas con decimal
    }
    return suma / tam;
}

int main() {
    // Variables en main, array fijo max 50 notas
    int maxNotas = 50;
    int notasInt[50];
    double notasFloat[50];
    int contInt = 0, contFloat = 0;
    char tipo;  // i para int, f para float
    double notaD;
    int notaI;
    char seguir;

    cout << "Elija tipo de notas: i para enteros, f para flotantes: ";
    cin >> tipo;

    do {
        if(tipo == 'i') {
            cout << "Nota entera: ";
            cin >> notaI;
            notasInt[contInt] = notaI;  // guarda en array
            contInt++;
        } else if(tipo == 'f') {
            cout << "Nota float: ";
            cin >> notaD;
            notasFloat[contFloat] = notaD;  // guarda en array
            contFloat++;
        }
        cout << "Otra nota? (s/n): ";
        cin >> seguir;
    } while(seguir == 's' || seguir == 'S');

    // Llama la función según tipo
    double prom;
    if(tipo == 'i' && contInt > 0) {
        prom = calcular_promedio(notasInt, contInt);
    } else if(tipo == 'f' && contFloat > 0) {
        prom = calcular_promedio(notasFloat, contFloat);
    }
    cout << "El promedio es: " << prom << endl;  // muestra

    return 0;
}