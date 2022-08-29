using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WeatherApp
{
    internal interface IForecastService
    {
        public string GetForecastByCity(string city);
    }
}
