#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
// Función para calcular el discriminante de la ecuación cuadrática
double calcular_discriminante(double a, double b, double c) 
{
    return b * b - 4 * a * c; // Calcula D = b² - 4ac
}
// Función para resolver la ecuación cuadrática según el valor del discriminante
void resolver_ecuacion_cuadratica(double a, double b, double c) {
    double D = calcular_discriminante(a, b, c); // Llama a la función para obtener el discriminante

    // Configura la salida para mostrar dos cifras decimales
    cout << fixed << setprecision(2);

    if (D > 0) 
    { 
        double raiz_1 = (-b + sqrt(D)) / (2 * a); // Calcula la primera raíz
        double raiz_2 = (-b - sqrt(D)) / (2 * a); // Calcula la segunda raíz
        cout << "Dos soluciones reales y distintas: " << raiz_1 << " y " << raiz_2 << endl;
    } else if (D == 0) 
    { 
        double raiz = -b / (2 * a); // Calcula la raíz doble
        cout << "Una solución real doble: " << raiz << endl;
    } else { 
        double parte_real = -b / (2 * a); // Calcula la parte real
        double parte_imaginaria = sqrt(-D) / (2 * a); // Calcula la parte imaginaria
        cout << "Dos soluciones complejas: " 
             << parte_real << " + " << parte_imaginaria << "i y "
             << parte_real << " - " << parte_imaginaria << "i" << endl;
    }
}
int main() {
    double a, b, c; // Coeficientes de la ecuación cuadrática

   
    cout << "Ingrese el coeficiente a (no puede ser 0): "; // Solicita al usuario que ingrese los coeficientes
    cin >> a;
    while (a == 0) { // Asegura que a no sea cero
        cout << "El coeficiente a no puede ser 0. Ingrese nuevamente: ";
        cin >> a;
    }
    cout << "Ingrese el coeficiente b: ";
    cin >> b;
    cout << "Ingrese el coeficiente c: ";
    cin >> c;

    resolver_ecuacion_cuadratica(a, b, c);     // Llama a la función para resolver la ecuación cuadrática


    return 0; // Indica que el programa terminó correctamente

}
