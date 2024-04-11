using System;

namespace MyApp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Cual es su nombre?: ");//Se inserta el nombre del usador
            string suNombre = string.Parse(Console.ReadLine());

            for (int i = 1; i <= 10; i = i + 1)
            {
                Console.WriteLine("Hola " + suNombre);//El nombre que se insertó se imprime
            }
        }
    }
}