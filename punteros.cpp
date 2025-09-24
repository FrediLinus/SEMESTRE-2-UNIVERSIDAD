#include <iostream>

using namespace std;

int main(){
    //sintaxis de punteros
    int a = 10;
    int *p = &a; // p es un puntero que apunta a la dirección
    // de memoria de a
    cout << "Valor de a: " << a << endl;
    cout << "Dirección de a: " << &a << endl;// &a obtiene la dirección de memoria de a
    cout << "Valor de p: " << p << endl;
    cout << "Valor apuntado por p: " << *p << endl; // *p desreferencia el puntero, obteniendo el valor de a
    cout << "Dirección de p: " << &p << endl;

}