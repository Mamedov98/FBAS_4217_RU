// Delegates - указатель на функцию. 
// Analog - pointer to function in C++


// 1. у меня есть много вызовов функций и я хочу поменять эту функцию.

#region Intro

//using System;

//namespace Delegates;

//class Program
//{
//    public delegate float MathDel(float num1, float num2);

//    static int delExample(int n1, int n2)
//    {
//        Console.WriteLine("This is delExample with int");
//        return n1 + n2;
//    }

//    static float delExample(float n1, float n2)
//    {
//        Console.WriteLine("This is delExample with float");
//        return n1 + n2;
//    }


//    static float addition2(float num1, float num2)
//    {
//        Console.WriteLine("This is addition");
//        return num1 + num2;
//    }

//    public static void Main()
//    {
//        MathDel del = addition2;
//        del(1, 2);

//        del += delExample;

//        Console.WriteLine("Вызов двух функций одновременно");
//        del(1, 2);
//    }
//}


#endregion

#region Covariance

//ArithmeticException foo1(Exception ex)
//{
//    Console.WriteLine(ex.Message);
//    return new ArithmeticException(ex.Message);
//}

//TestDel del = foo1;

//del(new Exception("Hello"));

//public delegate Exception TestDel(Exception ex);

#endregion

#region ContraVariance

//void foo1(Exception ex)
//{
//    Console.WriteLine(ex.Message);
//}

//TestDel del = foo1;

//del(new ArithmeticException("Hello"));

//public delegate void TestDel(ArithmeticException ex);

#endregion

#region AnonymousFunction

//MyDel a = () =>
//{
//    Console.WriteLine("Test");
//};

//MyDel2 b = (num1, num2) =>
//{
//    return num1 * num2;
//};

//public delegate void MyDel();
//public delegate int MyDel2(int a, int b);


#endregion


