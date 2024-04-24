#include <iostream>
using namespace std;

double Sueldo;//Variable Global: Se identifica fuera de la función para usarse en cualquier función.

double calcularSueldoFinal(double Ventas)//Calculación del sueldo
{
    Sueldo = Ventas * 0.15;
    return Sueldo;
}

int main()
{
    double Ventas;//Variable Local: Se idenfifica en una función y solo se usa en esa función

    cout <<"Cuanto dinero realizó el empleado?: ";//Cantidad de dinero
    cin >> Ventas;

    Sueldo = calcularSueldoFinal(Ventas);

    cout <<"Su sueldo es: "<< Sueldo <<endl;//Sueldo final

    return 0;
}