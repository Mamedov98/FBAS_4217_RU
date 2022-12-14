
MyObservableCollection<int> collection = new(func);

collection.Add(5);
collection.Add(6);
collection.Add(7);
collection.Add(8);
collection.Add(9);

IPropertyChanged func(object? issuer, object? property, object? value)
{
    return new PropertyChanged()
    {
        Issuer = issuer,
        Property = property,
        Value = value
    };
}




public delegate IPropertyChanged ValueDelegate(object? issuer, object? property, object? value);

class MyObservableCollection<T> where T : new()
{
    public ValueDelegate? ValueDelegate { get; set; } 

    public event ValueDelegate? ValueHandler;
    private List<T>? Collection { get; set; }

    public MyObservableCollection(ValueDelegate? valueDelegate)
    {
        Collection = new();
        ValueDelegate = valueDelegate;
        ValueHandler = ValueDelegate;
    }

    public IPropertyChanged Add(T value)
    {
        Collection?.Add(value);
        var res = ValueHandler?.Invoke(this, nameof(Collection), value)!;
        res.ShowChanges();
        return res;
    }
}



class PropertyChanged : IPropertyChanged
{
    public object? Issuer { get; set; }
    public object? Property { get; set; }
    public object? Value { get; set; }
}


public interface IPropertyChanged
{
    public object? Issuer { get; set; }
    public object? Property { get; set; }
    public object? Value { get; set; }

    public void ShowChanges()
    {
        Console.WriteLine($"{Issuer}\tchanged {Property} to Value:\t{Value}");
    }
}
