using Repeat.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Repeat
{
    public class Atlet : IWritable, ISerializable
    {
        public float Strength { get; set; }
        public float Weight { get; set; }
        public float Height { get; set; }
        public bool IsNatural { get; set; }

        public override string ToString()
        {
            return $"{Strength}\n" +
                $"{Weight}\n" +
                $"{Height}\n" +
                $"{IsNatural}\n";
        }
    }
}
