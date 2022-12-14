using AbstractFactory2;

public class Pickup : ICar
{
    public string? Make { get => throw new NotImplementedException(); set => throw new NotImplementedException(); }
    public string? Model { get => throw new NotImplementedException(); set => throw new NotImplementedException(); }
    public string? Color { get => throw new NotImplementedException(); set => throw new NotImplementedException(); }

    public void Move()
    {
        throw new NotImplementedException();
    }
}