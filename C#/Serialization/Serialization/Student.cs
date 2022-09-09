namespace Serialization;

[Serializable] // attribute
public class Student
{
    public string Name { get; set; }
    public string Surname { get; set; }
    public int Age { get; set; }
    public float GPA { get; set; }

    public override string ToString()
    {
        return $"Name: {Name}\n" +
               $"Surname: {Surname}\n" +
               $"Age: {Age}\n" +
               $"GPA: {GPA}\n";
    }
}