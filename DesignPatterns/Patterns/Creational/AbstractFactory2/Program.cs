using AbstractFactory2;

class EvFactory : ICarFactory
{
    public ICar MakePickup()
    {
        return new Pickup();
    }

    public ICar MakeSedan()
    {
        return new Sedan();
    }

    public ICar MakeSuv()
    {
        return new Suv();
    }
}


class FuelFactory : ICarFactory
{
    public ICar MakePickup()
    {
        return new Pickup();
    }

    public ICar MakeSedan()
    {
        return new Sedan();
    }

    public ICar MakeSuv()
    {
        return new Suv();
    }
}