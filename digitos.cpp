//Created by facundo-ahumada.

#include <iostream>
using namespace std;

int contarDigitos(int numero) {
    //Inicializamos variable contador = 0;
    int contador = 0;
    //Recorremos la variable numero durante su ciclo de > 0;
    while (numero > 0) {
        // Aplicamos división, para poder ir sacando último dígito cada vez.
        numero = numero / 10;
        // Sumamor 1 a la variable contador.
        contador = contador + 1;
    }
    // Simple mensaje.
    cout << "Tu numero tiene " << contador << " digitos" << endl;
    return 0;
}

int main() {
    int numero;
    // Ingreso del número a aplicar función
    cout << "Ingresa un numero positivo" << endl;
    cin >> numero;

    // Condicional de en qué parte aplicar situación.
    if (numero < 0) {
        cout << "Tu numero no es valido, RECUERDA: Debe ser positivo." << endl;
    } else {
        // Aplicar función.
        contarDigitos(numero);
    }
    return 0;
}