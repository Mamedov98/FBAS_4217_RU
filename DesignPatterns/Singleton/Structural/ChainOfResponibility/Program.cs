using System.Net;

var listener = new HttpListener();

listener.Prefixes.Add("http://localhost:5500/");

listener.Start();

Console.WriteLine("Server started on port 5500");
while (true)
{
    var context = listener.GetContext();
    Console.Write(context.Request.RawUrl + '\t');
    Console.WriteLine(context.Request.LocalEndPoint.ToString());
}





