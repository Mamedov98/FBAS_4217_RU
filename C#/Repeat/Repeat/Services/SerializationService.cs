using Newtonsoft.Json;
using Repeat.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Repeat.Services
{
      public class SerializationService
    {
        public static string SerializeJson(ISerializable itemToSerialize)
        {
            string res = JsonConvert.SerializeObject(itemToSerialize);
            return res;
        }

        
        public static ISerializable DeSerializeJson(string data)
        {
            JsonSerializerSettings settings = new JsonSerializerSettings()
            {
                TypeNameHandling = TypeNameHandling.All
            };
            return JsonConvert.DeserializeObject<ISerializable>(data, settings);
        }

    }
}
