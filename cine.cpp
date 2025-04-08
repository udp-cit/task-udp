//Created by facundo-ahumada.

#include <iostream>
using namespace std;

int precioEntrada(int edad) {
    int valor;

    //Constantes condicionales para verificar simplemente los rangos de edad;
    if(edad < 5) {
        cout << "Ingresas gratis al cine." << endl;
    } else if(edad >= 5 && edad <= 17) {
        valor = 5;
        cout << "Tu entrada cuesta $" << valor << endl;
    } else if(edad >= 18 && edad <= 59) {
        valor = 10;
        cout << "Tu entrada cuesta $" << valor << endl;
    } else {
        valor = 6;
        cout << "Tu entrada cuesta $" << valor << endl;
    }

    return 0;
}

int main() {
    int edad;
    // Ingreso de la edad
    cout << "Ingresa tu edad" << endl;
    cin >> edad;
    // Aplicar condición para no tener edades imposibles.
    if(edad < 0) {
        cout << "No puedes tener una edad negativa." << endl;
    } else {
        precioEntrada(edad);
    }
    return 0;
}
