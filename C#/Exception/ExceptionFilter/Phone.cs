namespace ExceptionFilter;

public class Phone
{
    public string Make { get; set; }
    public string Model { get; set; }

    public static Phone CreatePhone()
    {
        Console.WriteLine("Enter Make: ");
        string make = Console.ReadLine();
        Console.WriteLine("Enter Model: ");
        string model  = Console.ReadLine();

        if (make == "mi")
        {
            throw new Exception() { HResult = 400, Source = "We do not sell MI"};
        }

        return new Phone { Make = make, Model = model };
    }
}