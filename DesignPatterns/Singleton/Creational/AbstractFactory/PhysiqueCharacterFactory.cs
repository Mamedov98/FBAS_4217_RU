﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractFactory
{
    public class PhysiqueCharacterFactory : ICharacterFactory
    {
        public ICharacter CreateCharacter()
        {
            return new PhysiqueMan();
        }
    }
}
