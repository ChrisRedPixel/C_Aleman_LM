using System;

namespace Captura
{
    internal class Program
    {
        static void Main()
        {
            Console.Write("Ingrese un número entero: ");
            int entero = int.Parse(Console.ReadLine());

            Console.Write("Ingrese un número flotante: ");
            float flotante = float.Parse(Console.ReadLine());

            Console.Write("Ingrese un carácter: ");
            char caracter = char.Parse(Console.ReadLine());

            Console.Write("Ingrese una cadena de caracteres: ");
            string cadena = Console.ReadLine();

            Console.WriteLine();
            Console.WriteLine("El valor de tipo entero entrado es: {0}",entero);
            Console.WriteLine("El valor de tipo float entrado es: {0}",flotante);
            Console.WriteLine("El valor de tipo caracter entrado es: {0}",caracter);
            Console.WriteLine("El valor de tipo cadena entrado es: {0}",cadena);




        }
    }
}