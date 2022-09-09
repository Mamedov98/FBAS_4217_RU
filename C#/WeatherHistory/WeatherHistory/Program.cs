using WeatherHistory;
using WeatherHistory.Model;
using WeatherHistory.Services.Classes;
using WeatherHistory.Services.Interfaces;


Forecast? weather = new();
IDataSerializer dataSerializer = new DataSerializer();
IWeatherClient weatherClient = new WeatherClient(dataSerializer);

Console.Write("Enter name of city: ");
string cityName = Console.ReadLine();

weather = weatherClient.GetWeatherByCity(cityName) as Forecast;
Console.WriteLine(weather);


