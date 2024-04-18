#include <iostream>
using namespace std;

int main()
{
    double sueldoBruto, horasTrabajadas, pagoPorHora, sueldoDescuento; 
    double sueldo3Emp = 0;
    //double sueldoNeto;

    for (double i = 0; i < 3; i++)
    {
        cout <<"Cuantas horas trabajaste?: ";
        cin >> horasTrabajadas;

        cout <<"Cuanto te pagan por hora?: ";
        cin >> pagoPorHora;

        sueldoBruto = horasTrabajadas * pagoPorHora;

        sueldoDescuento = sueldoBruto * 0.07;

        sueldoBruto = sueldoBruto - sueldoDescuento;

        sueldo3Emp = sueldo3Emp + sueldoBruto;
    }
    
    cout <<"El sueldo es: "<< sueldo3Emp <<endl;
}