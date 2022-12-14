using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractFactory
{
    public interface ICharacter
    {
        public string? Race { get; set; }
        public float Strength { get; set; }
        public float Mane { get; set; }
        public float HP { get; set; }

        public void Attack();
        public void Defence();
    }
}
