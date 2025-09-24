#include <iostream>

using namespace std;

int main() {
    // solo puedo usar una variable para reservar memoria y deo hacer si un numero es par oimpar
    int numero;
    int *ptr = &numero; 

    cout << "Ingrese un numero: ";
    cin >> *ptr; 
    int numero;

    if (*ptr % 2 == 0) {cout << "El numero es par." << endl;}
    else { cout << "El numero es impar." << endl; }

}