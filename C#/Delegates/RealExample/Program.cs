
using RealExample;

void firstPrint(Curator curator)
{
    Console.WriteLine($"Name of Curator: {curator.Name}\n" +
                      $"Surname of Curator: {curator.Surname}\n" +
                      $"Age of Curator: {curator.Age}");
}

void secondPrint(Curator curator)
{
    Console.WriteLine($"{curator.Name}\n" +
                      $"{curator.Surname}\n" +
                      $"{curator.Age}");
}

Curator myCurator = new()
{
    Name = "Omar",
    Surname = "Haciyev",
    Age = 20,
    PrintDelegate = firstPrint
};



