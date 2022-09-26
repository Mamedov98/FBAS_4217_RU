namespace RealExample;

public class Curator
{
    public delegate void PrintDel(Curator curator);

    public string Name { get; set; }
    public string Surname { get; set; }
    public int Age { get; set; }
    public PrintDel PrintDelegate { get; set; }

    void AddStudent(string studentName)
    {
        Console.WriteLine($"Student: {studentName} was added...");
    }
}