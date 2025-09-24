#include <iostream>


using namespace std;


void leerDatos(int* arr, int cantidad) {
    for (int i = 0; i < cantidad; ++i) {
        cout << "Ingrese el dato " << i + 1 << ": ";
        cin >> arr[i];
    }
}


void imprimirArray( int* arr, int cantidad) {
    cout << "Datos ingresados: ";
    for (int i = 0; i < cantidad; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int cantidad;
    cout << "Ingrese la cantidad de datos: ";
    cin >> cantidad;
    

    int* arreglo = new int[cantidad];
    
    leerDatos(arreglo, cantidad);
    imprimirArray(arreglo, cantidad);
    
    
    delete[] arreglo;
    return 0;
}

