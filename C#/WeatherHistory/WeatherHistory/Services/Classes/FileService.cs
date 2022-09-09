using Newtonsoft.Json;
using WeatherHistory.Model;
using WeatherHistory.Services.Interfaces;

namespace WeatherHistory.Services.Classes
{
    // public class FileService : IFileService
    // {
    //     public string FileName { get; set; }
    //     public FileMode FileMode { get; set; }
    //     public IWritable ItemToWrite { get; set; }
    //     public void AppendTo()
    //     {
    //         string fileName = $"{ItemToWrite.GetType().Name}.json";
    //         
    //         using FileStream fs = new(fileName, FileMode.OpenOrCreate);
    //         JsonSerializer.Serialize(fs, ItemToWrite);
    //     }
    //
    //     public void AppendTo<T>() where T : IWritable
    //     {
    //         
    //         using FileStream fs = new(FileName, FileMode);
    //         JsonSerializer.Serialize(fs, ItemToWrite as History);
    //     }
    // }

    public class FileService : IFileService
    {
        public string FileName { get; set; }
        public FileMode FileMode { get; set; }
        public IWritable ItemToWrite { get; set; }


        public void AppendTo()
        {
            string fileName = $"{ItemToWrite.GetType().Name}.json";

            using FileStream fs = new(fileName, FileMode.OpenOrCreate);
        }

        public void AppendTo<T>() where T : IWritable
        {
            using FileStream fs = new(FileName, FileMode);
            using StreamWriter sw = new(fs);

            var settings = new JsonSerializerSettings()
            {
                TypeNameHandling = TypeNameHandling.All
            };

            var data = JsonConvert.SerializeObject(ItemToWrite, settings);
            sw.Write(data);

        }
    }
}
