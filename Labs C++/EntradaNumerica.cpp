#include <iostream>
using namespace std;

int main()
{
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    try
    {
        if (numero != int)
        {
            throw "Solo se permite números enteros"; //mensaje que escribe el problema
        }

        cout << "Resultado: " << numero << endl;

    }
    catch (const char* mensaje)
    {
        cout << "Problema capturado: " << mensaje <<endl;
    }

    return 0;
}