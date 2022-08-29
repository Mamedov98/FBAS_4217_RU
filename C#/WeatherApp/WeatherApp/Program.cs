// https://api.openweathermap.org/data/2.5/weather?q=qazax&appid=5191fee1957155f779bfd029a4a97e18&units=metric

using System.Net;
using System.Text.Json;
using System.Text.Json.Serialization;
using WeatherApp;

FirstForecastService first = new();

IForecastService service = first;

var result = service.GetForecastByCity("Baku");

var weather = JsonSerializer.Deserialize<Forecast>(result);

Console.WriteLine(weather.main.temp);