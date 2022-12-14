interface IPart
{
    public string? Name { get; set; }
}

class CarBuilder
{
    public List<IPart>? Parts { get; set; }

    public Car BuildCar()
    {
        Car car = new();

        foreach (var part in Parts)
        {
            switch (part)
            {
                case Engine:
                    car.Engine = part;
                    break;
                case Wheels:
                    car.Wheels = part;
                    break;
            }
        }
        return car;
    }
}

class Car
{
    public IPart? Engine { get; set; }
    public IPart? Wheels { get; set; }
    public IPart? Saloon { get; set; }
}


class Engine : IPart
{
    public string? Name { get; set; } = typeof(Engine).Name;
}

class Wheels : IPart
{
    public string? Name { get; set; } = typeof(Wheels).Name;
}

class Saloon : IPart
{
    public string? Name { get; set; } = typeof(Saloon).Name;
}