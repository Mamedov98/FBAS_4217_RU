using Repeat.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace Repeat
{
    public class FileService<T> // Service - class can do something
    {
        public T FileToWrite { get; set; }
        public string Path { get; set; }
        public FileMode ModeToOpen { get; set; }

        public void Write()
        {
            using FileStream fs = new(Path, ModeToOpen);
            using StreamWriter sw = new StreamWriter(fs);

            sw.WriteLine(FileToWrite.ToString());
        }

        public string Read()
        {
            using FileStream fs = new(Path, ModeToOpen);
            using StreamReader sr = new StreamReader(fs);

            return sr.ReadToEnd();
        }
    }
}
