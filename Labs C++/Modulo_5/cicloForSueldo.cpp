#include <iostream>
using namespace std;

int main()
{
    double sueldoBruto, horasTrabajadas, pagoPorHora; 
    double sueldo3Emp = 0;
    //double sueldoNeto;

    for (double i = 0; i < 3; i++)
    {
        cout <<"Cuantas horas trabajaste?: ";
        cin >> horasTrabajadas;

        cout <<"Cuanto te pagan por hora?: ";
        cin >> pagoPorHora;

        sueldoBruto = horasTrabajadas * pagoPorHora;

        sueldo3Emp = sueldo3Emp + sueldoBruto;
    }
    
    cout <<"El sueldo es: "<< sueldo3Emp <<endl;
}