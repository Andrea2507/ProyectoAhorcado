#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

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
        case 2:
            system("cls");
            JugarComputadora();
        default:
            cout << "Debe ingresar un numero en el rango de 1 a 4" << endl;
            cout << "You must enter a number in the range from 1 to 4" << endl;
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

    cout << "Enter the number of the option to choose" << endl;
    cout << "1. Game settings" << endl;
    cout << "2. Player vs COM" << endl;
    cout << "2. Player vs Player" << endl;
    cout << "4. Exit game" << endl;
}

void ConfigurarJuego()
{
    int opc = 0;
    cout << "1. Ingresar palabras en espaniol" << endl;
    cout << "2. Ingresar palabras en ingles" << endl;

    cout << "1. Enter words in Spanish" << endl;
    cout << "2. Enter wrods in English" << endl;
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
        cout << "To enter a word type it and press enter" << endl;
        cout << "You can enter a maximum of 10 words" << endl;
        cout << "If you no longer want to enter more words just press enter" << endl;
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

void JugarComputadora()
{
    int opc = 0;
    cout << "Ingrese en que idioma desea jugar" << endl;
    cout << "1. Espaniol" << endl;
    cout << "2. Ingles" << endl;

    cout << "Enter in which language you want to play" << endl;
    cout << "1. Spanish" << endl;
    cout << "2. English" << endl;
    cin >> opc;
    if(opc == 1)
    {
        string palabra;
        srand(time(NULL));
        int numeroAleatorio = rand() % cantidadPalabrasEspaniol + 1;
        int fallos = 0;
        int aciertos = 0;
        palabra = palabrasEspaniol[numeroAleatorio-1];
        char palabrajuego[20];
        char letra;
        for (int i = 0; i < 20; i++)
        {
            palabrajuego[i] = '-';
        }
        do
        {


            cout << "Adivina la palabra" << endl;
            cout << "Escribe una letra y oprime enter" << endl;
            for (int i = 0; i < palabra.length(); i++)
            {
                cout << palabrajuego[i];
            }
            cout << endl;
            cin >> letra;
            size_t pos = -1;
            pos = palabra.find(letra);

            if(pos == string::npos)
            {
                fallos++;
                cout << "La letra no esta en la palabra" << endl;
                cout << "Fallo No. " << fallos << endl;
                if(fallos == 7) cout << "Ha perdido no pudo adivinar la palabra.";
            }

            while (pos != string::npos && pos != -1)
            {
                palabrajuego[pos] = letra;
                cout << "La letra '" << letra << "' fue encontrada en la posicion " << pos+1 << " de la palabra." << endl;
                aciertos++;
                pos = palabra.find(letra, pos + 1);
            }

            pos = -1;
            if(aciertos == palabra.length())
            {
                cout << "Excelente ha adivinado la palabra" << endl;
                system("pause");
            }
        } while (fallos < 7 && aciertos < palabra.length());

    }
    else if(opc == 2)
    {
        string palabra;
        srand(time(NULL));
        int numeroAleatorio = rand() % cantidadPalabrasIngles + 1;
        int fallos = 0;
        int aciertos = 0;
        palabra = palabrasIngles[numeroAleatorio-1];
        char palabrajuego[20];
        char letra;
        for (int i = 0; i < 20; i++)
        {
            palabrajuego[i] = '-';
        }
        do
        {

            cout << "Guess the word" << endl;
            cout << "Type a letter and press enter" << endl;
            for (int i = 0; i < palabra.length(); i++)
            {
                cout << palabrajuego[i];
            }
            cout << endl;
            cin >> letra;
            size_t pos = -1;
            pos = palabra.find(letra);

            if(pos == string::npos)
            {
                fallos++;
                cout << "The letter is not in the word" << endl;
                cout << "Fault no." << fallos << endl;
                if(fallos == 7) cout << "You lost couldn't guess the word.";
            }

            while (pos != string::npos && pos != -1)
            {
                palabrajuego[pos] = letra;
                cout << "The letter '" << letra << "' was found in the position " << pos+1 << " of the word." << endl;
                aciertos++;
                pos = palabra.find(letra, pos + 1);
            }

            pos = -1;
            if(aciertos == palabra.length())
            {
                cout << "Excellent you guessed the word" << endl;
                system("pause");
            }
        } while (fallos < 7 && aciertos < palabra.length());
    }
}
