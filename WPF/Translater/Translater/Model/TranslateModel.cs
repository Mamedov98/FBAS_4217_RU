using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Translater.Model
{
    namespace Translate
    {
        public class TranslateModel
        {
            public Data data { get; set; }
        }
        public class Data
        {
            public Translation[] translations { get; set; }
        }


        public class Translation
        {
            public string translatedText { get; set; }
        }
    }
}
