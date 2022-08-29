using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Repeat
{
    class Car
    {
        public string Make { get; set; }
        public string Model { get; set; }
        public int Year { get; set; }


        public static bool operator >(Car a, Car b)
        {
            return a.Year > b.Year;
        }

        public static bool operator <(Car a, Car b)
        {
            return a.Year < b.Year;
        }
    }
}
