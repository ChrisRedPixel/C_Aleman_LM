#include <iostream>
using namespace std;

int main() 
{
    int miembro, numEntradas;

    cout << "Eres un miembro del teatro (escribe 1 para si u otro número para no.)?: ";
    cin >> miembro;

    cout << "Cuantas entradas para el teatro compraste?: ";
    cin >> numEntradas;

    if (miembro == 1)
    {
        if (numEntradas > 5)
        {
            cout << "Recibirás un 15% de descuento" <<endl;
        }
        else
        {
            cout << "Recibirás un 10% de descuento." <<endl;
        }
    }

    else
    {
        if (miembro != 1 && numEntradas > 10)
        {
            cout << "Recibirás un 5% de descuento." <<endl;
        }
        else
        {
            cout << "No hay descuento." <<endl;
        }
    }
    
    return 0;

}