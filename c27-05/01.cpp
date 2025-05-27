#include <iostream>
using namespace std;

void sumaAlternada(int arr[], int n) {
    // Definimos variables de suma en 0.
    int sumaPar = 0, sumaImpar = 0;

    // Realizamos ciclo diferencial de par e impar.
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            sumaPar += arr[i];
        else
            sumaImpar += arr[i];
    }

    // Cout posiciones
    cout << "Suma posiciones pares: " << sumaPar << endl;
    cout << "Suma posiciones impares: " << sumaImpar << endl;

    // Validación
    if (sumaPar > sumaImpar)
        cout << "La suma pares es mayor." << endl;
    else if (sumaImpar > sumaPar)
        cout << "La suma impares es mayor." << endl;
    else
        cout << "Ambas sumas son iguales." << endl;
}

int main() {
    // Arreglo (Se probó con 6 números, pero debería funcionar correctamente con 0)
    // Recordar 0 es par.
    int numeros[20];

    cout << "Ingrese 20 números enteros:" << endl;
    for (int i = 0; i < 20; i++) {
        cout << i << ": ";
        cin >> numeros[i];
    }

    sumaAlternada(numeros, 20);

    return 0;
}
