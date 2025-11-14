#include <iostream>
using namespace std;
// Función para calcular el número de monedas de cada denominación
void calcular_monedas(int cantidad_centavos, int &dolares, int &cincuenta_centavos, int &veinticinco_centavos, int &diez_centavos, int &cinco_centavos, int &un_centavo) {
    dolares = cantidad_centavos / 100; // Calcula el número de dólares
    cantidad_centavos %= 100; // Actualiza la cantidad restante de centavos

    cincuenta_centavos = cantidad_centavos / 50; // Calcula el número de monedas de 50 centavos
    cantidad_centavos %= 50; // Actualiza la cantidad restante de centavos

    veinticinco_centavos = cantidad_centavos / 25; // Calcula el número de monedas de 25 centavos
    cantidad_centavos %= 25; // Actualiza la cantidad restante de centavos

    diez_centavos = cantidad_centavos / 10; // Calcula el número de monedas de 10 centavos
    cantidad_centavos %= 10; // Actualiza la cantidad restante de centavos

    cinco_centavos = cantidad_centavos / 5; // Calcula el número de monedas de 5 centavos
    cantidad_centavos %= 5; // Actualiza la cantidad restante de centavos

    un_centavo = cantidad_centavos; // Lo que queda son los centavos restantes
}  
int main() {
    float cantidad; // Variable para almacenar la cantidad en dinero
    cout << "Ingrese la cantidad de dinero: "<< endl;
    cin >> cantidad; // Lee la cantidad ingresada por el usuario

    int cantidad_centavos = static_cast<int>(cantidad * 100); // Convierte la cantidad a centavos para facilitar los cálculos

    int dolares = 0, cincuenta_centavos = 0, veinticinco_centavos = 0, diez_centavos = 0, cinco_centavos = 0, un_centavo = 0; // Variables para almacenar el número de monedas de cada denominación

    // Llama a la función para calcular el número de monedas
    calcular_monedas(cantidad_centavos, dolares, cincuenta_centavos, veinticinco_centavos, diez_centavos, cinco_centavos, un_centavo);

    // Muestra el resultado al usuario
    cout << "La cantidad de " << cantidad << " se puede dividir en:"<< endl;
    cout << dolares << " dolares"<< endl;
    cout << cincuenta_centavos << " Cantidad de monedas de 50 centavos"<< endl;
    cout << veinticinco_centavos << " Cantidad de monedas de 25 centavos"<< endl;
    cout << diez_centavos << "Cantidad de monedas de 10 centavos"<< endl;
    cout << cinco_centavos << " Cantidad de monedas de 5 centavos"<< endl;
    cout << un_centavo << " Cantidad de monedas de 1 centavo"<< endl;

    return 0;
} 
