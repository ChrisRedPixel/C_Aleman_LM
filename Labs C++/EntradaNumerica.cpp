#include <iostream>
using namespace std;

int main()
{
    float numero; //variable de tipo flat
    int num_entero; //variable de tipo entero

    cout << "Ingrese un número entero: ";
    cin >> numero;

    try
    {
        if (numero != num_entero) //condicion si el numero no es igual a un numero entero
        {
            throw "El número ingresado es un numero entero.";
        }

        cout << "El número entero ingresado es: " << numero << endl;

    }
    catch (const char* mensaje)
    {
        cout << "Excepción capturado: " << mensaje <<endl;
    }

    return 0;
}