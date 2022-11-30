namespace AbstractFactory
{
    internal class PhysiqueMan : ICharacter
    {
        public string? Race { get ;  set ;  }
        public float Strength { get ;  set ;  }
        public float Mane { get ;  set ;  }
        public float HP { get ;  set ;  }

        public void Attack()
        {
            Console.WriteLine("Physique Attacks");
        }

        public void Defence()
        {
            Console.WriteLine("Physique Defences");
        }
    }
}