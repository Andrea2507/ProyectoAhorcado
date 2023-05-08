#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int cantidadPalabrasEspaniol =0;
int cantidadPalabrasIngles = 0;
string palabrasEspaniol[10];
string palabrasIngles[10];

void Menu();
void ConfigurarJuego();
void JugarComputadora();

int main()
{
    int n;
    do
    {
        system("cls");
        Menu();
        cin >> n;

        switch (n)
        {
        case 1:
            system("cls");
            ConfigurarJuego();
            break;

        default:
            cout << "Debe ingresar un numero en el rango de 1 a 4" << endl;
            break;
        }
    } while (n != 4);

    return 0;
}

void Menu()
{
    cout << "Ingrese el numero de la opcion a elegir" << endl;
    cout << "1. Configuracion del juego" << endl;
    cout << "2. Jugar con la computadora" << endl;
    cout << "3. Jugar con un usuario" << endl;
    cout << "4. Salir del juego" << endl;
}
void ConfigurarJuego()
{
    int opc = 0;
    cout << "Ingrese el numero de opcion a elegir"<<endl;
    cout << "1. Ingresar palabras en espaniol" << endl;
    cout << "2. Ingresar palabras en ingles" << endl;
    cin >> opc;
    if(opc == 1)
    {
        cout << "Para ingresar una palabra Escribala y oprima enter" << endl;
        cout << "Puede ingresar un maximo de 10 palabras" << endl;
        cout << "Si ya no desea ingresar mas palabras solo oprima enter" << endl;
        int contador = 0;
        string palabra = "";
        cin.ignore();
        do
        {
            palabra = "";
            cout << contador+1 << ": ";

            getline(cin, palabra);
            if(!palabra.empty())
            {
                palabrasEspaniol[contador] = palabra;
                contador ++;
            }
        } while (palabra.length() > 0 && contador < 10);
        cantidadPalabrasEspaniol = contador;
    }
    else if(opc == 2)
    {
        cout << "Para ingresar una palabra Escribala y oprima enter" << endl;
        cout << "Puede ingresar un maximo de 10 palabras" << endl;
        cout << "Si ya no desea ingresar mas palabras solo oprima enter" << endl;
        int contador = 0;
        string palabra = "";
        cin.ignore();
        do
        {
            palabra = "";
            cout << contador+1 << ": ";
            getline(cin, palabra);
            if(!palabra.empty())
            {
                palabrasIngles[contador] = palabra;
                contador ++;
            }
        } while (palabra.length() > 0 && contador < 10);
        cantidadPalabrasIngles = contador;
    }
}
