using Repeat.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace Repeat
{
    public class Hardware : IWritable, ISerializable
    {
        public string Name { get; set; }
        public string Description { get; set; }

        public override string ToString()
        {
            return $"{Name}\n" +
                $"{Description}\n";
        }
    }
}
