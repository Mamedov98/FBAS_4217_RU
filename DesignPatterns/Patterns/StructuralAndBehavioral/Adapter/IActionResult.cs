﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;

namespace Adapter
{
        public interface IActionResult
        {
            byte[] ExecuteResult(HttpListenerContext? context);
        }
}
