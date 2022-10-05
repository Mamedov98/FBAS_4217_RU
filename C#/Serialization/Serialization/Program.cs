using System.IO.IsolatedStorage;
using System.Runtime.Serialization.Formatters.Binary;
using Serialization;
using System.IO;
using System.Text.Json;
using System.Xml.Serialization;

List<Student> students = new()
{
    new() {Name ="Elvin", Surname = "Azimov", Age = 20, GPA = 12},
    new() {Name = "Marat", Surname = "Garifulin", Age = 15, GPA = 12}
};

// 3 types of Serialization.
// 1. Binary serialization. Trivial method. Has a lot of disadvantages
// 2. XML serialization. Good method. ❤ of Banks.
// 3. JSON serialization. Excellent method. Limit of lines - 5_000_000


#region BinarySerialization

// var formatter = new BinaryFormatter();
// using var fs = new FileStream("data.bin", FileMode.OpenOrCreate); 
// formatter.Serialize(fs, students);


#endregion
#region BinaryDeSerialization

// var formatter = new BinaryFormatter();
// using var fs = new FileStream("data.bin", FileMode.OpenOrCreate);

// var result = formatter.Deserialize(fs) as List<Student>;

// Console.WriteLine(result[0].Name);

#endregion

#region XML_Serialization

// using var fs = new FileStream("data.xml", FileMode.OpenOrCreate); 
// var serializer = new XmlSerializer(typeof(List<Student>));
// serializer.Serialize(fs, students);

#endregion
#region XML_DeSerialization

// using var fs = new FileStream("data.xml", FileMode.OpenOrCreate); 
// var serializer = new XmlSerializer(typeof(List<Student>));
// var result = serializer.Deserialize(fs) as List<Student>;


// foreach (var student in result)
// {
     // Console.WriteLine(student);
// }

#endregion

#region JSON_Serialization

// using var fs = new FileStream("data.json", FileMode.OpenOrCreate);
// JsonSerializer.Serialize(fs, students);

#endregion


#region JSON_DeSerialization

// using var fs = new FileStream("data.json", FileMode.OpenOrCreate);
// using var sr = new StreamReader(fs);

// var json = sr.ReadToEnd();

// var result = JsonSerializer.Deserialize<List<Student>>(json);

// foreach (var student in result)
// {
    // Console.WriteLine(student);   
// }


#endregion
