#include <iostream>
using namespace std;

int main()
{
    double mes = 0, promedio = 0;
    double temperatura;

    do
    {
        cout << ("Inserte la temperatura del mes: ");
        cin >> temperatura;

        mes = mes + 1;
        promedio = promedio + temperatura;
    } while (mes < 12);

    promedio = promedio / 12;

    cout <<"El promedio de las de 12 temperaturas recogidas durante los meses de un año es: "<< promedio <<endl;
    
    return 0;
}
