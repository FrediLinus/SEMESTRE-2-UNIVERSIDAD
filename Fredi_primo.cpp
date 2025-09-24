#include <iostream>
using namespace std;

int main() {
    int n ;
    int *p = &n; // p es un puntero que apunta a la dirección
    bool esPrimo = 1;

    cout << "Ingrese un numero: ";
    cin >> *p;
    

    if (*p <= 1) {
        esPrimo = 0;
    } else {
        for (int i = 2; i <= *p / 2; i++) {
            if (*p % i == 0) {
                esPrimo = 0;
                break;
            }
        }
    }

    if (esPrimo)
        cout << n << " es primo." << endl;
    else
        cout << n << " no es primo.";
}