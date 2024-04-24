#include <iostream>
using namespace std;

double calcularSueldoFinal(double Ventas)//Calculación del sueldo
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

    cout <<"Cuanto dinero realizó el empleado?: ";//Cantidad de dinero
    cin >> Ventas;

    Sueldo = calcularSueldoFinal(Ventas);

    cout <<"Su sueldo total es: "<< Sueldo <<endl;//Sueldo final

    return 0;
}