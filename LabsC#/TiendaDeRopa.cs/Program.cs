using System;

namespace MyApp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Cuantos dolares costó las compras de ropa?: ");
            int precio = int.Parse(Console.ReadLine());

            Console.Write("La persona tiene la membresía de VIP?(Escribe 1 para si u otro número para no): ");
            int membresia = int.Parse(Console.ReadLine());

            if(precio >= 150 || membresia == 1)
            {
                Console.WriteLine("La persona va a recibír un descuento.");
            }

            else
            {
                Console.WriteLine("La persona NO va a recibír un descuento.");
            }
        }
    }
}