#include <iostream>
using namespace std;

// Será probado en una matriz 2 x 2; pero nuevamente por lógica debería funcionar.
const int num = 4; // como pide una matriz cuadrada, puede utilizarse mismo número.

// Función para encontrar la producción máxima
int* maximo(int matriz[num][num]) {
    int* maxPtr = &matriz[0][0];
    for(int i = 0; i < num; i++)
        for(int j = 0; j < num; j++)
            if(matriz[i][j] > *maxPtr)
                maxPtr = &matriz[i][j];
    return maxPtr;
}

// Promedio por máquina; calculado como la suma de las filas por el numero de columnas
void promedio(int matriz[num][num]) {
    for(int i = 0; i < num; i++) {
        int suma = 0;
        for(int j = 0; j < num; j++)
            suma += matriz[i][j];
        cout << "Promedio maquina " << i+1 << ": " << (suma / num) << endl;
    }
}

// Calculo de más eficiente
int eficiente(int matriz[num][num]) {
    int mejorMaquina = 0;
    int sumaMax = 0;

    for (int i = 0; i < num; i++) {
        int suma = 0;
        for (int j = 0; j < num; j++)
            suma += matriz[i][j];

        if (i == 0 || suma > sumaMax) {
            sumaMax = suma;
            mejorMaquina = i;
        }
    }

    return mejorMaquina;
}

int main() {
    int produccion[num][num];

    cout << "Ingrese los niveles de produccion:" << endl;
    for(int i = 0; i < num; i++)
        for(int j = 0; j < num; j++) {
            cout << "Maquina " << i+1 << ", Turno " << j+1 << ": ";
            cin >> produccion[i][j];
        }

    int* maxProd = maximo(produccion);
    cout << "\nProduccion maxima: " << *maxProd << endl;

    cout << endl;
    cout << ":::Promedios por maquina:::" << endl;;
    promedio(produccion);

    int mejor = eficiente(produccion);
    cout << endl;
    cout << "La maquina mas eficiente fue la maquina " << mejor+1 << endl;

    return 0;
}
