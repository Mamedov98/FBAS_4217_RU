// FileStream - поток, для работы с файлами. 


using System.Data.SqlTypes;
using System.Text;

string textToWrite = Console.ReadLine();

#region TrivialMethod



// FileStream fs = new("data.txt", FileMode.OpenOrCreate);

// .net6.0

// byte[] buffer = Encoding.ASCII.GetBytes(textToWrite);
//
// if (fs.CanWrite)
// {
//     fs.Write(buffer, 0, buffer.Length);
//     fs.Close();
// }
#endregion

#region UsingKeyword

// using var fs = new FileStream("data.txt", FileMode.Open);
// using var sw = new StreamWriter(fs);
// sw.WriteLine(textToWrite);

#endregion

#region StreamReader

// using var fs = new FileStream("data.txt", FileMode.Open);
// using var sr = new StreamReader(fs);
// var result = sr.ReadLine();

// Console.WriteLine(result);

#endregion


