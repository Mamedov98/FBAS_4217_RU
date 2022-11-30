
//var p1 = new Person()
//{
//    Name = "Elvin",
//    Surname = "Azimov",
//    DateOfBirth = new DateTime(2001, 11, 16)
//};

//Person? p2 = p1.Clone() as Person;


//Console.WriteLine(p1.GetAge());



MyClass original = new()
{
    Value = 1
};

MyClass copy = original;


Console.WriteLine("Before:");
Console.WriteLine($"Original: {original.Value}\tCopy: {copy.Value}");

copy.Value = 10;

Console.WriteLine("After:");
Console.WriteLine($"Original: {original.Value}\tCopy: {copy.Value}");


class MyClass
{
    public int Value { get; set; }
}


class Person : ICloneable
{
    public string? Name { get; set; }
    public string? Surname { get; set; }
    public DateTime DateOfBirth { get; set; }

    private UInt16 age;
    public UInt16 GetAge()
    {
        return (UInt16)(DateTime.Now.Subtract(DateOfBirth).TotalDays / 365);
    }

    public object Clone()
    {
        return new Person()
        {
            Name = this.Name,
            Surname = this.Surname,
            DateOfBirth = this.DateOfBirth
        };
    }
}



