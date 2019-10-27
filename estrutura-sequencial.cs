using System;
using System.Globalization;

namespace curso {
    class Program {
        static void Main(string[] args) {
            double A,N,raio;
            N = 3.14159;
           
            raio = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
            A = N * (raio * raio);

            Console.WriteLine("A=" + A.ToString("F4"),CultureInfo.InvariantCulture) ;
           
 
        }
    }
}