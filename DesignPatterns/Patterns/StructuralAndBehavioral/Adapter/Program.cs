using Adapter;
using System.Net;
using System.Security.Cryptography;

var webHost = new WebHost(8080);

class WebHost // класс, который отвечает за общение по сети 
{
    // класс, который слушает определенный порт по определенному адресу
    private HttpListener? _listener = new(); 

	// объект, который получает ответ и кидает запрос по протоколу TCP/IP
	private HttpListenerContext? _listenerContext;

	public WebHost(UInt16 port)
	{
        _listener.Prefixes.Add($"http://localhost:{port}/"); // 127.0.0.1
		_listener.Start();

		Console.WriteLine($"Server Started on port {port}");

		while (true)
		{
			_listenerContext = _listener.GetContext();
			Console.WriteLine($"Raw url: {_listenerContext.Request.RawUrl}");
			
			this.GetResponse(_listenerContext);
		}
	}


	public void GetResponse(HttpListenerContext? context)
	{

		var url = context!.Request!.RawUrl?.Trim('/');
		byte[] bytes;
		IActionResult adapter;

		
        if (url == "json")
		{
			adapter = new JsonResult();
			bytes = adapter.ExecuteResult(context);
		}
		else if(url == "xml")
		{
            adapter = new XmlResult();
            bytes = adapter.ExecuteResult(context);
        }
		else
		{
            adapter = new HtmlResult();
            bytes = adapter.ExecuteResult(context);
        }
        context!.Response.OutputStream.Write(bytes, 0, bytes.Length);
        context.Response.Close();
	}
}



