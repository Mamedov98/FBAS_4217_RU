using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Singleton
{
    public delegate void SalaryHandler();
    public class Person
    {
        public SalaryHandler? Handler { get; set; }
    }
}
