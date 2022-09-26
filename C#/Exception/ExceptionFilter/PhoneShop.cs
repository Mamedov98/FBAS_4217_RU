using System.Net;

namespace ExceptionFilter;

public class PhoneShop
{
    public static int MaxCapacity { get; } = 10;
    private List<Phone> Phones { get; } = new();
    
    public void Add(Phone newPhone)
    {
        if (Phones.Count == MaxCapacity)
        {
            throw new Exception() {HResult = 403, Source = "Full Capacity"};
        }
        Phones.Add(newPhone);
    }

    public void Add()
    {
        if (Phones.Count == MaxCapacity)
        {
            throw new Exception() { HResult = 403, Source = "Full Capacity" };
        }

        try
        {
            Phones.Add(Phone.CreatePhone());
        }
        catch (Exception e)
        {
            Console.WriteLine(e.HResult);
            Console.WriteLine(e.Source);
            throw new Exception("Can't create phone");
        }
    }
}