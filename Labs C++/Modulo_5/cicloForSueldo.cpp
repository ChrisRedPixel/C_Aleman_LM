#include <iostream>
using namespace std;

int main()
{
    double sueldoBruto, horasTrabajadas, horasOvertime, horasRegulares, pagoOvertime, pagoPorHora, sueldoDescuento; 
    double sueldo3Emp = 0;
    double horasOvertimeTotal = 0;
    //double sueldoNeto;

    for (double i = 0; i < 3; i++)
    {
        cout <<"Cuantas horas trabajaste?: ";
        cin >> horasTrabajadas;

        cout <<"Cuanto te pagan por hora?: ";
        cin >> pagoPorHora;

        //sueldoBruto = horasTrabajadas * pagoPorHora;

        if (horasTrabajadas > 40)
        {
            horasOvertime = horasTrabajadas - 40;

            horasOvertimeTotal = horasOvertimeTotal + horasOvertime;

            horasRegulares = horasTrabajadas - horasOvertime;

            pagoOvertime = (horasOvertime * pagoPorHora) * 2;

            sueldoBruto = horasRegulares * pagoPorHora;

            sueldoBruto = sueldoBruto + pagoOvertime;
        }

        sueldoDescuento = sueldoBruto * 0.07;

        sueldoBruto = sueldoBruto - sueldoDescuento;

        sueldo3Emp = sueldo3Emp + sueldoBruto;
    }
    
    cout <<"El sueldo es: "<< sueldo3Emp <<endl;
}