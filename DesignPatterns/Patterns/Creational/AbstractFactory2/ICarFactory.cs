using AbstractFactory2;

interface ICarFactory
{
    public ICar MakeSuv();
    public ICar MakeSedan();
    public ICar MakePickup();
}

