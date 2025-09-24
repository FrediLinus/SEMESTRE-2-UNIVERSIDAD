#include <iostream>


using namespace std;
int *valores,elementos;

void pedir_valores() {
    cout << "Ingrese la cantidad de valores: ";
    cin >> elementos;
    valores = new int[elementos]; // Usar la variable global
    for (int i = 0; i < elementos; ++i) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> *(valores + i);
    }
}

void ordenamiento_burbuja(int* arr, int n) {
    int auxiliar;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n -i- 1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                auxiliar = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = auxiliar;
            }
        }
    }
    
}

void imprimir(int* arr, int n) {
    cout << "Valores ordenados: ";
    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}
int main(){
    pedir_valores();
    ordenamiento_burbuja(valores, elementos);
    imprimir(valores, elementos);
    delete[] valores;
    return 0;


}
