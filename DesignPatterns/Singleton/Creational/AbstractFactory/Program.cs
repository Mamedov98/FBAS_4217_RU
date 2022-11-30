//using AbstractFactory;

//var factory = new PhysiqueCharacterFactory();

//ICharacter firstCharacter = factory.CreateCharacter();

class Teacher: IComparable, IEmployee
{
    public int CompareTo(object? obj)
    {
        var compareWith = obj as IEmployee;

        if (this.Salary > compareWith.Salary)
        {
            return this.Salary;
        }
        return compareWith.Salary;
    }
    public int Salary { get; set; }
}

class Driver : IComparable, IEmployee
{
    public int Salary { get; set; }

    public int CompareTo(object? obj)
    {
        var compareWith = obj as IEmployee;

        if (this.Salary > compareWith.Salary)
        {
            return this.Salary;
        }
        return compareWith.Salary;
    }
}

interface IEmployee
{
    public int Salary { get; set; }
}