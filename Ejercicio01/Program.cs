using System;

namespace Ejercicio01
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Hola");
            Console.WriteLine("mundo");

            Console.WriteLine("Ingrese el nombre: ");
            String nombre = Console.ReadLine();

            Console.WriteLine("Ingrese la edad: ");
            int edad = int.Parse(Console.ReadLine());

            Console.WriteLine(nombre);
            Console.WriteLine(edad);

            Console.WriteLine("Su nombre es {0} y su edad es {1}", nombre, edad);

            Console.ReadKey(true);


        }
    }
}
