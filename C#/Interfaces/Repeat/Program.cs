// Interface - сущность, которая придает объекту какое либо поведение.
// Interface - Умею ли я, совершать это действие или иметь эти свойства

// MyClass myClass = new();
//
// IInterface a = new MyClass(); // MyClass* ptr = &myclass;
//
// a.foo();
//
//
// interface IInterface
// {
//     public void foo()
//     {
//         Console.WriteLine("Foo from interface...");
//     }
// }
//
//
// class MyClass : IInterface
// {
//     public void foo()
//     {
//         Console.WriteLine("Foo from class...");
//     }
// }
//
//
//
//

// ArrayList a = new() {1, '1', True};
// int b = (int)a[0];


interface IInterface
{
    public void foo();
}

class MyClass
{
    public int Type { get; set; }
}