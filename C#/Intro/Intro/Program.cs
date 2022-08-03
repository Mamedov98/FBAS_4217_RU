using System;
using System.Collections;
using System.Collections.ObjectModel;
using System.Drawing;
using System.Net;
using System.Security.Cryptography;
using System.Text;
using System.Threading.Channels;


namespace Intro
{
    class Program
    {
        public enum Colors
        {
            RED,
            GREEN,
            BLUE
        };

        public static string ShowColor(Colors mycolor) => mycolor switch
        {
            Colors.RED => "Red",
            Colors.BLUE => "Blue",
            Colors.GREEN => "Green",
            _ => "default"
        };

        // public static void showHello() => Console.WriteLine("Hello");
        // public static string showHello() => "Hello";

        public static void Main()
        {
            #region Part 1



            // Console.WriteLine("Enter your name: ");
            // string name = Console.ReadLine();
            //
            // Console.WriteLine("Enter your surname: ");
            // string surname = Console.ReadLine();
            //
            // Console.WriteLine("Enter your age: ");
            // // int age = Int32.Parse(Console.ReadLine()); // Плохо 🤔
            // // int age = Convert.ToInt32(Console.ReadLine()); // Норм 😉
            //
            // int age;
            // bool result = Int32.TryParse(Console.ReadLine(), out age); // Отлично 🐱‍👤 out age = &age
            //
            // if (result)
            // {
            //     Console.WriteLine($"Your name is: {name}\n" +
            //                       $"Your surname is: {surname}\n" +
            //                       $"Your age is: {age}");
            // }
            //
            // var t = 3.3;

            #endregion

            #region Part2

            // int selection = Int32.Parse(Console.ReadLine());

            // string selection = Console.ReadLine();
            //
            // switch (selection)
            // {
            //     case "1":
            //         Console.WriteLine("One");
            //         break;
            //     case "2":
            //         Console.WriteLine("Two");
            //         break;
            //     case "3":
            //         Console.WriteLine("Three");
            //         break;
            //     default:
            //         Console.WriteLine("default");
            //         break;
            // }

            // switch expression 


            #endregion

.
        }
    }
}

