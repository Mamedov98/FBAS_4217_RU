using System.Diagnostics;
using System.Text;

//string name = "Maksimus";


//Car c1 = new();
//Car c2 = new();

//int age = 20;
//object age2 = 20;
//string name = "Elvin";

//bool check = true;
//int num = 1;



//Console.WriteLine(age.GetHashCode());
//Console.WriteLine(age2.GetHashCode());
//Console.WriteLine(name.GetHashCode());
//Console.WriteLine(c1.GetHashCode());
//Console.WriteLine(c2.GetHashCode());



//Car c1 = new("Mercedes", "CLS 55 AMG", 2021);

//Console.WriteLine(c1);

//class Car
//{
//    public Car(string make, string model, int year)
//    {
//        this.make = make;
//        this.model = model;
//        this.year = year;
//    }
//    public string make;
//    public string model;
//    public int year;

//    public override string ToString()
//    {
//        return $"{this.make}\n" +
//            $"{this.model}\n" +
//            $"{this.year}\n";
//    }
//}


// StringBuilder name = new(10, 50);
// name.Append("Elvin");
// Console.WriteLine(name.Capacity);
// name.Append("Azimov");
// Console.WriteLine(name.Capacity);


StringBuilder name = new();
name.Append("Marat");
Console.WriteLine(name.Capacity);
name.EnsureCapacity(16);
Console.WriteLine(name.Capacity);
name.Capacity = name.Length;
Console.WriteLine(name.Capacity);
Console.WriteLine(name);