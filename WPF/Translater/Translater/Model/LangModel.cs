using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Translater.Model
{
    namespace Lang
    {
        public class LangModel
        {
            public Data data { get; set; }
        }

        public class Data
        {
            public Language[] languages { get; set; }
        }

        public class Language
        {
            public string language { get; set; }
        }
    }
}