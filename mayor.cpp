#include <iostream>

using namespace std;

int main() {
    int array[100];

    int n, mayor = 0, pos = 0;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "ingrese numero " << (i + 1) << ": ";
        cin >> array[i];
        if (array[i] > mayor) {
            mayor = array[i];
        }
        
    }
    
    cout << "el numero mayor es " << mayor << endl;
    return 0;
}