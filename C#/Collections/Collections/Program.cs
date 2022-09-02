using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.ComponentModel;
using Microsoft.VisualBasic;


// int[] arr = new int[5];

//ArrayList arr = new() {"Elvin", "Kenan", 1, 2};
//List<int> arr = new List<int>();

//
// char[] symbols = new char[2] { '+', '-' };
// string operation = "42+24";
// string character = null;
//
// for (int i = 0; i < operation.Length; i++)
// {
//     for (int j = 0; j < symbols.Length; j++)
//     {
//         if (operation[i] == symbols[j])
//         {
//             character = operation[i].ToString();
//             break;
//         }
//     }
// }
// Console.WriteLine(character);

// string operation = "42+24-31";
//
// char[] operations = new char[] { '+', '-' };
//
// var res = operation.Split(operations);
//
// foreach (var nums in res)
// {
//     Console.WriteLine(nums);   
// }


// int[] nums = new int[4] {2, 1, 4, 3};
//
// var a = nums.GetLowerBound(0);
// var b = nums.GetUpperBound(0);
//
// Console.WriteLine(a);
// Console.WriteLine(b);

// int[] nums2 = new int[3];
// nums.CopyTo(nums2, 0);


//int[] a = (int[])nums.Clone();

//foreach (var VARIABLE in a)
//{
//    Console.WriteLine(VARIABLE);
//}



// List<int> nums = new();

// nums


// MyClass a = new(5);
// Console.WriteLine(a.number);

// MyClass b = new() {Num = 5};
//
// Console.WriteLine(b.Num);

// List<int> nums = new();

// IEnumerable<int> integers1 = new List<int>() { 1, 2, 3, 4, 5 };
// IEnumerable<int> integers2 = new Int32[] { 1, 2, 3, 4, 5 };
// IEnumerable integers3 = new ArrayList() { 1, 2, 3, 4, 5 };
// IEnumerable<int> integers4 = new ObservableCollection<int>() { 1, 2, 3, 4, 5 };


// List<int> nums = new(new int[] {1, 2, 3, 4, 5});
// List<int> nums2 = new(new ArrayList() {1, 2, 3, 4} as IEnumerable<int>);


// Dictionary<string, string> dict = new()
// {
//     {"name", "Elvin"},
//     {"surname", "Azimov"},
//     {"age", "20"}
// };

// Stack<int> nums = new(5);
// nums.Push(10);
// nums.Push(9);
// nums.Push(8);
// nums.Push(7);
// nums.Push(6);

// Console.WriteLine(nums.Pop());
// Console.WriteLine(nums.Peek());

// foreach (var num in nums)
// {
// Console.WriteLine(num);
// }


string name1 = "Elvin";
string name2 = "Elvin";
string name3 = "Elvin";


Tuple<string, string, string> getNames(string n1, string n2, string n3)
{
    n1 = "Fidan";
    n2 = "Nuray";
    n3 = "Shams";
    return new Tuple<string, string, string>(n1, n2, n3);
}

var res = getNames(name1, name2, name3);

Console.WriteLine(res.Item1);