#include <iostream>
using namespace std;

// Función "Bubble Sort" == Algoritmo de ordenamiento
void bubble(int arr[], int n) {
    for(int i = 0; i < n-1; i++)
        for(int j = 0; j < n-i-1; j++)
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
}

// Busqueda binaria que devuelte un puntero
int* busquedaBinaria(int arr[], int n, int key) {
    int inicio = 0, fin = n - 1;
    while (inicio <= fin) {
        int medio = (inicio + fin) / 2;
        if (arr[medio] == key)
            return &arr[medio];
        else if (arr[medio] < key)
            inicio = medio + 1;
        else
            fin = medio - 1;
    }
    return nullptr; //nullptr == constante de puntero nulo
}

int main() {
    // Será probado con 5 productos, pero por lógica debería funcionar con 20.
    int productos[20];
    int codigo;

    cout << "Ingrese los 20 codigos de productos:" << endl;
    for(int i = 0; i < 20; i++) {
        cout << "Producto " << i+1 << ": ";
        cin >> productos[i];
    }

    bubble(productos, 20);

    cout << endl;
    cout << "Arreglo ordenado:" << endl;
    for(int i = 0; i < 20; i++)
        cout << productos[i] << " ";

    cout << endl;
    cout << "Ingrese el codigo a buscar: " << endl;
    cin >> codigo;

    int* pos = busquedaBinaria(productos, 20, codigo);
    if (pos != nullptr) //nullptr == constante de puntero nulo
        cout << "Codigo encontrado en la posicion: " << (pos - productos) + 1 << endl;
    else
        cout << "Codigo no encontrado.\n";

    return 0;
}
