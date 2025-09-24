#include <iostream>


using namespace std;

void cambio(int *num1, int *num3) {
    int temp = *num1;
    *num1 = *num3;
    *num3 = temp;
}


int main(){

    int a = 10;
    int b = 5;

    cout << "Antes del cambio: a = " << a << ", b = " << b << endl;
    cambio(&a, &b);
    cout << "Después del cambio: a = " << a << ", b = " << b << endl;


    return 0;
}

//F3434301
