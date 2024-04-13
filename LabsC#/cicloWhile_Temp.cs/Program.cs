using System;

namespace MyApp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double mes = 0, promedio = 0;

            while(mes < 12)
            {
                Console.Write("Inserte la temperatura del mes: ");
                double temperatura = double.Parse(Console.ReadLine());

                mes = mes + 1;
                promedio = promedio + temperatura;
            }

            promedio = promedio / 12;

            Console.WriteLine("El promedio de las de 12 temperaturas recogidas durante los meses de un año es: " + promedio);
        }
    }
}