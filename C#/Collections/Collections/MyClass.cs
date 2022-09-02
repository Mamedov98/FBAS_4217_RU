class MyClass
{
    // public readonly int number;
    // public const int integer = 1;

    // public MyClass(int num)
    // {
        // number = num;
    // }

    public int Num { get; init; }

    public MyClass()
    {
        
    }
    public MyClass(int num)
    {
        Num = num;
    }
}