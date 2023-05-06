#include <iostream>
#include <string>

using namespace std;

const int Errores_maximos = 7;

int main()
{
    int n, idioma_palabras;
    string espaniol, ingles;

    cout << "Ingrese el numero de la opcion a elegir" << endl;
    cout << "1. Configuracion del juego" << endl;
    cout << "2. Jugar con la computadora" << endl;
    cout << "3. Jugar con un usuario" << endl;
    cout << "4. Salir del juego" << endl;
    cin >> n;

    switch (n) {
        case 1:
    cout << "Ingrese 1 para escribir palabras en español y 2 para escribir palabras en inglés" << endl;
    cin >> idioma_palabras;

    while ((idioma_palabras != 1) && (idioma_palabras != 2)){
        cout << "Debe ingresar un numero dentro del rango establecido, por favor ingrese otro" << endl;
        cin >> idioma_palabras;
    }

    if (idioma_palabras == 1) {
        cout << "Ingrese un máximo de 10 palabras en español" << endl;
        cin.ignore();
        getline(cin, espaniol);

        int contador = 1;
        for (int i = 0; i < espaniol.length(); i++) {
            if (espaniol[i] == ' ') {
                contador++;
            }
        }

        if (contador > 10) {
            cout << "Ha ingresado mas de 10 palabras" << endl;
            break;
        }
    } else {
        cout << "Ingrese un máximo de 10 palabras en inglés" << endl;
        cin.ignore();
        getline(cin, ingles);

        int contador = 1;
        for (int i = 0; i < ingles.length(); i++) {
            if (ingles[i] == ' ') {
                contador++;
            }
        }

        if (contador > 10) {
            cout << "Ha ingresado mas de 10 palabras" << endl;
            break;
        }
    }
    break;
        case 2:
            cout << "Ingresa el idioma en que deseas jugar" << endl;
            break;
        case 3:
            cout << "Elige el nombre en el que deseas jugar" << endl;
            break;
        case 4:
            cout << "Saliendo del juego..." << endl;
            exit(-1);
            break;
        default:
            cout << "Debe ingresar un numero en el rango de 1 a 4" << endl;
            break;
    }

    return 0;
}
