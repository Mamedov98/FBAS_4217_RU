using WeatherHistory.Services.Interfaces;
namespace WeatherHistory.Model;

public class History : IWritable
{
    public Forecast WeatherForecast{ get; set; }
    public DateTime Date { get; set; }
}


class MyClass : IWritable
{
    
}