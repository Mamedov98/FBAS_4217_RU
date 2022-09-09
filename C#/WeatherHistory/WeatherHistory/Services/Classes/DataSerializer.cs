using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.Json;
using System.Threading.Tasks;
using WeatherHistory.Services.Interfaces;

namespace WeatherHistory.Services.Classes
{
    public class DataSerializer : IDataSerializer
    {
        public IWeather Deserialize(string data) 
        {
            IWeather? result = JsonSerializer.Deserialize<Forecast>(data);
        
            return result ?? throw new NullReferenceException();
        }
    }
}
