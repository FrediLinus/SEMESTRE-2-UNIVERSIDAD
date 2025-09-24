#include <iostream>

using namespace std;

int main() {

    int fila, columna;

    cout << "Ingrese el numero de filas: ";
    cin >> fila;

    cout << "Ingrese el numero de columnas: ";
    cin >> columna;

    int matriz[fila][columna];
    for (int i = 0; i < fila; i++)
    {
        for (int x = 0; x < columna; x++)
        {
            cout << "Ingrese el elemento [" << i + 1 << "][" << x + 1 << "]: ";
            cin >> matriz[i][x];
        }
    }

    int transpuesta[columna][fila];

    for (int i = 0; i < fila; i++)
    {
        for (int x = 0; x < columna; x++)
        {
            transpuesta[x][i] = matriz[i][x];
        }
    }


    cout << "La matriz transpuesta es:\n";
    for (int i = 0; i < columna; i++)
    {
        for (int x = 0; x < fila; x++)
        {
            cout << transpuesta[i][x] << " ";
        }
        cout << endl;
    }

    cout << "La matriz original es:\n";
    for (int i = 0; i < fila; i++)
    {
        for (int x = 0; x < columna; x++)
        {
            cout << matriz[i][x] << " ";
        }
        cout << endl;
    }

    return 0;
}