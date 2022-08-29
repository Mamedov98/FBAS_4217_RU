using System.Diagnostics.CodeAnalysis;
using Repeat;

Car a = new() { Make = "Mercedes", Year = 2000 };
Car b = new() { Year = 2017 };

Console.WriteLine(a < b);

Showroom showroom = new() { Cars = new[] {a, b}};

showroom[1] = new Car();

Console.WriteLine(showroom[0]);
Console.WriteLine(showroom[1]);