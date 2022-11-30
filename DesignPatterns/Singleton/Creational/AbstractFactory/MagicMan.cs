using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractFactory
{
    public class MagicMan : ICharacter
    {
        public string? Race { get; set; }
        public float Strength { get; set; }
        public float Mane { get; set; }
        public float HP { get; set; }

        public void Attack()
        {
            Console.WriteLine("Magic Man Attacks");
        }

        public void Defence()
        {
            Console.WriteLine("Magic Defences");
        }
    }
}
