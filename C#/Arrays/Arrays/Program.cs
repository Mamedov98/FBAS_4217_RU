using System.Collections;

// Одномерный массив

int[] arr = new int[] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

// Многомерный массив
int[,] arr2 = new int[2, 2] { { 1, 2 }, { 3, 4 } };

// Зубчатый(Рваный), Jagged array
int[][] arr3 = new int[2][];
arr3[0] = new int[3] { 1, 2, 3 };
arr3[1] = new int[2] { 4, 5 };

/*
int** arr4 = new int*[2]{};

arr4[0] = new int[3] {1, 2, 3};
arr4[1] = new int[2] {4, 5};

 */


//string? name = null;

//Console.WriteLine(name);

//name ??= "Elvin";

//Console.WriteLine(name);


//List<int>? nums = new() { 1, 2, 3, 4, 5 };

//nums?.Add(6);



