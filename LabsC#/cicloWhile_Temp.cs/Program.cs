using System;

namespace MyApp
{
    internal class cicloWhile_Temperatura
    {
        static void Main(string[] args)
        {
            double mes = 0, promedio = 0;

            while(mes < 12)
            {
                //se inserta la temperatura durante el mes
                Console.Write("Inserte la temperatura del mes (Celsius): ");
                double temperatura = double.Parse(Console.ReadLine());

                //se sigue hacia el siguiente mes
                mes = mes + 1;

                //se suma la temperatura insertada al promedio
                promedio = promedio + temperatura;
            }

            //se calcula el promedio
            promedio = promedio / 12;

            //resultado final del promedio
            Console.WriteLine("El promedio de las de 12 temperaturas recogidas durante los meses de un año es: " + promedio + " celsius.");
        }
    }
}