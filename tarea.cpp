#include <iostream>
using namespace std;

struct Jugadores
{
    string nombre;
    int edad;
    int dorsal;
    string posicion;
    string equipo_anterior;
    string categoria;
};


void ingreso_datos(Jugadores jugador[], int &total){
    for (int i = 0; i < total; i++)
    {
        cin.ignore(); 
        cout << "Ingrese el nombre del jugador: ";
        getline(cin, jugador[i].nombre);

        cout << "Ingrese la edad del jugador: ";
        cin >> jugador[i].edad;
        if (jugador[i].edad < 0) {
            cout << "Edad no valida. Ingrese una edad positiva." << endl;
            i--; 
            continue;
        }
        else if (jugador[i].edad <= 18)
        {
            jugador[i].categoria = "Juvenil";
        }
        else if (jugador[i].edad > 18 && jugador[i].edad < 33)
        {
            jugador[i].categoria = "Normal";
        }
        else if (jugador[i].edad >= 33)
        {
            jugador[i].categoria = "Veterano";
        }

        cout << "Ingrese el dorsal del jugador: ";
        cin >> jugador[i].dorsal;

        cin.ignore(); 
        cout << "Ingrese la posicion del jugador: ";
        getline(cin, jugador[i].posicion);

        cout << "Ingrese el equipo anterior del jugador: ";
        getline(cin, jugador[i].equipo_anterior);
    }  
}


void mostrar_datos(Jugadores jugador[], int total){
    for (int i = 0; i < total; i++)
    {
        cout << "Nombre: " << jugador[i].nombre << endl;
        cout << "Edad: " << jugador[i].edad << endl;
        cout << "Dorsal: " << jugador[i].dorsal << endl;
        cout << "Posicion: " << jugador[i].posicion << endl;
        cout << "Equipo Anterior: " << jugador[i].equipo_anterior << endl;
        cout << "Categoria: " << jugador[i].categoria << endl;
        cout << "------------------------" << endl;
    }   
}


int total;
Jugadores jugador[100]; 

int main(){
    int opcion = 0;

    cout << " MENU DE JUGADORES " << endl;
    cout << "------------------------" << endl;
    cout << "1. Desea ingresar jugadores? (si/no)" << endl;
    cout << "2. Jugadores por categoria: 1. Juvenil 2. Normal 3. Veterano" << endl;
    cout << "3. Mostrar jugadores ingresados" << endl;
    cout << "4. Salir" << endl;

    while (opcion != 4)
    {
        cout << "\nIngrese la opcion del menu: ";
        cin >> opcion;

        if(opcion == 1){
            int cantidad;
            cout << "Ingrese el total de jugadores a registrar: ";
            cin >> cantidad;
            ingreso_datos(jugador, cantidad);
            total = cantidad;
        }
        else if(opcion == 2){
            int cat;
            cout << "Seleccione la categoria a mostrar: " << endl;
            cout << "1. Juvenil" << endl;
            cout << "2. Normal" << endl;
            cout << "3. Veterano" << endl;
            cout << "Opcion: ";
            cin >> cat;
            string categoria_seleccionada;
            if(cat == 1) categoria_seleccionada = "Juvenil";
            else if(cat == 2) categoria_seleccionada = "Normal";
            else if(cat == 3) categoria_seleccionada = "Veterano";
            else {
                cout << "Categoria invalida!" << endl;
                continue;
            }

            cout << "\nJugadores de la categoria " << categoria_seleccionada << ":\n";
            cout << "------------------------" << endl;
            bool encontrados = false;
            for(int i = 0; i < total; i++){
                if(jugador[i].categoria == categoria_seleccionada){
                    cout << "Nombre: " << jugador[i].nombre << endl;
                    cout << "Edad: " << jugador[i].edad << endl;
                    cout << "Dorsal: " << jugador[i].dorsal << endl;
                    cout << "Posicion: " << jugador[i].posicion << endl;
                    cout << "Equipo Anterior: " << jugador[i].equipo_anterior << endl;
                    cout << "------------------------" << endl;
                    encontrados = true;
                }
            }
            if(!encontrados){
                cout << "No hay jugadores en esta categoria." << endl;
            }
        }
        else if(opcion == 3){
            mostrar_datos(jugador, total);
        }
        else if(opcion == 4){
            cout << "Saliendo..." << endl;
        }
        else{
            cout << "Opcion invalida, intente de nuevo." << endl;
        }
    }

    return 0;
}
