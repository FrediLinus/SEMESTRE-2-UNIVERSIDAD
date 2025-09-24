#include <iostream>
#include <string.h>

using namespace std;

char palabra[25];
void ingresoDatos();
int contarCaracter(char*);

int main() {
	ingresoDatos();
	contarCaracter(palabra);
	cout << "vocales: " << contarCaracter(palabra) << endl;
}

void ingresoDatos() {
	cout << "Ingrese una palabra a evaluar" << endl;
	cin.getline(palabra, 25, '\n');
	// Convertir a mayúsculas manualmente
	for (int i = 0; palabra[i] != '\0'; i++) {
		palabra[i] = toupper(palabra[i]);
	}
}

int contarCaracter(char* palabra) {
	int contador1 = 0,contador2 = 0,contador3 = 0,contador4 = 0,contador5 = 0;
	while (*palabra) {

		if (*palabra == 'A' ) {
			contador1 =1;
		}
		else if (*palabra == 'E'){
			contador2 =1;
		}
		else if (*palabra == 'I'){
			contador3 =1;
		}
		else if (*palabra == 'O'){
			contador4 =1;
		}
		else if (*palabra == 'U'){
			contador5 =1;
		}
		palabra++;
	}
	return contador1 + contador2 + contador3 + contador4 + contador5;
}