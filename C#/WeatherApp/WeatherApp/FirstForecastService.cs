using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;

namespace WeatherApp
{
    internal class FirstForecastService : IForecastService
    {
        private string _key = "5191fee1957155f779bfd029a4a97e18";
        private string _url = @"https://api.openweathermap.org/data/2.5/weather?";

        WebClient _client = new();

        public string GetForecastByCity(string city)
        {
            string link = $"{_url}q={city}&appid={_key}&units=metric";
            var result = _client.DownloadString(link);
            
            return result;
        }
    }
}
