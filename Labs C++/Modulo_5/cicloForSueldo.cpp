#include <iostream>
using namespace std;

int main()
{
    double sueldoBruto, horasTrabajadas, horasOvertime, horasRegulares, pagoOvertime, pagoPorHora, sueldoDescuento; 
    double sueldo3Emp = 0;
    double horasOvertimeTotal = 0;
    double pagoOvertimeTotal = 0;
    double sueldoNeto;

    for (double i = 0; i < 3; i++)
    {
        cout <<"Cuantas horas trabajaste?: ";
        cin >> horasTrabajadas;

        cout <<"Cuanto te pagan por hora?: ";
        cin >> pagoPorHora;

        if (horasTrabajadas > 40)
        {
            //Calculando las horas "overtime"
            horasOvertime = horasTrabajadas - 40;
            horasOvertimeTotal = horasOvertimeTotal + horasOvertime;
            horasRegulares = horasTrabajadas - horasOvertime;

            //El sueldo bruto sin el 7% de descuento y las horas "overtime"
            sueldoBruto = horasRegulares * pagoPorHora;

            //Calculando el pago "overtime"
            pagoOvertime = (horasOvertime * pagoPorHora) * 2;
            pagoOvertimeTotal = pagoOvertimeTotal + pagoOvertime; 

            //7% de descuento
            sueldoDescuento = sueldoBruto * 0.07;

            //El sueldo neto
            sueldoNeto = (sueldoBruto - sueldoDescuento) + pagoOvertime;
        }

        else
        {
            //El sueldo bruto
            sueldoBruto = horasTrabajadas * pagoPorHora;

            //7% de descuento
            sueldoDescuento = sueldoBruto * 0.07;
            sueldoNeto = sueldoBruto - sueldoDescuento;
        }

        sueldo3Emp = sueldo3Emp + sueldoNeto;
    }
    
    cout <<"El sueldo de los tres empleados es: "<< sueldo3Emp <<endl;

    cout <<"La cantidad de las horas overtime son: "<< horasOvertimeTotal <<endl;

    cout <<"La cantidad de dinero total en las horas overtime son: "<< pagoOvertimeTotal <<endl;

    return 0;
}