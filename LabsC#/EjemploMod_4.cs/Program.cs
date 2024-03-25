using System;

namespace EjemploMod_4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Introduce un número: ");
            int n = int.Parse(Console.ReadLine());

            if (n > 0) {
                Console.WriteLine("El número es positivo");
            }
        }
    }
}