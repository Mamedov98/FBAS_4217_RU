
var a = MySingleton.GetInstance();
var b = MySingleton.GetInstance();
var c = MySingleton.GetInstance();

a.Name = "Elvin";

Console.WriteLine(a.Name);
Console.WriteLine(b.Name);
Console.WriteLine(c.Name);


public class MySingleton
{
    private static MySingleton? _instance; // instance of an own object 
    public string? Name { get; set; }

    public static MySingleton GetInstance()
    {
        if (_instance == null)
            _instance = new MySingleton() { Name = "Hello" };
        return _instance;
    }
}


