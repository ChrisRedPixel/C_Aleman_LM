using System;

namespace MyApp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double sueldoBruto, horasOvertime, horasRegulares, pagoOvertime, sueldoDescuento; 
            double sueldo3Emp = 0;
            double horasOvertimeTotal = 0;
            double pagoOvertimeTotal = 0;
            double Ciclo = 0;
            double sueldoNeto;

            do
            {
                Console.Write("Cuantas horas trabajaste?: ");
                double horasTrabajadas = double.Parse(Console.ReadLine());

                Concsole.Write("Cuanto te pagan por hora?: ");
                double pagoPorHora = double.Parse(Console.ReadLine());

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

                Ciclo = Ciclo + 1;

            }while(Ciclo < 3);

            Console.WriteLine("El sueldo de los tres empleados es: " + sueldo3Emp);

            Console.WriteLine("La cantidad de las horas overtime son: " + horasOvertimeTotal);

            Console.WriteLine("La cantidad de dinero total en las horas overtime son: " + pagoOvertimeTotal);

        }
    }
}