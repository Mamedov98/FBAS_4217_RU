using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;

namespace Adapter
{
    public class HtmlResult : IActionResult
    {
        public byte[] ExecuteResult(HttpListenerContext? context)
        {
            var bytes = File.ReadAllBytes("error.html");
            return bytes;
        }
    }
}
