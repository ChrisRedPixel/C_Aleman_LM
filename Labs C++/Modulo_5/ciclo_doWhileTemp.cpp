#include <iostream>
using namespace std;

int main()
{
    double mes = 0, promedio = 0;
    double temperatura;

    do
    {
        //se inserta la temperatura durante el mes
        cout << ("Inserte la temperatura del mes (Celsius): ");
        cin >> temperatura;

        //se sigue hacia el siguiente mes
        mes = mes + 1;

        //se suma la temperatura insertada al promedio
        promedio = promedio + temperatura;
    } while (mes < 12);

    //se calcula el promedio
    promedio = promedio / 12;

    //resultado final del promedio
    cout <<"El promedio de las de 12 temperaturas recogidas durante los meses de un año es: "<< promedio <<" celsius."<<endl;

    return 0;
}
