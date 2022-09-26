//string name = "Elvin";

//name.TestMethod();

//StringExtension.TestMethod(name);

//static class StringExtension 
//{
//    public static void TestMethod(this string a)
//    {
//        Console.WriteLine(a);
//    }
//}



List<int> nums = new() {1, 2, 3, 4, 5};

var res = nums.Select(x => x % 2 == 0);
var res2 = nums.Where(x => x % 2 == 0);


foreach (var num in res2)
{
    Console.WriteLine(num);
}