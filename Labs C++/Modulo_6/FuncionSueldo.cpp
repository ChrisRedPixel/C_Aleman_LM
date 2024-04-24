#include <iostream>
using namespace std;

double calcularSueldoFinal(double Ventas)
{
    double Sueldo;

    Sueldo = Ventas * 0.15;

    if(Ventas >= 1500)
    {
        Sueldo = Sueldo + 125;
    }

    return Sueldo;
}

int main()
{
    double Ventas, Sueldo;

    cout <<"Cuanto dinero realizó el empleado?: ";
    cin >> Ventas;

    Sueldo = calcularSueldoFinal(Ventas);

    cout <<"Su sueldo total es: "<< Sueldo <<endl;

    return 0;
}