#include <iostream>
using namespace std;

// Función Matriz
void CambioOrden(int original[2][3], int transpuesta[3][2]) {
    // ciclo para la matriz
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            // Cambio de orden, j => i; i => j
            transpuesta[j][i] = original[i][j];
        }
    }
}

int main() {
    // Cambio de orden
    int matriz[2][3], transpuesta[3][2];

    cout << "Ingrese los elementos de una matriz 2x3:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }
    }

    CambioOrden(matriz, transpuesta);

    cout << "Matriz transpuesta:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
