using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;
using WeatherHistory.Services.Interfaces;

namespace WeatherHistory.Services.Classes
{
    public class WeatherClient : IWeatherClient
    {
        IDataSerializer dataSerializer;

        string _token = "5191fee1957155f779bfd029a4a97e18";
        string _url = @"https://api.openweathermap.org/data/2.5/weather?q=";

        readonly WebClient? client = new();

        public WeatherClient(IDataSerializer serializer)
        {
            this.dataSerializer = serializer;
        }

        public IWeather GetWeatherByCity(string cityName)
        {
            string link = $"{_url}{cityName}&appid={_token}&units=metric";
            string? result = client?.DownloadString(link);

            if (result != null)
            {
                return this.dataSerializer.Deserialize(result);
            }
            else
            {
                throw new NullReferenceException();
            }
        }
    }
}
