using Repeat;
using Repeat.Services;


//Hardware ram = new() { Name = "RAM", Description = "Ejdaha" };
Atlet atlet = new()
{
    Height = 165,
    Weight = 75,
    Strength = 100,
    IsNatural = true
};

FileService<string> fs = new()
{
    FileToWrite = SerializationService.SerializeJson(atlet),
    Path = "data.json",
    ModeToOpen = FileMode.OpenOrCreate
};

//fs.Write();


string res = fs.Read();

Atlet fromfile = new();

fromfile = SerializationService.DeSerializeJson(res) as Atlet;

Console.WriteLine(fromfile);
