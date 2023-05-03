#include <iostream>

using namespace std;

int main()
{
    int n, idioma;
    cout << "Ingrese el numero de la opcion a elegir" << endl;
    cout << "1. Configuracion del juego" << endl;
    cout << "2. Jugar con la computadota" << endl;
    cout << "3. Jugar con un usuario" << endl;
    cout << "4. Salir del juego" << endl;
    cin >> n;

    switch (n){
    case 1: cout << "Ingresa 10 palabras en ingles y 10 en espaniol"; break;
    case 2: cout << "Ingresa el idioma en que deseas jugar"; break;
    case 3: cout << "Elige el nombre en el que deseas jugar"; break;
    case 4: cout << "Saliendo del juego..." << endl; exit(-1); break;
    default: cout <<"Debe ingresar un numero en el rango de 1 a 4"; break;
    }

    return 0;
}
