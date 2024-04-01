using System;

namespace MyApp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Escribe la antiguedad del empleado (en años): ");
            int antiguedad = int.Parse(Console.ReadLine());

            if(antiguedad >= 5)
            {
                Console.WriteLine("El empleado es elegible para el bono. El empleado recibirá $1000.");
            }

            if(antiguedad < 5)
            {
                Console.WriteLine("El empleado no es elegible para el bono.");
            }
        }
    }
}