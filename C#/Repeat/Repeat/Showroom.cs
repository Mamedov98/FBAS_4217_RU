using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Repeat
{
    internal class Showroom
    {
        public Car[] Cars { get; set; }

        public Car this[int index]
        {
            get => Cars[index]; 
            set => Cars[index] = value;
        }
    }
}
