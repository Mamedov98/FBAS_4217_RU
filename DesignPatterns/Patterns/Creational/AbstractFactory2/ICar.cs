using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractFactory2
{
    public interface ICar
    {
        public string? Make { get; set; }
        public string? Model { get; set; }
        public string? Color { get; set; }

        public void Move();
    }
}
