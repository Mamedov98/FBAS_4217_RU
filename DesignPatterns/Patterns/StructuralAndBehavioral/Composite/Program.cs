interface ITestSystem
{
    public List<Subject>? Subjects { get; set; }
    public bool IsComposite()
    {
        if (Subjects == null || Subjects.Count == 0) return false;
        return true;
    }

    public void AddSubject(string? name);
    public void RemoveSubject(string? name);
    public void Clear();
}

class TechnicalTestSystem : ITestSystem
{
    public List<Subject>? Subjects { get; set; }

    public void AddSubject(string? name)
    {
        Subjects?.Add(new() { Name = name});
    }
    public void RemoveSubject(string? name)
    {
        Subjects?.Remove(Subjects?.Find(x => x.Name! == name)!);    
    }
    public void Clear()
    {
        Subjects?.Clear();
    }
}



class Subject
{
    public string? Name { get; set; }
    List<Category>? Categories { get; set; }
}

class Category
{
    public string? Name { get; set; }
    public List<Test>? Tests { get; set; }
}
class Test
{
    public string? Name { get; set; }
}





